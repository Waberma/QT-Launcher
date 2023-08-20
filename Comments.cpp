////QSqlQueryModel *pocketqueryview = new QSqlTableModel(this, db);
////    if(previousindex == 0)
////    {
////        QStandardItem* item = 0;
////        QStandardItemModel* model = new QStandardItemModel();
////        QStringList labels = QObject::trUtf8("ID, Hoster, Lot, Name").simplified().split(",");
////        model->setHorizontalHeaderLabels(labels);
////        for(int j = 0; step > j; ++j)
////        {
////            for(int k = 0; k < ui->tableView->model()->columnCount(); k++)
////            {
////                QModelIndex ind = ui->tableView->model()->index(j,k,QModelIndex());
////                QVariant b = ui->tableView->model()->data(ind,Qt::DisplayRole);
////                item = new QStandardItem(b.value<QString>());
////                model->setItem(j,k,item);
////            }
////        }

////        ui->tableView_2->setModel(model);
////        previousindex = index;
//        //emit GetNewNextEl(previousindex, index, step, mapinv, queryview);

//////        QString md = b.value<QString>();
//////        QString a = "SELECT * FROM Pagination "
//////                    "LIMIT :startindex, 30;";
//////        a.replace(":startindex", QString::number(index*step));
//////        pocketqueryview->setQuery(a);
//////        ui->tableView_2->setModel(pocketqueryview);
//////        previousindex = index;
//////        emit GetNewNextEl(previousindex, index+3, step, mapinv, queryview);
////    }


////        QString a = "SELECT * FROM Pagination "
////                    "LIMIT :startindex, 30;";
////        a.replace(":startindex", QString::number(index*step));
////        pocketqueryview->setQuery(a);
////        ui->tableView_2->setModel(pocketqueryview);
////        emit GetNewNextEl(index, index+mapinv, step, mapinv, queryview);


////    QMap<int, QString> map;
////    for(int i = startindex; startindex <= endindex; ++startindex)
////    {
////        QString treadpocketmoel = "SELECT * FROM Pagination "
////                                  "LIMIT :startindex, 30;";
////        treadpocketmoel.replace(":startindex", QString::number(i*step));
////        map.insert(startindex,treadpocketmoel);
////    }
////    for(int i = startindex; startindex > endindex - numOfPages*2; --startindex)
////    {
////        QString treadpocketmoel = "SELECT * FROM Pagination "
////                                  "LIMIT :startindex, 30;";
////        treadpocketmoel.replace(":startindex", QString::number(i*step));
////        map.insert(startindex,treadpocketmoel);
////    }

//#include "mainwindow.h"
//#include "ui_mainwindow.h"
//#include <QSqlDatabase>
//#include <QSqlQuery>
//#include <QSqlTableModel>
//#include <QLabel>
//#include <QMenuBar>
//#include <QMenu>
//#include <QTextStream>
//#include <QList>
//#include <QFunctionPointer>
//#include <QAction>
//#include <QSqlRecord>
//#include <QTabWidget>
////Модели и интервью
////
////Пагинация


//MainWindow::MainWindow(QWidget *parent)
//    : QMainWindow(parent)
//    , ui(new Ui::MainWindow)
//{
//    ui->setupUi(this);


//    db = QSqlDatabase::addDatabase("QSQLITE");
//    db.setDatabaseName("./menu.db");
//    if(db.open())
//    {
//        qDebug("DB Open");
//    }
//    else
//    {
//        qDebug("NoOpen");
//    }
//    ui->tabWidget->setTabBarAutoHide(true);
//    ui->tabWidget->setTabsClosable(true);

//    mainpage = new MainPage;
//    personpage = new PersonPage;
//    rolepage = new RolePage;
//    menupage = new Menupage;
//    pagin = new Pagination;

