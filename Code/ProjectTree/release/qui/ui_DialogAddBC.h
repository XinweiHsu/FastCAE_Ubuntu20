/********************************************************************************
** Form generated from reading UI file 'DialogAddBC.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDBC_H
#define UI_DIALOGADDBC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_AddBCDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *setComboBox;
    QLabel *label_2;
    QComboBox *typeComboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddBCDialog)
    {
        if (AddBCDialog->objectName().isEmpty())
            AddBCDialog->setObjectName(QString::fromUtf8("AddBCDialog"));
        AddBCDialog->resize(400, 146);
        gridLayout = new QGridLayout(AddBCDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(AddBCDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        setComboBox = new QComboBox(AddBCDialog);
        setComboBox->setObjectName(QString::fromUtf8("setComboBox"));

        gridLayout->addWidget(setComboBox, 0, 1, 1, 1);

        label_2 = new QLabel(AddBCDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        typeComboBox = new QComboBox(AddBCDialog);
        typeComboBox->setObjectName(QString::fromUtf8("typeComboBox"));

        gridLayout->addWidget(typeComboBox, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(AddBCDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(AddBCDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddBCDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddBCDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddBCDialog);
    } // setupUi

    void retranslateUi(QDialog *AddBCDialog)
    {
        AddBCDialog->setWindowTitle(QCoreApplication::translate("AddBCDialog", "Add BC", nullptr));
        label->setText(QCoreApplication::translate("AddBCDialog", "Set", nullptr));
        label_2->setText(QCoreApplication::translate("AddBCDialog", "BC Type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddBCDialog: public Ui_AddBCDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDBC_H
