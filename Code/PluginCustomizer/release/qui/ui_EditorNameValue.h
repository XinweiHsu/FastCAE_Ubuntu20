/********************************************************************************
** Form generated from reading UI file 'EditorNameValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORNAMEVALUE_H
#define UI_EDITORNAMEVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_EditorNameValue
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txtName;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditorNameValue)
    {
        if (EditorNameValue->objectName().isEmpty())
            EditorNameValue->setObjectName(QString::fromUtf8("EditorNameValue"));
        EditorNameValue->resize(381, 91);
        gridLayout = new QGridLayout(EditorNameValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(EditorNameValue);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txtName = new QLineEdit(EditorNameValue);
        txtName->setObjectName(QString::fromUtf8("txtName"));

        horizontalLayout->addWidget(txtName);

        comboBox = new QComboBox(EditorNameValue);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        lbl_info = new QLabel(EditorNameValue);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorNameValue);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorNameValue);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        retranslateUi(EditorNameValue);

        QMetaObject::connectSlotsByName(EditorNameValue);
    } // setupUi

    void retranslateUi(QDialog *EditorNameValue)
    {
        EditorNameValue->setWindowTitle(QCoreApplication::translate("EditorNameValue", "Input name", nullptr));
        label->setText(QCoreApplication::translate("EditorNameValue", "Name", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorNameValue", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorNameValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorNameValue: public Ui_EditorNameValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORNAMEVALUE_H
