#include "mainpage.h"
#include "ui_mainpage.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QLabel>
#include <QMenuBar>
#include <QMenu>
#include <QTextStream>
#include <QList>
#include <QFunctionPointer>
#include <QAction>
#include <QSqlRecord>
#include <QTabWidget>

LoginPage::LoginPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainPage)
{
    ui->setupUi(this);
    ui->box->setVisible(true);
    formatmap();
    menuActions("Сменить пользователя");
}

//Формирование map'a, который вызывает слоты в зависимости от действия меню
void LoginPage::formatmap()
{
    funkrmap.insert("Регистрация", &LoginPage::formatRegist);
    funkrmap.insert("Сменить пароль", &LoginPage::formatChangePass);
    funkrmap.insert("Сменить пользователя", &LoginPage::formatAuthorization);
    funkrmap.insert("Выход", &LoginPage::pressOut);
}

LoginPage::~LoginPage()
{
    delete ui;
}

//Формирование формы для регистрации
void LoginPage::formatRegist()
{
    ui->label1->setText("Логин");
    ui->label2->setText("Пароль");
    ui->label3->setText("Повторите пароль");
    ui->box->setTitle("Регистрация");
    mode = Mode::Regist;
    ui->label3->setVisible(true);
    ui->passfield2->setVisible(true);
}

//Формирование формы для смены пароля
void LoginPage::formatChangePass()
{
    ui->box->setTitle("Смена пароля");
    ui->label1->setText("Прошлый пароль");
    ui->label2->setText("Пароль");
    ui->label3->setText("Новый пароль");
    mode = Mode::ChangePass;
    ui->label3->setVisible(true);
    ui->passfield2->setVisible(true);
}

//Формирование формы для авторизации
void LoginPage::formatAuthorization()
{
    ui->box->setTitle("Авторизация");
    ui->label1->setText("Логин");
    ui->label2->setText("Пароль");
    ui->label3->setVisible(false);
    ui->passfield2->setVisible(false);
    mode = Mode::Auto;
}

//Действие при выходе пользователя из учетной записи
void LoginPage::pressOut()
{
    ClearWindow();
    emit clearMain();
}

//Регистрация действий меню
void LoginPage::menuActions(QString action)
{
    (this->*funkrmap.value(action))();
    ui->box->setVisible(true);

}

//Очистка окна
void LoginPage::ClearWindow()
{
    ui->box->setVisible(false);
    ui->label1->setText("");
    ui->label2->setText("");
    ui->label3->setText("");
    ui->loginfield->clear();
    ui->passfield1->clear();
    ui->passfield2->clear();
}

//Авторизация пользователя
void LoginPage::authorization()
{
    QSqlQuery *autoq = new QSqlQuery(db);

    //Проверка данных
    autoq->prepare("SELECT * FROM Person "
                 "WHERE LOGIN = :LOGIN;");
    autoq->bindValue(":LOGIN",ui->loginfield->text());
    autoq->exec();
    autoq->next();
    if(ui->loginfield->text() != autoq->value(autoq->record().indexOf("Login")).toString() && ui->loginfield->text() != "")
    {
        emit statusBar("Пользователя с таким логином не существует");
        return;
    }
    if(ui->passfield1->text() != autoq->value(autoq->record().indexOf("Pass")).toString())
    {
        emit statusBar("Неверный пароль");
        return;
    }
    QSqlQuery *roleq = new QSqlQuery(db);
    roleq->prepare("SELECT RoleID "
                   "FROM RolePerson "
                   "WHERE PersonID = :ID;");
    roleq->bindValue(":ID", autoq->value(autoq->record().indexOf("ID")).toInt());
    roleq->exec();
    QList<QString> listRoles;
    while(roleq->next())
    {
        listRoles.push_back(roleq->record().value("RoleID").toString());
    }
    emit StartCreateMenu(listRoles);
    emit statusBar("Вход выполнен");
    emit setUser(ui->loginfield->text());
    emit setUserpass(ui->passfield1->text());
    emit SetCornerMenu();
    ui->box->setVisible(false);
    ui->loginfield->clear();
    ui->passfield1->clear();
    emit open();
}

//Регистрация пользователя
void LoginPage::registration()
{
    db.open();
    QSqlQuery *registq = new QSqlQuery(db);
    registq->prepare("SELECT Login FROM Person WHERE Login = :LOGIN");
    registq->bindValue(":LOGIN", ui->loginfield->text());
    registq->exec();
    registq->next();
    if(registq->value(0) != NULL)
    {
        emit statusBar("Логин занят");
        return;
    }
    if(ui->passfield1->text() != ui->passfield2->text())
    {
        emit statusBar("Пароли не совпадают");
        return;
    }
    registq->prepare("INSERT INTO Person(Login, Pass) "
                     "VALUES(:LOGIN, :PASS); ");
    registq->bindValue(":LOGIN", ui->loginfield->text());
    registq->bindValue(":PASS", ui->passfield1->text());
    registq->exec();
    ui->loginfield->clear();
    ui->passfield1->clear();
    ui->passfield2->clear();
    emit statusBar("Регистрация завершена");
}

//Смена пароля пользователя
void LoginPage::changepass()
{
    //db.open();
    if(ui->loginfield->text() != userpass)
    {
        emit statusBar("Пароль введен неверно");
        return;
    }
    if(ui->passfield1->text() != ui->passfield2->text())
    {
        emit statusBar("Пароли не совпадают");
        return;
    }
    //Смена данных в базе
    //db.transaction();
    QSqlQuery *passChangeq = new QSqlQuery(db);
    passChangeq->prepare("UPDATE Person SET Pass = :PASS "
                  "WHERE Login = :LOGIN");
    passChangeq->bindValue(":LOGIN", user);
    passChangeq->bindValue(":PASS", ui->passfield2->text());
    passChangeq->exec();

    //Работа с окном
    emit statusBar("Пароль изменен");
    userpass = ui->passfield2->text();
    ui->loginfield->clear();
    ui->passfield1->clear();
    ui->passfield2->clear();
    //db.commit();
}

//Регистрация нажатия с надписью "Ok"
void LoginPage::on_okBtn_clicked()
{
    if(mode == Mode::Auto)
        authorization();
    if(mode == Mode::Regist)
        registration();
    if(mode == Mode::ChangePass)
        changepass();
}

//Регистрация кнопки с надписью "Cancel" с выходом из приложения
void LoginPage::on_cancelBtn_clicked()
{
    ClearWindow();
    ui->box->setVisible(false);
    exit();
}

//Обработка нажатия кнопок
void LoginPage::keyPressEvent(QKeyEvent *e)
{
    //Нажитие Enter
    if(e->key() == Qt::Key_Return)
        on_okBtn_clicked();
    //Нажание Esc
    if(e->key() == Qt::Key_Escape)
        on_cancelBtn_clicked();

}
