/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *Dairy;
    QAction *Calendar;
    QAction *Reg;
    QAction *ChangePass_2;
    QAction *BD;
    QAction *F1;
    QAction *F2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_11;
    QFrame *hl;
    QTabWidget *tabWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(825, 341);
        QIcon icon;
        icon.addFile(QString::fromUtf8("C:/Users/\320\230\320\273\321\216\321\210\320\260/Downloads/ico.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("MainWindow{\n"
"background-color:rgb(200, 200, 200);\n"
"}\n"
"QProgressBar:chunk\n"
"{\n"
"	background-color:rgb(200, 200, 200);\n"
"	background:rgb(200, 200, 200);\n"
"	width: 3px;\n"
"	margin: 1px;\n"
"}\n"
"QMenuBar::item{\n"
"	background-color:rgb(200, 200, 200);\n"
"	background:rgb(200, 200, 200);\n"
"}\n"
"QMenuBar{\n"
"	background-color:rgb(200, 200, 200);\n"
"	background:rgb(200, 200, 200);\n"
"}"));
        Dairy = new QAction(MainWindow);
        Dairy->setObjectName(QString::fromUtf8("Dairy"));
        Calendar = new QAction(MainWindow);
        Calendar->setObjectName(QString::fromUtf8("Calendar"));
        Reg = new QAction(MainWindow);
        Reg->setObjectName(QString::fromUtf8("Reg"));
        ChangePass_2 = new QAction(MainWindow);
        ChangePass_2->setObjectName(QString::fromUtf8("ChangePass_2"));
        BD = new QAction(MainWindow);
        BD->setObjectName(QString::fromUtf8("BD"));
        F1 = new QAction(MainWindow);
        F1->setObjectName(QString::fromUtf8("F1"));
        F2 = new QAction(MainWindow);
        F2->setObjectName(QString::fromUtf8("F2"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_11 = new QVBoxLayout(centralwidget);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        hl = new QFrame(centralwidget);
        hl->setObjectName(QString::fromUtf8("hl"));
        hl->setFrameShape(QFrame::HLine);
        hl->setFrameShadow(QFrame::Sunken);

        verticalLayout_11->addWidget(hl);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget:pane\n"
"{\n"
"	border: 1px;\n"
"	background-color:rgb(200, 200, 200);\n"
"}\n"
"QTabBar::tab\n"
"{\n"
"	background-color: rgb(190, 190, 190);\n"
"}\n"
"QTabBar::tab::selected\n"
"{\n"
"	background-color:rgb(207, 207, 207);\n"
"}\n"
"QTabBar::tab::hover\n"
"{\n"
"	\n"
"	background-color: rgb(217, 217, 217);\n"
"}"));
        tabWidget->setTabPosition(QTabWidget::South);

        verticalLayout_11->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 825, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "PISLauncher", nullptr));
        Dairy->setText(QApplication::translate("MainWindow", "\320\224\320\275\320\265\320\262\320\275\320\270\320\272", nullptr));
        Calendar->setText(QApplication::translate("MainWindow", "\320\232\320\260\320\273\320\265\320\275\320\264\320\260\321\200\321\214", nullptr));
        Reg->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        ChangePass_2->setText(QApplication::translate("MainWindow", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        BD->setText(QApplication::translate("MainWindow", "\320\221\320\260\320\267\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        F1->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 1", nullptr));
        F2->setText(QApplication::translate("MainWindow", "\320\244\320\270\320\273\321\214\321\202\321\200 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
