/********************************************************************************
** Form generated from reading UI file 'hellopage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELLOPAGE_H
#define UI_HELLOPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelloPage
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *helloLabel;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *time;
    QLabel *date;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *HelloPage)
    {
        if (HelloPage->objectName().isEmpty())
            HelloPage->setObjectName(QString::fromUtf8("HelloPage"));
        HelloPage->resize(889, 530);
        verticalLayout_3 = new QVBoxLayout(HelloPage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout_2->setContentsMargins(0, -1, -1, -1);
        helloLabel = new QLabel(HelloPage);
        helloLabel->setObjectName(QString::fromUtf8("helloLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(helloLabel->sizePolicy().hasHeightForWidth());
        helloLabel->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Segoe UI Black"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        helloLabel->setFont(font);
        helloLabel->setStyleSheet(QString::fromUtf8("all {\n"
"  box-sizing: border-box;\n"
"}\n"
"root {\n"
"  --background-color: black;\n"
"  --text-color: hsl(0, 0%, 100%);\n"
"}\n"
"body {\n"
"  margin: 0;\n"
"}\n"
".wrapper {\n"
"  display: grid;\n"
"  place-content: center;\n"
"  background-color: var(--background-color);\n"
"  min-height: 100vh;\n"
"  font-family: \"Oswald\", sans-serif;\n"
"  font-size: clamp(1.5rem, 1rem + 18vw, 15rem);\n"
"  font-weight: 700;\n"
"  text-transform: uppercase;\n"
"  color: var(--text-color);\n"
"}\n"
".wrapper > div {\n"
"  grid-area: 1/1/-1/-1;\n"
"}\n"
".top {\n"
"  clip-path: polygon(0% 0%, 100% 0%, 100% 48%, 0% 58%);\n"
"}\n"
".bottom {\n"
"  clip-path: polygon(0% 60%, 100% 50%, 100% 100%, 0% 100%);\n"
"  color: transparent;\n"
"  background: -webkit-linear-gradient(177deg, black 53%, var(--text-color) 65%);\n"
"  background: linear-gradient(177deg, black 53%, var(--text-color) 65%);\n"
"  background-clip: text;\n"
"  -webkit-background-clip: text;\n"
"  transform: translateX(-0.02em);\n"
"}"));
        helloLabel->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_2->addWidget(helloLabel);

        label = new QLabel(HelloPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(344, 225));
        label->setPixmap(QPixmap(QString::fromUtf8("ico.ico")));
        label->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);

        verticalLayout_2->addWidget(label);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        time = new QLabel(HelloPage);
        time->setObjectName(QString::fromUtf8("time"));
        time->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(time);

        date = new QLabel(HelloPage);
        date->setObjectName(QString::fromUtf8("date"));
        date->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout->addWidget(date);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(HelloPage);

        QMetaObject::connectSlotsByName(HelloPage);
    } // setupUi

    void retranslateUi(QWidget *HelloPage)
    {
        HelloPage->setWindowTitle(QApplication::translate("HelloPage", "Form", nullptr));
        helloLabel->setText(QApplication::translate("HelloPage", "\320\224\320\276\320\261\321\200\320\276 \320\277\320\276\320\266\320\260\320\273\320\276\320\262\320\260\321\202\321\214", nullptr));
        label->setText(QString());
        time->setText(QApplication::translate("HelloPage", "TextLabel", nullptr));
        date->setText(QApplication::translate("HelloPage", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelloPage: public Ui_HelloPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELLOPAGE_H