//    //Связи с RolePage
//    connect(rolepage, &RolePage::statusBar, this, &MainWindow::inStatusBar);
//    connect(rolepage, &RolePage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));
//    connect(mainpage,  &MainPage::setUser, rolepage, &RolePage::SetUser);

//    //Связи с PersonPage
//    connect(personpage, &PersonPage::statusBar, this, &MainWindow::inStatusBar);
//    connect(personpage, &PersonPage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));
//    connect(mainpage,  &MainPage::setUser, personpage, &PersonPage::SetUser);

//    //Связи с MainPage
//    connect(this, &MainWindow::MainPagesignal, mainpage, &MainPage::menuActions);
//    connect(mainpage, &MainPage::statusBar, this, &MainWindow::inStatusBar);
//    connect(mainpage, &MainPage::setUser, this, &MainWindow::SetUser);
//    connect(mainpage, &MainPage::setUserpass, this, &MainWindow::SetUserpass);
//    connect(mainpage, &MainPage::SetCornerMenu, this, &MainWindow::SetCornerMenu);
//    connect(mainpage, &MainPage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));

//    //Связи с MenuPage
//    connect(mainpage,  &MainPage::setUser, menupage, &Menupage::SetUser);
//    connect(menupage, &Menupage::statusBar, this, &MainWindow::inStatusBar);
//    connect(menupage, &Menupage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));

//    connect(this, &MainWindow::openOption, pagin, &Pagination::openOption);
//    ui->tabWidget->addTab(mainpage,"Главная страница");

//    SetCornerMenu();
//}

//MainWindow::~MainWindow()
//{
//    delete ui;
//}

//void MainWindow::bd_clicked()
//{
//    tv = new TableVier;
//    tv->show();
//}

//void MainWindow::on_LogOut_clicked()
//{
//    user = "Гость";
//    ui->menubar->clear();
//    ui->menubar->cornerWidget()->close();
//    SetCornerMenu();
//}

//void MainWindow::menuActions()
//{
//    QAction *action = (QAction *) sender();
//    emit MainPagesignal(action->text());
//    if(action->text() == "Автор")
//    {
//        bd_clicked();
//    }
//    if(action->text() == "Выход")
//    {
//        on_LogOut_clicked();
//    }
//    if(action->text() == "Пользователи")
//    {
//        ui->tabWidget->addTab(personpage,"Пользователи");
//        ui->tabWidget->setCurrentWidget(personpage);
//    }
//    if(action->text() == "Роли")
//    {
//        ui->tabWidget->addTab(rolepage,"Роли");
//        ui->tabWidget->setCurrentWidget(rolepage);
//    }
//    if(action->text() == "Объекты меню")
//    {
//        ui->tabWidget->addTab(menupage,"Объекты меню");
//        ui->tabWidget->setCurrentWidget(menupage);
//    }
//    if(action->text() == "Таблица")
//    {
//        if(pagin->isHidden())
//        {
//            ui->tabWidget->addTab(pagin, "Таблица закупок");
//            ui->tabWidget->setCurrentWidget(pagin);
//            QMenu *menu2 = new QMenu("Таблица");
//            QAction *action = new QAction("Настройки", this);
//            connect(action, SIGNAL(triggered()), this, SLOT(menuActions()));
//            menu2->addAction(action);
//            ui->menubar->addMenu(menu2);
//            //AddAppMenu(0,"Pagination");
//        }
//    }
//    if(action->text() == "Настройки" && ui->tabWidget->currentWidget() == pagin)
//    {
//        emit openOption();
//    }
//}

//QMenu* MainWindow::createMenu(int ID, QMenu *menu)
//{
//    QSqlQuery *menuq = new QSqlQuery(db);
//    menuq->prepare("SELECT ID, title, parent, appName "
//                    "FROM MenuItems "
//                    "WHERE parent = :ID AND (Role IS NULL OR Role = '');");
//    menuq->bindValue(":ID",ID);
//    menuq->exec();

