/********************************************************************************
** Form generated from reading UI file 'columndataform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COLUMNDATAFORM_H
#define UI_COLUMNDATAFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ColumnDataForm
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *ColumnDataForm)
    {
        if (ColumnDataForm->objectName().isEmpty())
            ColumnDataForm->setObjectName(QString::fromUtf8("ColumnDataForm"));
        ColumnDataForm->resize(400, 300);
        verticalLayout = new QVBoxLayout(ColumnDataForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tableWidget = new QTableWidget(ColumnDataForm);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(ColumnDataForm);

        QMetaObject::connectSlotsByName(ColumnDataForm);
    } // setupUi

    void retranslateUi(QWidget *ColumnDataForm)
    {
        ColumnDataForm->setWindowTitle(QCoreApplication::translate("ColumnDataForm", "Column Data", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ColumnDataForm: public Ui_ColumnDataForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COLUMNDATAFORM_H
