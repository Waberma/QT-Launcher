#include "hellopage.h"
#include "ui_hellopage.h"
#include <QDate>
HelloPage::HelloPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::HelloPage)
{
    ui->setupUi(this);
    QFont font("Times", 28, QFont::Bold);
    ui->time->setFont(font);
    ui->date->setFont(font);
    // При первом запуске приложения поместим текущее время в QLabel

    ui->time->setText(QTime::currentTime().toString("hh:mm:ss"));
    ui->date->setText(QDate::currentDate().toString());
    // Инициализируем Таймер и подключим его к слоту,
    // который будет обрабатывать timeout() таймера

    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, [this]()
    {
        /* Ежесекундно обновляем данные по текущему времени
         * Перезапускать таймер не требуется
         * */
        ui->time->setText(QTime::currentTime().toString("hh:mm:ss"));
    });
    timer->start(1000); // И запустим таймер
}

HelloPage::~HelloPage()
{
    delete ui;
}
