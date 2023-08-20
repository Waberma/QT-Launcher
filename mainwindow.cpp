#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QLabel>
#include <QMenuBar>
#include <QMenu>
#include <QTextStream>
#include <QList>
#include <QAction>
#include <QSqlRecord>
#include <QTabWidget>
#include <QFileDialog>
#include <QVariant>
#include <QPluginLoader>
#include <QMessageBox>
#include "MenuInterface.h"

typedef struct str_plugin
{
    QString namePlugin;     ///< Имя плагина
    QString dirPlugin;      ///< Расположение плагина
}TSTR_PLUGIN;

bool isIn(QList<QString> &list, QString el)
{
    for(int i = 0; i < list.size(); i++)
    {
        if(list.at(i) == el)
            return true;
    }
    return false;
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->tabWidget->setTabBarAutoHide(true);
    ui->tabWidget->setTabsClosable(true);


    dbConnect();

    formatMap();

    createLoginPage();
}

//Подключение к базе данных
void MainWindow::dbConnect()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("menu.db");
    if(db.open())
    {
        qDebug("DB Open");

    }
    else
    {
        qDebug("NoOpen");
        QMessageBox::critical(this, "Ошибка", "Авторизация недоступна");
        this->close();
    }
}

//Формирование map для работы в виджетами
void MainWindow::formatMap()
{
    hellopage = new HelloPage;
    rolepage = new RolePage;
    menupage = new Menupage;
    calc = new CalculateMainWindow(nullptr);
    personpage = new PersonPage;
    pagin = new Pagination;

    widmap.insert("Роли", rolepage);
    widmap.insert("Таблица", pagin);
    widmap.insert("Пользователи", personpage);
    widmap.insert("Объекты меню", menupage);
    widmap.insert("Калькулятор", calc);
    widmap.insert("Стартовая страница", hellopage);

    for (auto it = widmap.begin(); it != widmap.end(); it++) {
        it.value()->setObjectName("WidgetApp");
    }
}

//Создание и подключение виджета авторизации
void MainWindow::createLoginPage()
{
    //Связи с LoginPage
    loginpage = new LoginPage;
    connect(loginpage, &LoginPage::open, this, &MainWindow::openHelloPage);
    connect(this, &MainWindow::MainPagesignal, loginpage, &LoginPage::menuActions);
    connect(loginpage, &LoginPage::statusBar, this, &MainWindow::inStatusBar);
    connect(loginpage, &LoginPage::setUser, this, &MainWindow::SetUser);
    connect(loginpage, &LoginPage::setUserpass, this, &MainWindow::SetUserpass);
    connect(loginpage, &LoginPage::SetCornerMenu, this, &MainWindow::SetCornerMenu);
    connect(loginpage, &LoginPage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));
    connect(loginpage, &LoginPage::clearMain, this, &MainWindow::on_LogOut_clicked);
    connect(loginpage, &LoginPage::exit, this, [this](){this->close();});

    ui->tabWidget->addTab(loginpage,"Авторизация");
    SetCornerMenu();
}

//Загрузка плагина
void MainWindow::loadPlagin(QString name)
{
    QStringList listFiles;
    QDir dir(qApp->applicationDirPath());
    dir.cd("Plugins");
    QStringList filters;
    if(dir.exists())
    {
        listFiles = dir.entryList(QStringList("*"), QDir::Files);
    }
    for(QString str: listFiles)
    {
        //Загрузка файла плагина
        QPluginLoader loader(dir.absolutePath() + "/" +str);
        QObject *pobj = nullptr;
        pobj = qobject_cast<QObject*>(loader.instance());
        //Проверка загружаемого файла на рассширение .dll
        if(!pobj)
            continue;

        //Загрузка плагина
        PluginInterface *plugin = nullptr;
        plugin = qobject_cast<PluginInterface *>(pobj);
        if(!plugin)
            continue;

        //Проверка тот ли файл плагина загружается
        if(plugin->getNamePlugin() != name)
            continue;

        //Сохранение необходимой информации из загруженного плагина
        TSTR_PLUGIN plug;
        plug.namePlugin = plugin->getNamePlugin();
        plug.dirPlugin = dir.absolutePath() + "/" +str;
        delete plugin;

        //Загружка виджета
        QPluginLoader widgloader(plug.dirPlugin);
        QObject *pobj2 = qobject_cast<QObject*>(loader.instance());
        if(!pobj2)
            continue;
        PluginInterface *pluginWidget = qobject_cast<PluginInterface *>(pobj2);
        if(!plugin)
            continue;
        QObject *ob = pluginWidget->getPluginWidget();
        if(!ob)
            continue;
        MenuWidgetInterface *menuWidget = dynamic_cast<MenuWidgetInterface *>(ob);

        //Получение меню для работы с виджетом
        QMenu *pluginmenu = menuWidget->getMenu();
        if(pluginmenu != nullptr)
        {
            this->menuBar()->addMenu(pluginmenu);
            connect(menuWidget, &QWidget::destroyed, pluginmenu, &QMenu::deleteLater);
        }
        if(!menuWidget)
            continue;

        ui->tabWidget->addTab(menuWidget, plug.namePlugin);
        ui->tabWidget->setCurrentWidget(menuWidget);
        menuWidget->setFocus();
    }
}

