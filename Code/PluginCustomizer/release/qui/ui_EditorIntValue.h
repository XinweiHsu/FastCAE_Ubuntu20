/********************************************************************************
** Form generated from reading UI file 'EditorIntValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORINTVALUE_H
#define UI_EDITORINTVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditorIntValue
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtName;
    QLineEdit *txtUnit;
    QLineEdit *txtValue;
    QLineEdit *txtMin;
    QLineEdit *txtMax;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditorIntValue)
    {
        if (EditorIntValue->objectName().isEmpty())
            EditorIntValue->setObjectName(QString::fromUtf8("EditorIntValue"));
        EditorIntValue->resize(637, 253);
        gridLayout = new QGridLayout(EditorIntValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(EditorIntValue);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(EditorIntValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(EditorIntValue);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(EditorIntValue);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(EditorIntValue);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        txtName = new QLineEdit(EditorIntValue);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtName);

        txtUnit = new QLineEdit(EditorIntValue);
        txtUnit->setObjectName(QString::fromUtf8("txtUnit"));
        txtUnit->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtUnit);

        txtValue = new QLineEdit(EditorIntValue);
        txtValue->setObjectName(QString::fromUtf8("txtValue"));
        txtValue->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtValue);

        txtMin = new QLineEdit(EditorIntValue);
        txtMin->setObjectName(QString::fromUtf8("txtMin"));
        txtMin->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtMin);

        txtMax = new QLineEdit(EditorIntValue);
        txtMax->setObjectName(QString::fromUtf8("txtMax"));
        txtMax->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtMax);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        lbl_info = new QLabel(EditorIntValue);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorIntValue);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorIntValue);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout_7, 1, 0, 1, 2);


        retranslateUi(EditorIntValue);

        QMetaObject::connectSlotsByName(EditorIntValue);
    } // setupUi

    void retranslateUi(QDialog *EditorIntValue)
    {
        EditorIntValue->setWindowTitle(QCoreApplication::translate("EditorIntValue", "Int parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorIntValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorIntValue", "Unit", nullptr));
        label_4->setText(QCoreApplication::translate("EditorIntValue", "Value", nullptr));
        label_5->setText(QCoreApplication::translate("EditorIntValue", "Min", nullptr));
        label_6->setText(QCoreApplication::translate("EditorIntValue", "Max", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorIntValue", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorIntValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorIntValue: public Ui_EditorIntValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORINTVALUE_H
