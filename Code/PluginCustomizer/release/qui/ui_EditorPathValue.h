/********************************************************************************
** Form generated from reading UI file 'EditorPathValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORPATHVALUE_H
#define UI_EDITORPATHVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorPathValue
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *NameLE;
    QLabel *label_2;
    QComboBox *TypeCB;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *FIleSuffixLE;
    QLabel *label_4;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *ValueLE;
    QPushButton *PathPBtn;
    QHBoxLayout *horizontalLayout;
    QLabel *ErrorText;
    QSpacerItem *horizontalSpacer;
    QPushButton *OkPBtn;
    QPushButton *CancelPBtn;

    void setupUi(QDialog *EditorPathValue)
    {
        if (EditorPathValue->objectName().isEmpty())
            EditorPathValue->setObjectName(QString::fromUtf8("EditorPathValue"));
        EditorPathValue->resize(484, 179);
        gridLayout = new QGridLayout(EditorPathValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(EditorPathValue);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        NameLE = new QLineEdit(EditorPathValue);
        NameLE->setObjectName(QString::fromUtf8("NameLE"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameLE);

        label_2 = new QLabel(EditorPathValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        TypeCB = new QComboBox(EditorPathValue);
        TypeCB->addItem(QString());
        TypeCB->addItem(QString());
        TypeCB->addItem(QString());
        TypeCB->setObjectName(QString::fromUtf8("TypeCB"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TypeCB);

        label_3 = new QLabel(EditorPathValue);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        FIleSuffixLE = new QLineEdit(EditorPathValue);
        FIleSuffixLE->setObjectName(QString::fromUtf8("FIleSuffixLE"));

        horizontalLayout_2->addWidget(FIleSuffixLE);

        label_4 = new QLabel(EditorPathValue);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        formLayout->setLayout(2, QFormLayout::FieldRole, horizontalLayout_2);

        label_5 = new QLabel(EditorPathValue);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        ValueLE = new QLineEdit(EditorPathValue);
        ValueLE->setObjectName(QString::fromUtf8("ValueLE"));

        horizontalLayout_3->addWidget(ValueLE);

        PathPBtn = new QPushButton(EditorPathValue);
        PathPBtn->setObjectName(QString::fromUtf8("PathPBtn"));

        horizontalLayout_3->addWidget(PathPBtn);


        formLayout->setLayout(3, QFormLayout::FieldRole, horizontalLayout_3);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        ErrorText = new QLabel(EditorPathValue);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(ErrorText);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        OkPBtn = new QPushButton(EditorPathValue);
        OkPBtn->setObjectName(QString::fromUtf8("OkPBtn"));

        horizontalLayout->addWidget(OkPBtn);

        CancelPBtn = new QPushButton(EditorPathValue);
        CancelPBtn->setObjectName(QString::fromUtf8("CancelPBtn"));

        horizontalLayout->addWidget(CancelPBtn);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);


        retranslateUi(EditorPathValue);

        QMetaObject::connectSlotsByName(EditorPathValue);
    } // setupUi

    void retranslateUi(QDialog *EditorPathValue)
    {
        EditorPathValue->setWindowTitle(QCoreApplication::translate("EditorPathValue", "Path Parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorPathValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorPathValue", "Type", nullptr));
        TypeCB->setItemText(0, QCoreApplication::translate("EditorPathValue", "Path", nullptr));
        TypeCB->setItemText(1, QCoreApplication::translate("EditorPathValue", "File", nullptr));
        TypeCB->setItemText(2, QCoreApplication::translate("EditorPathValue", "File sets", nullptr));

        label_3->setText(QCoreApplication::translate("EditorPathValue", "File suffix", nullptr));
        label_4->setText(QCoreApplication::translate("EditorPathValue", "e.g.:*.dat", nullptr));
        label_5->setText(QCoreApplication::translate("EditorPathValue", "Value", nullptr));
        PathPBtn->setText(QCoreApplication::translate("EditorPathValue", "Path", nullptr));
        ErrorText->setText(QString());
        OkPBtn->setText(QCoreApplication::translate("EditorPathValue", "Ok", nullptr));
        CancelPBtn->setText(QCoreApplication::translate("EditorPathValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorPathValue: public Ui_EditorPathValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORPATHVALUE_H