//Запуск виджета из map'а
void MainWindow::loadWidget(QString action)
{
    QWidget *wig = widmap.value(action);

    ui->tabWidget->addTab(wig,action);
    ui->tabWidget->setCurrentWidget(wig);
    wig->setFocus();
}

MainWindow::~MainWindow()
{
    delete ui;
}

//Выход из учетной записи
void MainWindow::on_LogOut_clicked()
{
    user = "Гость";
    ui->menubar->clear();
    ui->menubar->cornerWidget()->close();
    ui->tabWidget->clear();
    SetCornerMenu();
}

//Слот для обработки действий меню
void MainWindow::menuActions()
{
    QAction *action = static_cast<QAction *>(sender());
    if(action->objectName() == "loginapp")
    {
        ui->tabWidget->addTab(loginpage,"Авторизация");
        ui->tabWidget->setCurrentWidget(loginpage);
        loginpage->setFocus();
        emit MainPagesignal(action->text());
    }
    if(action->objectName() == "WidgetApp")
        loadWidget(action->text());
    if(action->objectName() == "PluginApp")
        loadPlagin(action->text());
}

//Формирование CornerMenu для работы с LoginPage
void MainWindow::SetCornerMenu()
{
    QSqlQuery *cornerMenuq = new QSqlQuery(db);
    cornerMenu = new QMenuBar(ui->menubar);
    if(user != "Гость")
    {
        ui->menubar->cornerWidget()->close();
        cornerMenuq->exec("SELECT * FROM CornerMenu "
                          "WHERE Active IS NOT NULL;");

        cornermenu1 = new QMenu("Добро пожаловать, "+user,this);
        while(cornerMenuq->next())
        {
            QAction *userAction = new QAction(cornerMenuq->value(cornerMenuq->record().indexOf("Name")).toString(),this);
            userAction->setObjectName(cornerMenuq->value(cornerMenuq->record().indexOf("AppName")).toString());
            connect(userAction, SIGNAL(triggered()), this, SLOT(menuActions()));
            cornermenu1->addAction(userAction);
        }
        cornerMenu->addMenu(cornermenu1);
        ui->menubar->setCornerWidget(cornerMenu);
        ui->menubar->cornerWidget()->show();
        return;
    }
    cornerMenuq->exec("SELECT * FROM CornerMenu "
                      "WHERE Active IS NULL;");
    cornermenu1 = new QMenu("Добро пожаловать, "+user,this);
    while(cornerMenuq->next())
    {
        QAction *userAction = new QAction(cornerMenuq->value(cornerMenuq->record().indexOf("Name")).toString(),this);
        userAction->setObjectName(cornerMenuq->value(cornerMenuq->record().indexOf("AppName")).toString());
        connect(userAction, SIGNAL(triggered()), this, SLOT(menuActions()));
        cornermenu1->addAction(userAction);
    }
    cornerMenu->addMenu(cornermenu1);
    ui->menubar->setCornerWidget(cornerMenu);
    ui->menubar->cornerWidget()->show();
}