//    QSqlRecord rec = menuq->record();
//    const int titleIndex = rec.indexOf("title");
//    const int appNameIndex = rec.indexOf("appName");
//    const int IDIndex = rec.indexOf("ID");

//    while(menuq->next())
//    {
//        if(menuq->value(appNameIndex).isNull() || menuq->value(appNameIndex).toString() == "")
//        {
//                QMenu *menu2 = new QMenu(menuq->value(titleIndex).toString());
//                menu->addMenu(createMenu(menuq->value(IDIndex).toInt(), menu2));
//        }
//        else
//        {
//                QAction *action = new QAction(menuq->value(titleIndex).toString(), this);
//                connect(action, SIGNAL(triggered()), this, SLOT(menuActions()));
//                menu->addAction(action);
//        }
//    }
//    return menu;
//}

//void MainWindow::SetCornerMenu()
//{
//    if(user != "Гость")
//    {
//        ui->menubar->cornerWidget()->close();
//        QSqlQuery *cornerMenuq = new QSqlQuery(db);
//        cornerMenuq->exec("SELECT * FROM CornerMenu "
//                          "WHERE Active IS NOT NULL;");
//        cornerMenu = new QMenuBar(ui->menubar);
//        cornermenu1 = new QMenu("Добро пожаловать, "+user,this);
//        while(cornerMenuq->next())
//        {
//            QAction *userAction = new QAction(cornerMenuq->value(cornerMenuq->record().indexOf("Name")).toString(),this);
//            connect(userAction, SIGNAL(triggered()), this, SLOT(menuActions()));
//            cornermenu1->addAction(userAction);
//        }
//        cornerMenu->addMenu(cornermenu1);
//        ui->menubar->setCornerWidget(cornerMenu);
//    }
//    else
//    {
//        QSqlQuery *cornerMenuq = new QSqlQuery(db);
//        cornerMenuq->exec("SELECT * FROM CornerMenu "
//                          "WHERE Active IS NULL;");
//        cornerMenu = new QMenuBar(ui->menubar);
//        cornermenu1 = new QMenu("Добро пожаловать, "+user,this);
//        while(cornerMenuq->next())
//        {
//            QAction *userAction = new QAction(cornerMenuq->value(cornerMenuq->record().indexOf("Name")).toString(),this);
//            connect(userAction, SIGNAL(triggered()), this, SLOT(menuActions()));
//            cornermenu1->addAction(userAction);
//        }
//        cornerMenu->addMenu(cornermenu1);
//        ui->menubar->setCornerWidget(cornerMenu);
//    }
//    ui->menubar->cornerWidget()->show();
//}

//QMenu* MainWindow::createMenu(int ID, QMenu *menu, QList<QString> rolelist)
//{
//    createMenu(ID,menu);
//    QSqlQuery *roleMenuq = new QSqlQuery(db);
//    QString role;
//    QString comma;
//    for(auto i = rolelist.begin(); i != rolelist.end(); ++i)
//    {
//        role += comma + *i;
//        comma = ",";
//    }
//    roleMenuq->prepare("Select DISTINCT MenuItems.ID, MenuItems.Title, MenuItems.parent, MenuItems.AppName "
//              "FROM MenuItems "
//              "LEFT JOIN RoleItems "
//                "ON MenuItems.ID = RoleItems.ItemID "
//              "WHERE RoleItems.RoleID IN (" + role + ") AND parent = :ID;");
//    roleMenuq->bindValue(":ID", ID);
//    roleMenuq->exec();
//    QSqlRecord rec = roleMenuq->record();
//    int titleIndex = rec.indexOf("title");
//    int appNameIndex = rec.indexOf("appName");
//    int IDIndex = rec.indexOf("ID");
//    while(roleMenuq->next())
//    {
//        if(roleMenuq->value(roleMenuq->record().indexOf("appName")).isNull() || roleMenuq->value(appNameIndex).toString() == "")
//        {
//                QMenu *menu2 = new QMenu(roleMenuq->value(titleIndex).toString());
//                menu->addMenu(createMenu(roleMenuq->value(IDIndex).toInt(), menu2, rolelist));
//        }
//        else
//        {
//                QAction *action = new QAction(roleMenuq->value(titleIndex).toString(), this);
//                connect(action, SIGNAL(triggered()), this, SLOT(menuActions()));
//                menu->addAction(action);
//        }
//    }
//    return menu;
//}

//QMenu *MainWindow::AddAppMenu(int ID, QString appname)
//{
////    QSqlQuery *titleq = new QSqlQuery(db);
////    titleq->exec("SELECT ID, title FROM Menutems "
////            "Where parent IS NULL AND Name = '" + appname+ "';");
////    titleq->next();
////    QString a = titleq->record().value("title").toString();
////    QMenu *menu = new QMenu(titleq->record().value("title").toString());
//}

//void MainWindow::StartCreateMenu()
//{
//    QSqlQuery *menubarq = new QSqlQuery(db);
//    menubarq->exec("SELECT ID, title FROM MenuItems "
//             "WHERE (parent IS NULL or parent = '') AND Role IS NULL");

//    QSqlRecord rec = menubarq->record();
//    const int titleIndex = rec.indexOf("title");
//    const int IDIndex = rec.indexOf("ID");
//    while(menubarq->next())
//    {
//        menu = menuBar()->addMenu(menubarq->value(titleIndex).toString());
//        createMenu(menubarq->value(IDIndex).toInt(),menu);
//    }
//}

//void MainWindow::StartCreateMenu(QList<QString> rolelist)
//{
//    this->rolelist = rolelist;
//    QSqlQuery *menubarq = new QSqlQuery(db);
//    menubarq->exec("SELECT ID, title FROM MenuItems "
//                   "WHERE (parent IS NULL or parent = '') AND Role IS NULL");
//    ui->menubar->clear();
//    while(menubarq->next())
//    {
//        menu = menuBar()->addMenu(menubarq->value(menubarq->record().indexOf("title")).toString());
//        createMenu(menubarq->value(menubarq->record().indexOf("ID")).toInt(),menu, rolelist);
//    }

//    QSqlQuery *additationMenuq = new QSqlQuery(db);
//    QString role;
//    QString comma;
//    for(auto element :rolelist)
//    {
//        role += comma + element;
//        comma = ",";
//    }
//    additationMenuq->exec("Select DISTINCT MenuItems.ID, MenuItems.Title, MenuItems.parent, MenuItems.AppName "
//              "FROM MenuItems "
//              "LEFT JOIN RoleItems "
//                "ON MenuItems.ID = RoleItems.ItemID "
//              "WHERE RoleItems.RoleID IN ("+role+") AND parent IS NULL;");
//    while(additationMenuq->next())
//    {
//        menu = menuBar()->addMenu(additationMenuq->value(additationMenuq->record().indexOf("title")).toString());
//        createMenu(additationMenuq->value(additationMenuq->record().indexOf("ID")).toInt(), menu, rolelist);
//    }

//}

//void MainWindow::inStatusBar(QString info)
//{
//    ui->statusbar->setVisible(true);
//    ui->statusbar->showMessage(info);
//}

//void MainWindow::on_tabWidget_tabCloseRequested(int index)
//{
//    ui->tabWidget->removeTab(index);
//    ui->menubar->clear();
//    SetCornerMenu();
//    StartCreateMenu(rolelist);
//}





//Импорт Ini
//    if(action->text() == "Настройки" && ui->tabWidget->currentWidget() == pagin)
//    {
//        emit openOption();
//    }
//    if(action->text() == "Импорт")
//    {
//        QString ininame = QFileDialog::getOpenFileName(
//                    this,
//                    tr("Open Ini File"),
//                    "E://QT Project//build-MainWindow-Desktop_Qt_5_14_2_MinGW_32_bit-Debug//INI//"
//                    );
//        QSettings sett(ininame, QSettings::IniFormat);
//        sett.setIniCodec("UTF-8"); // кодировка
//        int size = sett.value("0/Num", "").toInt(); //получить опцию

