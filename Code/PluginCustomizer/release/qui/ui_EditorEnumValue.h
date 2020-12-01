/********************************************************************************
** Form generated from reading UI file 'EditorEnumValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORENUMVALUE_H
#define UI_EDITORENUMVALUE_H

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

class Ui_EditorEnumValue
{
public:
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtName;
    QHBoxLayout *horizontalLayout;
    QComboBox *cbo_Value;
    QPushButton *btnEdit;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditorEnumValue)
    {
        if (EditorEnumValue->objectName().isEmpty())
            EditorEnumValue->setObjectName(QString::fromUtf8("EditorEnumValue"));
        EditorEnumValue->resize(472, 140);
        verticalLayout_4 = new QVBoxLayout(EditorEnumValue);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setSizeConstraint(QLayout::SetDefaultConstraint);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(EditorEnumValue);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 16777215));

        verticalLayout_3->addWidget(label);

        label_2 = new QLabel(EditorEnumValue);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_3->addWidget(label_2);


        gridLayout_2->addLayout(verticalLayout_3, 0, 0, 2, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txtName = new QLineEdit(EditorEnumValue);
        txtName->setObjectName(QString::fromUtf8("txtName"));
        txtName->setMinimumSize(QSize(300, 0));

        horizontalLayout_2->addWidget(txtName);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        cbo_Value = new QComboBox(EditorEnumValue);
        cbo_Value->setObjectName(QString::fromUtf8("cbo_Value"));

        horizontalLayout->addWidget(cbo_Value);

        btnEdit = new QPushButton(EditorEnumValue);
        btnEdit->setObjectName(QString::fromUtf8("btnEdit"));
        btnEdit->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnEdit);


        gridLayout_2->addLayout(horizontalLayout, 1, 1, 1, 1);


        verticalLayout_4->addLayout(gridLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        lbl_info = new QLabel(EditorEnumValue);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorEnumValue);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorEnumValue);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        verticalLayout_4->addLayout(horizontalLayout_7);


        retranslateUi(EditorEnumValue);

        QMetaObject::connectSlotsByName(EditorEnumValue);
    } // setupUi

    void retranslateUi(QDialog *EditorEnumValue)
    {
        EditorEnumValue->setWindowTitle(QCoreApplication::translate("EditorEnumValue", "Enum parameter", nullptr));
        label->setText(QCoreApplication::translate("EditorEnumValue", "Name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorEnumValue", "Value", nullptr));
        btnEdit->setText(QCoreApplication::translate("EditorEnumValue", "Edit", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorEnumValue", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorEnumValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorEnumValue: public Ui_EditorEnumValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORENUMVALUE_H
