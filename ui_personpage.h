/********************************************************************************
** Form generated from reading UI file 'personpage.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONPAGE_H
#define UI_PERSONPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PersonPage
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QTableView *Table;
    QVBoxLayout *verticalLayout;
    QListWidget *addWidget;
    QSpacerItem *verticalSpacer_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addrolepb;
    QPushButton *deleterolepb;
    QFrame *line_2;
    QListWidget *delWidget;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *editPB;
    QPushButton *addRowPB;
    QPushButton *CancelPB;
    QPushButton *OkPB;

    void setupUi(QWidget *PersonPage)
    {
        if (PersonPage->objectName().isEmpty())
            PersonPage->setObjectName(QString::fromUtf8("PersonPage"));
        PersonPage->resize(756, 397);
        verticalLayout_2 = new QVBoxLayout(PersonPage);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        Table = new QTableView(PersonPage);
        Table->setObjectName(QString::fromUtf8("Table"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Table->sizePolicy().hasHeightForWidth());
        Table->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(Table);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        addWidget = new QListWidget(PersonPage);
        addWidget->setObjectName(QString::fromUtf8("addWidget"));

        verticalLayout->addWidget(addWidget);

        verticalSpacer_2 = new QSpacerItem(20, 175, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        line = new QFrame(PersonPage);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        addrolepb = new QPushButton(PersonPage);
        addrolepb->setObjectName(QString::fromUtf8("addrolepb"));
        addrolepb->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_2->addWidget(addrolepb);

        deleterolepb = new QPushButton(PersonPage);
        deleterolepb->setObjectName(QString::fromUtf8("deleterolepb"));
        deleterolepb->setStyleSheet(QString::fromUtf8("border:none"));

        horizontalLayout_2->addWidget(deleterolepb);


        verticalLayout->addLayout(horizontalLayout_2);

        line_2 = new QFrame(PersonPage);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        delWidget = new QListWidget(PersonPage);
        delWidget->setObjectName(QString::fromUtf8("delWidget"));

        verticalLayout->addWidget(delWidget);

        verticalSpacer = new QSpacerItem(20, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        editPB = new QPushButton(PersonPage);
        editPB->setObjectName(QString::fromUtf8("editPB"));

        horizontalLayout->addWidget(editPB);

        addRowPB = new QPushButton(PersonPage);
        addRowPB->setObjectName(QString::fromUtf8("addRowPB"));

        horizontalLayout->addWidget(addRowPB);

        CancelPB = new QPushButton(PersonPage);
        CancelPB->setObjectName(QString::fromUtf8("CancelPB"));

        horizontalLayout->addWidget(CancelPB);

        OkPB = new QPushButton(PersonPage);
        OkPB->setObjectName(QString::fromUtf8("OkPB"));

        horizontalLayout->addWidget(OkPB);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(PersonPage);

        QMetaObject::connectSlotsByName(PersonPage);
    } // setupUi

    void retranslateUi(QWidget *PersonPage)
    {
        PersonPage->setWindowTitle(QApplication::translate("PersonPage", "Form", nullptr));
        addrolepb->setText(QApplication::translate("PersonPage", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\200\320\276\320\273\321\214", nullptr));
        deleterolepb->setText(QApplication::translate("PersonPage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\200\320\276\320\273\321\214", nullptr));
        editPB->setText(QApplication::translate("PersonPage", "\320\240\320\265\320\264\320\260\320\272\321\202\320\270\321\200\320\276\320\262\320\260\321\202\321\214", nullptr));
        addRowPB->setText(QApplication::translate("PersonPage", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        CancelPB->setText(QApplication::translate("PersonPage", "\320\236\321\202\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        OkPB->setText(QApplication::translate("PersonPage", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PersonPage: public Ui_PersonPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONPAGE_H
