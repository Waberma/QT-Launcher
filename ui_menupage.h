/********************************************************************************
** Form generated from reading UI file 'menupage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUPAGE_H
#define UI_MENUPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Menupage
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTreeWidget *Table;
    QVBoxLayout *verticalLayout;
    QListWidget *addWidget;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *additempb;
    QPushButton *deleteitempb;
    QFrame *line_2;
    QListWidget *delWidget;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *editPB;
    QPushButton *addRowPB;
    QPushButton *CancelPB;
    QPushButton *OkPB;

    void setupUi(QWidget *Menupage)
    {
        if (Menupage->objectName().isEmpty())
            Menupage->setObjectName(QString::fromUtf8("Menupage"));
        Menupage->resize(590, 499);
        verticalLayout_2 = new QVBoxLayout(Menupage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Table = new QTreeWidget(Menupage);
        Table->setObjectName(QString::fromUtf8("Table"));

        horizontalLayout_3->addWidget(Table);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addWidget = new QListWidget(Menupage);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));

        verticalLayout->addWidget(addWidget);

        verticalSpacer = new QSpacerItem(20, 175, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(Menupage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        additempb = new QPushButton(Menupage);
        additempb->setObjectName(QString::fromUtf8("additempb"));
        additempb->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        horizontalLayout_2->addWidget(additempb);

        deleteitempb = new QPushButton(Menupage);
        deleteitempb->setObjectName(QString::fromUtf8("deleteitempb"));
        deleteitempb->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_2->addWidget(deleteitempb);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(Menupage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        delWidget = new QListWidget(Menupage);
        delWidget->setObjectName(QString::fromUtf8("delWidget"));

        verticalLayout->addWidget(delWidget);

        verticalSpacer_2 = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editPB = new QPushButton(Menupage);
        editPB->setObjectName(QString::fromUtf8("editPB"));

        horizontalLayout->addWidget(editPB);

        addRowPB = new QPushButton(Menupage);
        addRowPB->setObjectName(QString::fromUtf8("addRowPB"));
        addRowPB->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(addRowPB);

        CancelPB = new QPushButton(Menupage);
        CancelPB->setObjectName(QString::fromUtf8("CancelPB"));

        horizontalLayout->addWidget(CancelPB);

        OkPB = new QPushButton(Menupage);
        OkPB->setObjectName(QString::fromUtf8("OkPB"));
        OkPB->setMinimumSize(QSize(80, 0));

        horizontalLayout->addWidget(OkPB);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(Menupage);

        QMetaObject::connectSlotsByName(Menupage);
    } // setupUi

    void retranslateUi(QWidget *Menupage)
    {
        Menupage->setWindowTitle(QApplication::translate("Menupage", "Form", nullptr));
        additempb->setText(QApplication::translate("Menupage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        deleteitempb->setText(QApplication::translate("Menupage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        editPB->setText(QApplication::translate("Menupage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addRowPB->setText(QApplication::translate("Menupage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        CancelPB->setText(QApplication::translate("Menupage", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        OkPB->setText(QApplication::translate("Menupage", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Menupage: public Ui_Menupage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUPAGE_H