//Создание меню на основе ролей вошедшего пользователя
QMenu* MainWindow::createMenu(int ID, QMenu *menu, QList<QString> rolelist)
{
    QSqlQuery *roleMenuq = new QSqlQuery(db);
    QString role;
    QString comma;

    //Перевод списка ролей в строку
    for(auto i = rolelist.begin(); i != rolelist.end(); ++i)
    {
        role += comma + *i;
        comma = ",";
    }

    //Запрос в базу данных для выбора какие объекты меню относятся к меню, которое пришло
    roleMenuq->prepare("Select DISTINCT MenuItems.ID, MenuItems.Title, MenuItems.parent, MenuItems.AppName "
              "FROM MenuItems "
              "LEFT JOIN RoleItems "
                "ON MenuItems.ID = RoleItems.ItemID "
              "WHERE RoleItems.RoleID IN (" + role + ") AND parent = :ID;");
    roleMenuq->bindValue(":ID", ID);
    roleMenuq->exec();

    while(roleMenuq->next())
    {
        //Проверка объект является QAction или QMenu
        if(roleMenuq->value(roleMenuq->record().indexOf("appName")).isNull() || roleMenuq->value(roleMenuq->record().indexOf("appName")).toString() == "")
        {
                QMenu *menu2 = new QMenu(roleMenuq->value(roleMenuq->record().indexOf("title")).toString());
                menu->addMenu(createMenu(roleMenuq->value(roleMenuq->record().indexOf("ID")).toInt(), menu2, rolelist));
                continue;
        }
        QAction *action = new QAction(roleMenuq->value(roleMenuq->record().indexOf("title")).toString(), this);
        if(action->text() == "Роли")
        {
            widmap.insert(action->text(), rolepage);
        }

        //Присвоение ObjectName для работы слота menuAction
        action->setObjectName(roleMenuq->value(roleMenuq->record().indexOf("appName")).toString());

        connect(action, SIGNAL(triggered()), this, SLOT(menuActions()));
        menu->addAction(action);

    }
    return menu;
}

//Начало построение меню, которые будет находится в MenuBar
void MainWindow::StartCreateMenu(QList<QString> rolelist)
{
    this->rolelist = rolelist;
    QSqlQuery *menubarq = new QSqlQuery(db);
    menubarq->exec("SELECT ID, title FROM MenuItems "
                   "WHERE (parent IS NULL or parent = '') AND Role IS NULL");
    ui->menubar->clear();
    while(menubarq->next()){
        menu = menuBar()->addMenu(menubarq->value(menubarq->record().indexOf("title")).toString());
        createMenu(menubarq->value(menubarq->record().indexOf("ID")).toInt(),menu, rolelist);
    }

    QSqlQuery *additationMenuq = new QSqlQuery(db);
    QString role;
    QString comma;
    for(auto element :rolelist){
        role += comma + element;
        comma = ",";
    }
    additationMenuq->exec("Select DISTINCT MenuItems.ID, MenuItems.Title, MenuItems.parent, MenuItems.AppName "
              "FROM MenuItems "
              "LEFT JOIN RoleItems "
                "ON MenuItems.ID = RoleItems.ItemID "
              "WHERE RoleItems.RoleID IN ("+role+") AND parent IS NULL;");
    while(additationMenuq->next()){
        menu = menuBar()->addMenu(additationMenuq->value(additationMenuq->record().indexOf("title")).toString());
        createMenu(additationMenuq->value(additationMenuq->record().indexOf("ID")).toInt(), menu, rolelist);
    }

}

//Слот вывода информации в StatusBar
void MainWindow::inStatusBar(QString info)
{
    ui->statusbar->setVisible(true);
    ui->statusbar->showMessage(info);
}

//Закрытие виджета в tabWidget
void MainWindow::on_tabWidget_tabCloseRequested(int index)
{
    QWidget *widget = ui->tabWidget->widget(index);
    ui->tabWidget->removeTab(index);
    if(widget->objectName() != "WidgetApp")
        widget->deleteLater();
}

void MainWindow::openHelloPage()
{
    ui->tabWidget->clear();
    ui->tabWidget->addTab(hellopage, "Стартовая страница");
    ui->tabWidget->setCurrentWidget(hellopage);
    hellopage->setFocus();
}

void MainWindow::SetUser(QString user)
{
    this->user = user;
}

void MainWindow::SetUserpass(QString userpass)
{
    this->userpass = userpass;
}

