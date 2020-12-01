/********************************************************************************
** Form generated from reading UI file 'ParaLinkageManager.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARALINKAGEMANAGER_H
#define UI_PARALINKAGEMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_ParaLinkageManager
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *CreateQPB;
    QPushButton *EditQPB;
    QPushButton *DeleteQPB;
    QSpacerItem *horizontalSpacer_4;
    QListWidget *linkageListWidget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QTableWidget *activeTableWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *drivenTableWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QTableWidget *drivenGroupTableWidget;

    void setupUi(QDialog *ParaLinkageManager)
    {
        if (ParaLinkageManager->objectName().isEmpty())
            ParaLinkageManager->setObjectName(QString::fromUtf8("ParaLinkageManager"));
        ParaLinkageManager->resize(1127, 757);
        gridLayout = new QGridLayout(ParaLinkageManager);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(20);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        CreateQPB = new QPushButton(ParaLinkageManager);
        CreateQPB->setObjectName(QString::fromUtf8("CreateQPB"));

        horizontalLayout_4->addWidget(CreateQPB);

        EditQPB = new QPushButton(ParaLinkageManager);
        EditQPB->setObjectName(QString::fromUtf8("EditQPB"));

        horizontalLayout_4->addWidget(EditQPB);

        DeleteQPB = new QPushButton(ParaLinkageManager);
        DeleteQPB->setObjectName(QString::fromUtf8("DeleteQPB"));

        horizontalLayout_4->addWidget(DeleteQPB);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 2);

        linkageListWidget = new QListWidget(ParaLinkageManager);
        linkageListWidget->setObjectName(QString::fromUtf8("linkageListWidget"));

        gridLayout->addWidget(linkageListWidget, 1, 0, 6, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(ParaLinkageManager);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        gridLayout->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        activeTableWidget = new QTableWidget(ParaLinkageManager);
        activeTableWidget->setObjectName(QString::fromUtf8("activeTableWidget"));

        gridLayout->addWidget(activeTableWidget, 2, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(ParaLinkageManager);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        drivenTableWidget = new QTableWidget(ParaLinkageManager);
        drivenTableWidget->setObjectName(QString::fromUtf8("drivenTableWidget"));

        gridLayout->addWidget(drivenTableWidget, 4, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(ParaLinkageManager);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout->addLayout(horizontalLayout, 5, 1, 1, 1);

        drivenGroupTableWidget = new QTableWidget(ParaLinkageManager);
        drivenGroupTableWidget->setObjectName(QString::fromUtf8("drivenGroupTableWidget"));

        gridLayout->addWidget(drivenGroupTableWidget, 6, 1, 1, 1);

        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 8);

        retranslateUi(ParaLinkageManager);

        QMetaObject::connectSlotsByName(ParaLinkageManager);
    } // setupUi

    void retranslateUi(QDialog *ParaLinkageManager)
    {
        ParaLinkageManager->setWindowTitle(QCoreApplication::translate("ParaLinkageManager", "Parameter Linkage Manager", nullptr));
        CreateQPB->setText(QCoreApplication::translate("ParaLinkageManager", "Create", nullptr));
        EditQPB->setText(QCoreApplication::translate("ParaLinkageManager", "Edit", nullptr));
        DeleteQPB->setText(QCoreApplication::translate("ParaLinkageManager", "Delete", nullptr));
        label_3->setText(QCoreApplication::translate("ParaLinkageManager", "Active", nullptr));
        label_2->setText(QCoreApplication::translate("ParaLinkageManager", "Driven", nullptr));
        label->setText(QCoreApplication::translate("ParaLinkageManager", "Driven Group", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaLinkageManager: public Ui_ParaLinkageManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARALINKAGEMANAGER_H
