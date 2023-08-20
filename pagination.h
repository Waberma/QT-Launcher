#ifndef PAGINATION_H
#define PAGINATION_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QListWidgetItem>
#include <QThread>
#include <thread>
#include <QStandardItemModel>
#include <QMutex>

struct fullindex
{
    int pageindex;
    QModelIndex modelindex;
};

namespace Ui {
class Pagination;
}

class Pagination : public QWidget
{
    Q_OBJECT

public:
    explicit Pagination(QWidget *parent = nullptr);
    ~Pagination();

signals:
    void GetNewNextEl(int startindex, int step, int numOfPages, QSqlQueryModel *mainmodel);
    void setStep(int step);
    void setMapInv(int mapinv);

protected:
    void resizeEvent(QResizeEvent *event);
    void showEvent(QShowEvent *event);

private slots:
    void on_nextbtn_clicked();
    void on_previousbtn_clicked();
    void on_pager_currentIndexChanged(int index);
    void on_searchline_textChanged(const QString &arg1);
    void on_fieldcomboBox_currentIndexChanged(const QString &arg1);
    void on_filterComboBox_currentIndexChanged(const QString &arg1);
    void on_clearFilterBtn_clicked();
    void on_previousSearchBtn_clicked();
    void on_nextSearchBtn_clicked();


private:
    void updateForm();
    void GetNewModel(int index);
    //void GetAllPairs(int index);
    //void makemap(QVector<int>);
    bool takeTableSize();
    //void GetNewEl(int);
    //int maxEl();
    //int minEl();
    void formatFilters();
    void controlPages();

private:
    Ui::Pagination *ui;
    QSqlDatabase db;
    int total;
    int step;
    int totalpage = 1;
    int previousindex;
    int threadstep;
    int el;
    //int min;
    //int max;
    QVector<fullindex> searchvector;
    int searchindex;
    QMap<int,QStandardItemModel *> pages;
    void update();
    bool isReady;
    QThread *secondthread;
    QThread *mainthread;
    QMutex m;

};

#endif // PAGINATION_H
