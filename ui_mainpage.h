/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainPage
{
public:
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *box;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1;
    QLabel *label2;
    QLabel *label3;
    QVBoxLayout *verticalLayout;
    QLineEdit *loginfield;
    QLineEdit *passfield1;
    QLineEdit *passfield2;
    QLabel *statusLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelBtn;
    QPushButton *okBtn;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *MainPage)
    {
        if (MainPage->objectName().isEmpty())
            MainPage->setObjectName(QString::fromUtf8("MainPage"));
        MainPage->resize(833, 557);
        horizontalLayout_3 = new QHBoxLayout(MainPage);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        box = new QGroupBox(MainPage);
        box->setObjectName(QString::fromUtf8("box"));
        QFont font;
        font.setFamily(QString::fromUtf8("Times New Roman"));
        font.setPointSize(12);
        box->setFont(font);
        box->setFocusPolicy(Qt::StrongFocus);
        box->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_4 = new QVBoxLayout(box);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label1 = new QLabel(box);
        label1->setObjectName(QString::fromUtf8("label1"));
        QFont font1;
        font1.setPointSize(14);
        label1->setFont(font1);

        verticalLayout_2->addWidget(label1);

        label2 = new QLabel(box);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setFont(font1);

        verticalLayout_2->addWidget(label2);

        label3 = new QLabel(box);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setFont(font1);

        verticalLayout_2->addWidget(label3);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loginfield = new QLineEdit(box);
        loginfield->setObjectName(QString::fromUtf8("loginfield"));

        verticalLayout->addWidget(loginfield);

        passfield1 = new QLineEdit(box);
        passfield1->setObjectName(QString::fromUtf8("passfield1"));
        passfield1->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passfield1);

        passfield2 = new QLineEdit(box);
        passfield2->setObjectName(QString::fromUtf8("passfield2"));
        passfield2->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(passfield2);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        statusLabel = new QLabel(box);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));

        verticalLayout_3->addWidget(statusLabel);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(30, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        cancelBtn = new QPushButton(box);
        cancelBtn->setObjectName(QString::fromUtf8("cancelBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cancelBtn->sizePolicy().hasHeightForWidth());
        cancelBtn->setSizePolicy(sizePolicy);
        QFont font2;
        font2.setPointSize(13);
        cancelBtn->setFont(font2);

        horizontalLayout_2->addWidget(cancelBtn);

        okBtn = new QPushButton(box);
        okBtn->setObjectName(QString::fromUtf8("okBtn"));
        okBtn->setFont(font2);

        horizontalLayout_2->addWidget(okBtn);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Preferred);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(box);


        retranslateUi(MainPage);

        QMetaObject::connectSlotsByName(MainPage);
    } // setupUi

    void retranslateUi(QWidget *MainPage)
    {
        MainPage->setWindowTitle(QApplication::translate("MainPage", "Form", nullptr));
        box->setTitle(QApplication::translate("MainPage", "\320\240\320\265\320\263\320\270\321\201\321\202\321\200\320\260\321\206\320\270\321\217", nullptr));
        label1->setText(QApplication::translate("MainPage", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label2->setText(QApplication::translate("MainPage", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label3->setText(QApplication::translate("MainPage", "\320\237\320\276\320\262\321\202\320\276\321\200\320\270\321\202\320\265 \320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        statusLabel->setText(QString());
        cancelBtn->setText(QApplication::translate("MainPage", "Cancel", nullptr));
        okBtn->setText(QApplication::translate("MainPage", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainPage: public Ui_MainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
