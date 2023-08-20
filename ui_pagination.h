/********************************************************************************
** Form generated from reading UI file 'pagination.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINATION_H
#define UI_PAGINATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Pagination
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QPushButton *clearFilterBtn;
    QHBoxLayout *horizontalLayout_3;
    QComboBox *filterComboBox;
    QComboBox *fieldcomboBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QPushButton *previousSearchBtn;
    QLabel *searchNum;
    QPushButton *nextSearchBtn;
    QLineEdit *searchline;
    QHBoxLayout *horizontalLayout_2;
    QTableView *mainTable;
    QTableView *paginTable;
    QHBoxLayout *horizontalLayout;
    QPushButton *previousbtn;
    QComboBox *pager;
    QPushButton *nextbtn;

    void setupUi(QWidget *Pagination)
    {
        if (Pagination->objectName().isEmpty())
            Pagination->setObjectName(QString::fromUtf8("Pagination"));
        Pagination->resize(632, 453);
        verticalLayout_3 = new QVBoxLayout(Pagination);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(Pagination);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Tahoma"));
        font.setPointSize(12);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_4->addWidget(label);

        clearFilterBtn = new QPushButton(Pagination);
        clearFilterBtn->setObjectName(QString::fromUtf8("clearFilterBtn"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(clearFilterBtn->sizePolicy().hasHeightForWidth());
        clearFilterBtn->setSizePolicy(sizePolicy);
        clearFilterBtn->setMaximumSize(QSize(85, 16777215));

        horizontalLayout_4->addWidget(clearFilterBtn);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        filterComboBox = new QComboBox(Pagination);
        filterComboBox->setObjectName(QString::fromUtf8("filterComboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(filterComboBox->sizePolicy().hasHeightForWidth());
        filterComboBox->setSizePolicy(sizePolicy1);
        filterComboBox->setMinimumSize(QSize(50, 0));
        filterComboBox->setMaximumSize(QSize(120, 16777215));

        horizontalLayout_3->addWidget(filterComboBox);

        fieldcomboBox = new QComboBox(Pagination);
        fieldcomboBox->setObjectName(QString::fromUtf8("fieldcomboBox"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(fieldcomboBox->sizePolicy().hasHeightForWidth());
        fieldcomboBox->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(fieldcomboBox);


        verticalLayout->addLayout(horizontalLayout_3);


        horizontalLayout_6->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_2 = new QLabel(Pagination);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(label_2);

        previousSearchBtn = new QPushButton(Pagination);
        previousSearchBtn->setObjectName(QString::fromUtf8("previousSearchBtn"));
        sizePolicy1.setHeightForWidth(previousSearchBtn->sizePolicy().hasHeightForWidth());
        previousSearchBtn->setSizePolicy(sizePolicy1);
        previousSearchBtn->setMaximumSize(QSize(35, 16777215));

        horizontalLayout_5->addWidget(previousSearchBtn);

        searchNum = new QLabel(Pagination);
        searchNum->setObjectName(QString::fromUtf8("searchNum"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Tahoma"));
        font1.setPointSize(10);
        searchNum->setFont(font1);
        searchNum->setAlignment(Qt::AlignCenter);

        horizontalLayout_5->addWidget(searchNum);

        nextSearchBtn = new QPushButton(Pagination);
        nextSearchBtn->setObjectName(QString::fromUtf8("nextSearchBtn"));
        sizePolicy1.setHeightForWidth(nextSearchBtn->sizePolicy().hasHeightForWidth());
        nextSearchBtn->setSizePolicy(sizePolicy1);
        nextSearchBtn->setMaximumSize(QSize(45, 16777215));

        horizontalLayout_5->addWidget(nextSearchBtn);


        verticalLayout_2->addLayout(horizontalLayout_5);

        searchline = new QLineEdit(Pagination);
        searchline->setObjectName(QString::fromUtf8("searchline"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(searchline->sizePolicy().hasHeightForWidth());
        searchline->setSizePolicy(sizePolicy3);
        searchline->setStyleSheet(QString::fromUtf8("border:none\n"
""));

        verticalLayout_2->addWidget(searchline);


        horizontalLayout_6->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        mainTable = new QTableView(Pagination);
        mainTable->setObjectName(QString::fromUtf8("mainTable"));

        horizontalLayout_2->addWidget(mainTable);

        paginTable = new QTableView(Pagination);
        paginTable->setObjectName(QString::fromUtf8("paginTable"));
        paginTable->setWordWrap(false);

        horizontalLayout_2->addWidget(paginTable);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        previousbtn = new QPushButton(Pagination);
        previousbtn->setObjectName(QString::fromUtf8("previousbtn"));

        horizontalLayout->addWidget(previousbtn, 0, Qt::AlignRight);

        pager = new QComboBox(Pagination);
        pager->setObjectName(QString::fromUtf8("pager"));
        pager->setContextMenuPolicy(Qt::NoContextMenu);

        horizontalLayout->addWidget(pager);

        nextbtn = new QPushButton(Pagination);
        nextbtn->setObjectName(QString::fromUtf8("nextbtn"));

        horizontalLayout->addWidget(nextbtn, 0, Qt::AlignLeft);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(Pagination);

        QMetaObject::connectSlotsByName(Pagination);
    } // setupUi

    void retranslateUi(QWidget *Pagination)
    {
        Pagination->setWindowTitle(QApplication::translate("Pagination", "Form", nullptr));
        label->setText(QApplication::translate("Pagination", "\320\244\320\270\320\273\321\214\321\202\321\200", nullptr));
        clearFilterBtn->setText(QApplication::translate("Pagination", "Clear", nullptr));
        label_2->setText(QApplication::translate("Pagination", "\320\237\320\276\320\270\321\201\320\272", nullptr));
        previousSearchBtn->setText(QApplication::translate("Pagination", "<", nullptr));
        searchNum->setText(QString());
        nextSearchBtn->setText(QApplication::translate("Pagination", ">", nullptr));
        previousbtn->setText(QApplication::translate("Pagination", "<", nullptr));
        nextbtn->setText(QApplication::translate("Pagination", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Pagination: public Ui_Pagination {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINATION_H
