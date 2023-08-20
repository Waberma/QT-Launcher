#ifndef PERSONPAGE_H
#define PERSONPAGE_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QListWidgetItem>

namespace Ui {
class PersonPage;
}

class PersonPage : public QWidget
{
    Q_OBJECT

public:
    explicit PersonPage(QWidget *parent = nullptr);
    ~PersonPage();

private slots:
    void on_addrolepb_clicked();

    void on_deleterolepb_clicked();

    void on_editPB_clicked();

    void on_addRowPB_clicked();

    void on_CancelPB_clicked();

    void on_OkPB_clicked();

    void on_Table_clicked(const QModelIndex &index);

    void on_addWidget_itemClicked(QListWidgetItem *item);

    void on_delWidget_itemClicked(QListWidgetItem *item);

private:
    Ui::PersonPage *ui;
    QSqlDatabase db;
    QSqlQuery *q;
    QSqlTableModel *persontm;
    QString action;
    QList<QString> obtain;
    QList<QString> notObtain;
    QString dbname;
    int row;
    bool activite = false;
    void clearAction();
    void DeleteEl(QString el, QList<QString> &list);
    QString toString(QList<QString> list);
};

#endif // PERSONPAGE_H
