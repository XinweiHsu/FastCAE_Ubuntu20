/********************************************************************************
** Form generated from reading UI file 'EditorStringValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORSTRINGVALUE_H
#define UI_EDITORSTRINGVALUE_H

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

class Ui_EditorStringValue
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *NameLE;
    QLineEdit *ValueLE;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *EditorStringValue)
    {
        if (EditorStringValue->objectName().isEmpty())
            EditorStringValue->setObjectName(QString::fromUtf8("EditorStringValue"));
        EditorStringValue->resize(460, 111);
        gridLayout = new QGridLayout(EditorStringValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EditorStringValue);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NameLE = new QLineEdit(EditorStringValue);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameLE);

        ValueLE = new QLineEdit(EditorStringValue);
        ValueLE->setObjectName(QString::fromUtf8("ValueLE"));

        formLayout->setWidget(2, QFormLayout::FieldRole, ValueLE);

        label_2 = new QLabel(EditorStringValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ErrorText = new QLabel(EditorStringValue);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkPBtn = new QPushButton(EditorStringValue);
        OkPBtn->setObjectName(QString::fromUtf8("OkPBtn"));

        horizontalLayout->addWidget(OkPBtn);

        CancelPBtn = new QPushButton(EditorStringValue);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(EditorStringValue);

        QMetaObject::connectSlotsByName(EditorStringValue);
    } // setupUi

    void retranslateUi(QDialog *EditorStringValue)
    {
        EditorStringValue->setWindowTitle(QCoreApplication::translate("EditorStringValue", "String Parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorStringValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorStringValue", "Value", nullptr));
        ErrorText->setText(QString());
        OkPBtn->setText(QCoreApplication::translate("EditorStringValue", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("EditorStringValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorStringValue: public Ui_EditorStringValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORSTRINGVALUE_H
