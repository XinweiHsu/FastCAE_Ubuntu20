/********************************************************************************
** Form generated from reading UI file 'PropertyTable.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYTABLE_H
#define UI_PROPERTYTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PropTable
{
public:
    QGridLayout *gridLayout_2;
    QTableWidget *propTable;
    QWidget *buttonWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *buttonLayout;

    void setupUi(QWidget *PropTable)
    {
        if (PropTable->objectName().isEmpty())
            PropTable->setObjectName(QString::fromUtf8("PropTable"));
        PropTable->resize(246, 482);
        gridLayout_2 = new QGridLayout(PropTable);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        propTable = new QTableWidget(PropTable);
        propTable->setObjectName(QString::fromUtf8("propTable"));

        gridLayout_2->addWidget(propTable, 0, 0, 1, 1);

        buttonWidget = new QWidget(PropTable);
        buttonWidget->setObjectName(QString::fromUtf8("buttonWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buttonWidget->sizePolicy().hasHeightForWidth());
        buttonWidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(buttonWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 0, 1, 1);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName(QString::fromUtf8("buttonLayout"));

        gridLayout->addLayout(buttonLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(buttonWidget, 1, 0, 1, 1);

        buttonWidget->raise();
        propTable->raise();

        retranslateUi(PropTable);

        QMetaObject::connectSlotsByName(PropTable);
    } // setupUi

    void retranslateUi(QWidget *PropTable)
    {
        PropTable->setWindowTitle(QCoreApplication::translate("PropTable", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropTable: public Ui_PropTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYTABLE_H
