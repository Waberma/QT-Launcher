/********************************************************************************
** Form generated from reading UI file 'paginationoption.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINATIONOPTION_H
#define UI_PAGINATIONOPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PaginationOption
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *mapunvtb;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *steptb;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *PaginationOption)
    {
        if (PaginationOption->objectName().isEmpty())
            PaginationOption->setObjectName(QString::fromUtf8("PaginationOption"));
        PaginationOption->resize(391, 111);
        verticalLayout = new QVBoxLayout(PaginationOption);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(PaginationOption);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        mapunvtb = new QLineEdit(PaginationOption);
        mapunvtb->setObjectName(QString::fromUtf8("mapunvtb"));

        horizontalLayout_2->addWidget(mapunvtb);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(PaginationOption);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        steptb = new QLineEdit(PaginationOption);
        steptb->setObjectName(QString::fromUtf8("steptb"));

        horizontalLayout->addWidget(steptb);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton = new QPushButton(PaginationOption);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_3->addWidget(pushButton, 0, Qt::AlignRight);

        pushButton_2 = new QPushButton(PaginationOption);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_3->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(PaginationOption);

        QMetaObject::connectSlotsByName(PaginationOption);
    } // setupUi

    void retranslateUi(QDialog *PaginationOption)
    {
        PaginationOption->setWindowTitle(QApplication::translate("PaginationOption", "Dialog", nullptr));
        label->setText(QApplication::translate("PaginationOption", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\260\320\275\320\270\321\206 \320\262 \320\277\320\260\320\274\321\217\321\202\320\270", nullptr));
        label_2->setText(QApplication::translate("PaginationOption", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\275\320\260 \321\201\321\202\321\200\320\260\320\275\320\270\321\206\321\203", nullptr));
        steptb->setText(QString());
        pushButton->setText(QApplication::translate("PaginationOption", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        pushButton_2->setText(QApplication::translate("PaginationOption", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaginationOption: public Ui_PaginationOption {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINATIONOPTION_H