//        QSqlQuery *insertq = new QSqlQuery(db);
//        for(int i = 1; i < 1+size; i++)
//        {
//            QString insert;
//            insert += "'" + sett.value(QString::number(i) + "/Title", "").toString() + "'" + ",";
//            insert += "'" + sett.value(QString::number(i) + "/Name", "").toString() + "'" + ",";
//            insert += sett.value(QString::number(i) + "/Parent", "").toString() + ",";
//            insert += "'" + sett.value(QString::number(i) + "/AppName", "").toString() + "'" + ",";
//            insert += sett.value(QString::number(i) + "/Role", "").toString();
//            insertq->exec("INSERT INTO MenuItems(Title, Name, Parent, AppName, Role) "
//                          "Values(" + insert +");");
//        }
//    }


//    if(action->text() == "Стартовая страница")
//    {
//        ui->tabWidget->addTab(hellopage,"Стартовая страница");
//        ui->tabWidget->setCurrentWidget(rolepage);
//    }
//    if(action->text() == "Пользователи")
//    {
//        personpage = new PersonPage;
//        //Связи с PersonPage
//        //connect(personpage, &PersonPage::statusBar, this, &MainWindow::inStatusBar);
//        //connect(personpage, &PersonPage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));
//        //connect(loginpage,  &LoginPage::setUser, personpage, &PersonPage::SetUser);

//        ui->tabWidget->addTab(personpage,"Пользователи");
//        ui->tabWidget->setCurrentWidget(personpage);
//    }
//    if(action->text() == "Роли")
//    {
//        rolepage = new RolePage;
//        //Связи с RolePage
//        //connect(rolepage, &RolePage::statusBar, this, &MainWindow::inStatusBar);
//        //connect(rolepage, &RolePage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));
//        //connect(loginpage,  &LoginPage::setUser, rolepage, &RolePage::SetUser);

//        ui->tabWidget->addTab(rolepage,"Роли");
//        ui->tabWidget->setCurrentWidget(rolepage);
//    }
//    if(action->text() == "Объекты меню")
//    {
//        menupage = new Menupage;
//        //Связи с MenuPage
//        //connect(loginpage, &LoginPage::setUser, menupage, &Menupage::SetUser);
//        //connect(menupage, &Menupage::statusBar, this, &MainWindow::inStatusBar);
//        //connect(menupage, &Menupage::StartCreateMenu, this,  static_cast<void (MainWindow::*)(QList<QString> rolelist)> (&MainWindow::StartCreateMenu));

//        ui->tabWidget->addTab(menupage,"Объекты меню");
//        ui->tabWidget->setCurrentWidget(menupage);
//    }
//    if(action->text() == "Таблица")
//    {
//        pagin = new Pagination();
//        ui->tabWidget->addTab(pagin, "Таблица закупок");
//        ui->tabWidget->setCurrentWidget(pagin);
//    }
//    if(action->text() == "Калькулятор")
//    {
//        calc = new CalculateMainWindow;
//        ui->tabWidget->addTab(calc, "Калькулятор");
//        ui->tabWidget->setCurrentWidget(calc);
//    }

//    if(action == "Роли")
//        wig = new RolePage;
//    if(action == "Таблица")
//        wig = new Pagination;
//    if(action == "Пользователи")
//        wig = new PersonPage;
//    if(action == "Объекты меню")
//        wig = new Menupage;
//    if(action == "Калькулятор")
//        wig = new CalculateMainWindow;
//    if(action == "Стартовая страница")
//        wig = new HelloPage;

////Метод для получение всех моделей по индексу
//void Pagination::GetAllPairs(int index)
//{
//    int created = 0;
//    //pages.clear();
//    std::vector <std::unique_ptr<std::thread>> th_vec;
//    QVector<int> indexes;
//    indexes.append(index);
//    for (int i = index+1; i <= index+threadstep && i < totalpage; ++i)
//    {
//        indexes.append(i);
//        th_vec.push_back(std::unique_ptr<std::thread>(new std::thread([this, i]()
//        {
//            GetNewModel(i);
//        })));
//        created++;
//    }

//    for (int i = index-1; i >= index-threadstep && i > 0; --i)
//    {
//        indexes.append(i);
//        th_vec.push_back(std::unique_ptr<std::thread>(new std::thread([this, i]()
//        {
//            GetNewModel(i);
//        })));
//        created++;
//    }

//    const int all = created;
//    for (size_t i = 0; i < size_t(all); ++i)
//    {
//        th_vec.at(i)->detach();
//    }
//    makemap(indexes);
//}

//void Pagination::makemap(QVector<int> list)
//{
//    if(list == QVector<int>(NULL))
//    {
//        for(int i = ui->pager->currentIndex(); i < ui->pager->currentIndex()+threadstep
//            && i < totalpage; i++)
//        {
//            list.append(i);
//        }
//        for(int i = ui->pager->currentIndex(); i < ui->pager->currentIndex()-threadstep
//            && i > 0; i--)
//        {
//            list.append(i);
//        }
//    }
//    for (auto it = pages.begin(); it != pages.end(); it++)
//    {
//        if(!isIn(list,it.key()))
//        {
//            pages.remove(it.key());
//        }
//    }
//    if(isIn(list,0))
//    {
//        GetNewModel(0);
//    }
//    ui->searchline->setText(ui->searchline->text());
//}

////Метод для создание одной формы и удаления лишней
//void Pagination::GetNewEl(int pageNum)
//{
//    if(pageNum > ui->pager->currentIndex() && pageNum < totalpage-2)
//    {
//        if(ui->pager->currentIndex() - minEl() > threadstep)
//        {
//            std::thread thrprevious([this, pageNum]()
//            {
//                QMutexLocker lk(&m);
//                pages.remove(pageNum-threadstep*2);
//            });

//            thrprevious.detach();
//        }
//        std::thread thrnext([this, pageNum]()
//        {
//            GetNewModel(pageNum+1);
//        });
//        thrnext.detach();
//    }
//    else if(pageNum <= ui->pager->currentIndex() && pageNum > 0)
//    {
//        if(pageNum - minEl() < threadstep)
//        {
//            std::unique_ptr<std::thread> thrnext(new std::thread([this, pageNum]()
//            {
//                GetNewModel(pageNum-1);
//            }));
//            thrnext->detach();
//        }
//        std::unique_ptr<std::thread> thrprevious(new std::thread([this, pageNum]()
//        {
//            QMutexLocker lk(&m);
//            pages.remove(maxEl());
//        }));
//        thrprevious->detach();
//    }
//    makemap(QVector<int>(NULL));
//}

//int Pagination::maxEl()
//{
//    int max = 0;
//    for(auto it = pages.begin(); it != pages.end(); ++it) {
//          if(max < it.key())
//              max = it.key();
//      }
//      return max;
//}

//int Pagination::minEl()
//{
//    int min = int(NULL);
//    for(auto it = pages.begin(); it != pages.end(); ++it) {
//          if(min > it.key() || min == int(NULL))
//              min = it.key();
//      }
//    return min;
//}


//        if(index > previousindex)
//        {
//            max = maxEl();
//            for(int i = 1; i-1 < index - previousindex; i++)
//                GetNewEl(max+(i-1));
//        }
//        if(index <= previousindex)
//        {
//            min = minEl();
//            for(int i = 1; i-1 < previousindex -  index; i++)
//                GetNewEl(min-(i-1));
//        }

//        previousindex = index;

//    previousindex = index;
//    GetAllPairs(index);
