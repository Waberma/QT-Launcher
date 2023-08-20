#ifndef HELLOPAGE_H
#define HELLOPAGE_H

#include <QWidget>
#include <QTime>
#include <QTimer>
namespace Ui {
class HelloPage;
}

class HelloPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelloPage(QWidget *parent = nullptr);
    ~HelloPage();

private:
    Ui::HelloPage *ui;
    QTimer *timer;
};

#endif // HELLOPAGE_H
