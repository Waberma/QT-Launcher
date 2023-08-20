#ifndef MAINPAGE_H
#define MAINPAGE_H

#include <QWidget>
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
#include <QKeyEvent>

enum class Mode
{
    Regist,
    Auto,
    ChangePass
};

namespace Ui {
class MainPage;
}

class LoginPage : public QWidget
{
    Q_OBJECT
    typedef  void (LoginPage::*loginFunktr)();
    //typedef void (LoginPage::*lg)();  // Please do this!
public:
    explicit LoginPage(QWidget *parent = nullptr);
    ~LoginPage() override;
signals:
    void statusBar(QString);
    void setUser(QString);
    void setUserpass(QString);
    void SetCornerMenu();
    //void StartCreateMenu();
    void StartCreateMenu(QList<QString> rolelist);
    void open();
    void clearMain();
    void exit();

public slots:

    void menuActions(QString action);

    void keyPressEvent(QKeyEvent *e) override;

//    void on_UserChange_clicked();

private slots:
    void on_okBtn_clicked();

    void on_cancelBtn_clicked();

    void formatAuthorization();
protected:

private:
    Ui::MainPage *ui;
    QSqlDatabase db;
    QString proff;
    QString user = "Гость";
    QString userpass;
    void ClearWindow();
    void authorization();
    void registration();
    void changepass();

    QAction *PassChangerAction;
    QAction *RegAction;
    Mode mode;
    QMap<QString, loginFunktr> funkrmap;
    void formatRegist();
    void formatChangePass();
    void formatmap();
    void pressOut();
};

#endif // MAINPAGE_H
