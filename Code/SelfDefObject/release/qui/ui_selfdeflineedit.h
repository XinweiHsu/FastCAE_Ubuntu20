/********************************************************************************
** Form generated from reading UI file 'selfdeflineedit.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SELFDEFLINEEDIT_H
#define UI_SELFDEFLINEEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SelfDefLineEdit
{
public:
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit;

    void setupUi(QWidget *SelfDefLineEdit)
    {
        if (SelfDefLineEdit->objectName().isEmpty())
            SelfDefLineEdit->setObjectName(QString::fromUtf8("SelfDefLineEdit"));
        SelfDefLineEdit->resize(159, 23);
        gridLayout = new QGridLayout(SelfDefLineEdit);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit = new QLineEdit(SelfDefLineEdit);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        gridLayout_2->addWidget(lineEdit, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        retranslateUi(SelfDefLineEdit);

        QMetaObject::connectSlotsByName(SelfDefLineEdit);
    } // setupUi

    void retranslateUi(QWidget *SelfDefLineEdit)
    {
        SelfDefLineEdit->setWindowTitle(QCoreApplication::translate("SelfDefLineEdit", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SelfDefLineEdit: public Ui_SelfDefLineEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SELFDEFLINEEDIT_H
