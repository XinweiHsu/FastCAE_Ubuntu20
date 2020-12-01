/********************************************************************************
** Form generated from reading UI file 'EditorBoolValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORBOOLVALUE_H
#define UI_EDITORBOOLVALUE_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditorBoolValue
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *txtName;
    QComboBox *cbo_value;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *EditorBoolValue)
    {
        if (EditorBoolValue->objectName().isEmpty())
            EditorBoolValue->setObjectName(QString::fromUtf8("EditorBoolValue"));
        EditorBoolValue->resize(457, 164);
        gridLayout = new QGridLayout(EditorBoolValue);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        txtName = new QLineEdit(EditorBoolValue);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(0, 30));

        verticalLayout_2->addWidget(txtName);

        cbo_value = new QComboBox(EditorBoolValue);
        cbo_value->setObjectName(QString::fromUtf8("cbo_value"));

        verticalLayout_2->addWidget(cbo_value);


        gridLayout->addLayout(verticalLayout_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        label = new QLabel(EditorBoolValue);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(EditorBoolValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        lbl_info = new QLabel(EditorBoolValue);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorBoolValue);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorBoolValue);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout->addLayout(horizontalLayout_7, 2, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 1, 1, 1);


        retranslateUi(EditorBoolValue);

        QMetaObject::connectSlotsByName(EditorBoolValue);
    } // setupUi

    void retranslateUi(QDialog *EditorBoolValue)
    {
        EditorBoolValue->setWindowTitle(QCoreApplication::translate("EditorBoolValue", "Bool parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorBoolValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorBoolValue", "Value", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorBoolValue", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorBoolValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorBoolValue: public Ui_EditorBoolValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORBOOLVALUE_H
