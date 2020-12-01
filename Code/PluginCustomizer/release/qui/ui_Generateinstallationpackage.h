/********************************************************************************
** Form generated from reading UI file 'Generateinstallationpackage.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEINSTALLATIONPACKAGE_H
#define UI_GENERATEINSTALLATIONPACKAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_Generateinstallationpackage
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *PathLE;
    QPushButton *PathPBtn;
    QLabel *label;
    QLabel *OutputInfomation;
    QHBoxLayout *horizontalLayout;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *GeneratePBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *Generateinstallationpackage)
    {
        if (Generateinstallationpackage->objectName().isEmpty())
            Generateinstallationpackage->setObjectName(QString::fromUtf8("Generateinstallationpackage"));
        Generateinstallationpackage->resize(618, 138);
        gridLayout = new QGridLayout(Generateinstallationpackage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(Generateinstallationpackage);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        PathLE = new QLineEdit(Generateinstallationpackage);
        PathLE->setObjectName(QString::fromUtf8("PathLE"));

        horizontalLayout_2->addWidget(PathLE);

        PathPBtn = new QPushButton(Generateinstallationpackage);
        PathPBtn->setObjectName(QString::fromUtf8("PathPBtn"));

        horizontalLayout_2->addWidget(PathPBtn);


        formLayout->setLayout(0, QFormLayout::FieldRole, horizontalLayout_2);

        label = new QLabel(Generateinstallationpackage);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        OutputInfomation = new QLabel(Generateinstallationpackage);
        OutputInfomation->setObjectName(QString::fromUtf8("OutputInfomation"));

        formLayout->setWidget(1, QFormLayout::FieldRole, OutputInfomation);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ErrorText = new QLabel(Generateinstallationpackage);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        GeneratePBtn = new QPushButton(Generateinstallationpackage);
        GeneratePBtn->setObjectName(QString::fromUtf8("GeneratePBtn"));

        horizontalLayout->addWidget(GeneratePBtn);

        CancelPBtn = new QPushButton(Generateinstallationpackage);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(Generateinstallationpackage);

        QMetaObject::connectSlotsByName(Generateinstallationpackage);
    } // setupUi

    void retranslateUi(QDialog *Generateinstallationpackage)
    {
        Generateinstallationpackage->setWindowTitle(QCoreApplication::translate("Generateinstallationpackage", "Installation Package", nullptr));
        label_5->setText(QCoreApplication::translate("Generateinstallationpackage", "Install Package Path:", nullptr));
        PathPBtn->setText(QCoreApplication::translate("Generateinstallationpackage", "Path", nullptr));
        label->setText(QCoreApplication::translate("Generateinstallationpackage", "Copy Files:", nullptr));
        OutputInfomation->setText(QString());
        ErrorText->setText(QString());
        GeneratePBtn->setText(QCoreApplication::translate("Generateinstallationpackage", "Generate", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("Generateinstallationpackage", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Generateinstallationpackage: public Ui_Generateinstallationpackage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEINSTALLATIONPACKAGE_H
