/********************************************************************************
** Form generated from reading UI file 'DialogSavePicture.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSAVEPICTURE_H
#define UI_DIALOGSAVEPICTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_SavePicDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *widthBox;
    QLabel *label_2;
    QSpinBox *highBox;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *browseButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SavePicDialog)
    {
        if (SavePicDialog->objectName().isEmpty())
            SavePicDialog->setObjectName(QString::fromUtf8("SavePicDialog"));
        SavePicDialog->resize(378, 126);
        gridLayout = new QGridLayout(SavePicDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(SavePicDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        widthBox = new QSpinBox(SavePicDialog);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, widthBox);

        label_2 = new QLabel(SavePicDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        highBox = new QSpinBox(SavePicDialog);
        highBox->setObjectName(QString::fromUtf8("highBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, highBox);

        label_3 = new QLabel(SavePicDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(SavePicDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        browseButton = new QPushButton(SavePicDialog);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        horizontalLayout->addWidget(browseButton);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SavePicDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SavePicDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SavePicDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SavePicDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SavePicDialog);
    } // setupUi

    void retranslateUi(QDialog *SavePicDialog)
    {
        SavePicDialog->setWindowTitle(QCoreApplication::translate("SavePicDialog", "Save Picture", nullptr));
        label->setText(QCoreApplication::translate("SavePicDialog", "Width:", nullptr));
        label_2->setText(QCoreApplication::translate("SavePicDialog", "High:", nullptr));
        label_3->setText(QCoreApplication::translate("SavePicDialog", "File:", nullptr));
        browseButton->setText(QCoreApplication::translate("SavePicDialog", "Browse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SavePicDialog: public Ui_SavePicDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSAVEPICTURE_H
