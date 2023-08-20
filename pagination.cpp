#include "pagination.h"
#include "ui_pagination.h"
#include <QStandardItemModel>
#include <QSqlRecord>
#include <thread>
#include <cmath>
#include <chrono>
#include <QMutex>
#include <QMutexLocker>
#include <vector>
#include <QMessageBox>
#include <QDebug>

bool isIn(QVector<int> &list, int el)
{
    for(int i = 0; i < list.size(); i++)
    {
        if(list.at(i) == el)
            return true;
    }
    return false;
}

Pagination::Pagination(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Pagination)
{
    ui->setupUi(this);
    ui->mainTable->setVisible(false);

    //Создание главной модели
    QSqlQueryModel *queryview = new QSqlTableModel(this, db);
    queryview->setQuery("SELECT * FROM Pagination;");
    ui->mainTable->setModel(queryview);

    while(queryview->canFetchMore())
        queryview->fetchMore();
    ui->paginTable->setHorizontalScrollBarPolicy ( Qt::ScrollBarAlwaysOff );

    //Отметка кол-ва потоков в памяти
    threadstep = 4;

    formatFilters();

}

Pagination::~Pagination()
{
    delete ui;
}

//Формирование фильтра
void Pagination::formatFilters()
{
    ui->fieldcomboBox->setEnabled(false);
    ui->filterComboBox->addItem("ID");
    ui->filterComboBox->addItem("Hoster");
    ui->filterComboBox->addItem("Lot");
    ui->filterComboBox->addItem("Name");
}

//Слот определяющий какие страницы надо создать, а какие удалить
void Pagination::controlPages()
{
    //Определение какие страницы должны быть загружены
    QVector<int> list;
    for(int i = ui->pager->currentIndex(); i < ui->pager->currentIndex()+threadstep
        && i < totalpage; i++)
    {
        list.append(i);
    }
    for(int i = ui->pager->currentIndex(); i > ui->pager->currentIndex()-threadstep
        && i >= 0; i--)
    {
        list.append(i);
    }

    //Загрузка страниц
    int created = 0;
    std::vector <std::unique_ptr<std::thread>> th_vec;
    for(int i = 0; i < list.size(); i++)
    {
        created++;
        th_vec.push_back(std::unique_ptr<std::thread>(new std::thread([this, i]()
        {
            GetNewModel(i);
        })));
    }

    const int all = created;
    for (size_t i = 0; i < size_t(all); ++i)
    {
        th_vec.at(i)->detach();
    }

    //Удаление ненужных страниц
    for (auto it = pages.begin(); it != pages.end(); it++)
    {
        if(!isIn(list,it.key()))
        {
            pages.remove(it.key());
            continue;
        }
    }
}

//Получить табличку по индексу
void Pagination::GetNewModel(int index)
{
    if(index < 0 && pages.value(index) != nullptr)
        return;
    int l;
    //Создание модели
    QStandardItemModel* model = new QStandardItemModel();
    QStringList labels = QString("ID, Hoster, Lot, Name").split(",");
    model->setHorizontalHeaderLabels(labels);
    l = 0;
    QStandardItem* item = nullptr;

    //Прохождение по главной в модели, в которой хранятся данные полностью
    for(int j = index*step; index*step+step > j; ++j)
    {
        for(int k = 0; k < ui->mainTable->model()->columnCount(); k++)
        {
            QModelIndex ind = ui->mainTable->model()->index(j,k,QModelIndex());
            QVariant b = ui->mainTable->model()->data(ind,Qt::DisplayRole);
            item = new QStandardItem(b.value<QString>());
            model->setItem(l,k,item);
        }
        l++;
    }

    //Мютекс, который контролирует работу потоков, чтобы те не обратились к одной области памяти одновременно
    QMutexLocker lk(&m);
    if(lk.mutex()->try_lock())
        QMessageBox::warning(this, "Внимание","Ошибка");
    else
        pages.insert(index,model);
    ui->searchline->setText(ui->searchline->text());
}

//Обработка изменения размера экрана
void Pagination::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    if(takeTableSize())
        updateForm();
}

//Возвращает True, если на экран стало помещаться больше/меньше элементов чем раньше. В противном случае False
bool Pagination::takeTableSize()
{
    if(step != (ui->paginTable->height()-25)/ui->mainTable->rowHeight(0))
    {
        step = (ui->paginTable->height()-25)/ui->mainTable->rowHeight(0);
        return 1;
    }
    return 0;
}

//Обновление формы
void Pagination::updateForm()
{
    pages.clear();
    int startindex = 0;
    if(ui->paginTable->model() != nullptr)
    {
        QModelIndex ind = ui->paginTable->model()->index(0,0,QModelIndex());
        QVariant b = ui->paginTable->model()->data(ind,Qt::DisplayRole);
        startindex = b.value<int>();
    }

    total = ui->mainTable->model()->rowCount();
    int cmbindex = NULL;
    for(int totalpage = 1; totalpage*step < total+step; totalpage++)
    {
        if(startindex > totalpage*step && startindex < totalpage*step+step  && cmbindex == NULL)
            cmbindex = totalpage+1;
    }
    ui->pager->clear();
    for(int totalpage = 1; totalpage*step < total+step; totalpage++)
    {
        ui->pager->addItem(QString::number(totalpage));
        this->totalpage = totalpage;
    }
    ui->pager->setCurrentIndex(cmbindex);
    on_searchline_textChanged(ui->searchline->text());
}

void Pagination::showEvent(QShowEvent *event) {
    QWidget::showEvent( event );
    takeTableSize();
}

//Слот обрабатывабщий изменение просматриваемой страницы
void Pagination::on_pager_currentIndexChanged(int index)
{
    if(pages.count(index))
    {
        ui->paginTable->setModel(pages.value(index));
        controlPages();
        return;
    }
    GetNewModel(index);
    ui->paginTable->setModel(pages.value(index));
    controlPages();
}

void Pagination::on_nextbtn_clicked()
{
    if(ui->pager->currentIndex() < totalpage-2)
    {
        ui->pager->setCurrentIndex(ui->pager->currentIndex()+1);
    }
}

void Pagination::on_previousbtn_clicked()
{
    if(ui->pager->currentIndex() > 0)
    {
        ui->pager->setCurrentIndex(ui->pager->currentIndex()-1);
    }
}

//Поиск по всем колонкам и строкам
void Pagination::on_searchline_textChanged(const QString &arg1)
{
    searchvector.clear();
    searchindex = 0;
    if(arg1 == "")
    {
        ui->searchNum->setText(QString::number(searchindex) + " из " + QString::number(searchvector.size()));
        return;
    }
    for(auto it = pages.begin(); it != pages.end(); ++it)
    {
        for(int j = 0; j < it.value()->rowCount(); ++j)
        {
            for(int k = 0; k < it.value()->columnCount(); k++)
            {
                QModelIndex ind = it.value()->index(j,k,QModelIndex());
                QVariant b = it.value()->data(ind,Qt::DisplayRole);
                QString a = b.value<QString>();
                if(a.contains(arg1))
                {
                    fullindex insertindex;
                    insertindex.pageindex = it.key();
                    insertindex.modelindex = ind;
                    searchvector.push_back(insertindex);
                }
            }
        }
    }
    if(searchvector.size() == 0)
    {
        ui->searchNum->setText(QString::number(searchindex) + " из " + QString::number(searchvector.size()));
        return;
    }
    ui->searchNum->setText(QString::number(searchindex+1) + " из " + QString::number(searchvector.size()));
    ui->pager->setCurrentIndex(searchvector.at(searchindex).pageindex);
    ui->paginTable->setCurrentIndex(searchvector.at(searchindex).modelindex);
}

//Выбор поля для фильтрации
void Pagination::on_fieldcomboBox_currentIndexChanged(const QString &arg1)
{
    QSqlQueryModel *fieldmodel = new QSqlTableModel(this, db);
    QString arg = arg1;
    QString a = "SELECT * FROM Pagination "
                "WHERE " + ui->filterComboBox->currentText() + " = " + arg + ";";
    fieldmodel->setQuery("SELECT * FROM Pagination "
                         "WHERE " + ui->filterComboBox->currentText() + " = '" + arg + "';");
    ui->mainTable->setModel(fieldmodel);
    updateForm();
}

//Выбор поля для фильтрации
void Pagination::on_filterComboBox_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "ID")
        return;
    QSqlQueryModel *filtermodel = new QSqlTableModel(this, db);
    filtermodel->setQuery("SELECT " + arg1 + " "
                          "FROM Pagination "
                          "GROUP BY Hoster "
                          "HAVING Count(" + arg1 + ") >= 2 "
                          "ORDER BY " + arg1 + ";");
    ui->fieldcomboBox->setModel(filtermodel);
    ui->fieldcomboBox->setEnabled(true);
}

//Отключение фильтра
void Pagination::on_clearFilterBtn_clicked()
{
    QSqlQueryModel *queryview = new QSqlTableModel(this, db);
    queryview->setQuery("SELECT * FROM Pagination;");
    ui->mainTable->setModel(queryview);
    updateForm();
}

void Pagination::on_previousSearchBtn_clicked()
{
    if(searchindex == 0 || searchvector.size() == 0)
        return;
    searchindex -= 1;
    ui->pager->setCurrentIndex(searchvector.at(searchindex).pageindex);
    ui->paginTable->setCurrentIndex(searchvector.at(searchindex).modelindex);
    ui->searchNum->setText(QString::number(searchindex+1) + " из " + QString::number(searchvector.size()));
}

void Pagination::on_nextSearchBtn_clicked()
{
    if(searchindex+1 == searchvector.size() || searchvector.size() == 0)
        return;
    searchindex += 1;
    if(ui->pager->currentIndex() != searchvector.at(searchindex).pageindex)
        ui->pager->setCurrentIndex(searchvector.at(searchindex).pageindex);
    ui->paginTable->setCurrentIndex(searchvector.at(searchindex).modelindex);
    ui->searchNum->setText(QString::number(searchindex+1) + " из " + QString::number(searchvector.size()));
}
