/********************************************************************************
** Form generated from reading UI file 'DialogGeometryRename.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGGEOMETRYRENAME_H
#define UI_DIALOGGEOMETRYRENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogRename
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *newNamelineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogRename)
    {
        if (DialogRename->objectName().isEmpty())
            DialogRename->setObjectName(QString::fromUtf8("DialogRename"));
        DialogRename->resize(256, 69);
        gridLayout = new QGridLayout(DialogRename);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(DialogRename);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        newNamelineEdit = new QLineEdit(DialogRename);
        newNamelineEdit->setObjectName(QString::fromUtf8("newNamelineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, newNamelineEdit);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(DialogRename);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(DialogRename);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRename, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRename, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRename);
    } // setupUi

    void retranslateUi(QDialog *DialogRename)
    {
        DialogRename->setWindowTitle(QCoreApplication::translate("DialogRename", "Rename", nullptr));
        label->setText(QCoreApplication::translate("DialogRename", "New name:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRename: public Ui_DialogRename {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGGEOMETRYRENAME_H
