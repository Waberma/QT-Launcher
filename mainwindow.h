#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "personpage.h"
#include "rolepage.h"
#include "mainpage.h"
#include "menupage.h"
#include "pagination.h"
#include "calc.h"
#include "hellopage.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    typedef  void (CalculateMainWindow::*calcSlot)();  // Please do this!

    void on_LogOut_clicked();
signals:
    void openDB(QString);
    void MainPagesignal(QString);
    void openOption();
    void otherAppMenuAction(QString);
    void setSlots(QString);
    void getParent();
    void createaction(QString);

public slots:
    void inStatusBar(QString info);

private slots:
    void menuActions();

    void on_tabWidget_tabCloseRequested(int index);

    void openHelloPage();


private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel *tm;
    QString proff;
    QString user = "Гость";

    QList<QString> rolelist;
    void SetUser(QString user);

    QString userpass;
    void SetUserpass(QString userpass);
    QMenuBar *cornerMenu;
    QMenu *menu;
    QMenu *cornermenu1;
    QMenu *cornermenu2;
    QTabWidget *tabwidget;

    PersonPage *personpage;
    LoginPage *loginpage;
    RolePage *rolepage;
    Menupage *menupage;
    Pagination *pagin;
    CalculateMainWindow *calc;
    HelloPage *hellopage;

    QMenu* createMenu(int ID, QMenu *menu, QList<QString> rolelist);
    void SetCornerMenu();
    void StartCreateMenu(QList<QString> rolelist);

    QMap<QString, QWidget*> widmap;
    void ClearWindow();
    QAction *PassChangerAction;
    QAction *RegAction;

    void dbConnect();
    void formatMap();
    void createLoginPage();
    void loadPlagin(QString);
    void loadWidget(QString);
};
#endif // MAINWINDOW_H
