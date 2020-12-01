/********************************************************************************
** Form generated from reading UI file 'DialogCreateGeoComponent.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCREATEGEOCOMPONENT_H
#define UI_DIALOGCREATEGEOCOMPONENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_CreateGeoComponentDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *labelType;
    QLineEdit *typeLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *CreateGeoComponentDialog)
    {
        if (CreateGeoComponentDialog->objectName().isEmpty())
            CreateGeoComponentDialog->setObjectName(QString::fromUtf8("CreateGeoComponentDialog"));
        CreateGeoComponentDialog->resize(289, 93);
        gridLayout = new QGridLayout(CreateGeoComponentDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(CreateGeoComponentDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        nameLineEdit = new QLineEdit(CreateGeoComponentDialog);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 0, 1, 1, 1);

        labelType = new QLabel(CreateGeoComponentDialog);
        labelType->setObjectName(QString::fromUtf8("labelType"));

        gridLayout->addWidget(labelType, 1, 0, 1, 1);

        typeLineEdit = new QLineEdit(CreateGeoComponentDialog);
        typeLineEdit->setObjectName(QString::fromUtf8("typeLineEdit"));

        gridLayout->addWidget(typeLineEdit, 1, 1, 1, 1);

        buttonBox = new QDialogButtonBox(CreateGeoComponentDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 2);


        retranslateUi(CreateGeoComponentDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateGeoComponentDialog, SLOT(reject()));
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateGeoComponentDialog, SLOT(accept()));

        QMetaObject::connectSlotsByName(CreateGeoComponentDialog);
    } // setupUi

    void retranslateUi(QDialog *CreateGeoComponentDialog)
    {
        CreateGeoComponentDialog->setWindowTitle(QCoreApplication::translate("CreateGeoComponentDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CreateGeoComponentDialog", "Set Name:", nullptr));
        labelType->setText(QCoreApplication::translate("CreateGeoComponentDialog", "Type:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateGeoComponentDialog: public Ui_CreateGeoComponentDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCREATEGEOCOMPONENT_H
