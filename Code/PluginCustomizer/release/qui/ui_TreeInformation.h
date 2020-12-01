/********************************************************************************
** Form generated from reading UI file 'TreeInformation.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TREEINFORMATION_H
#define UI_TREEINFORMATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_TreeInformation
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *lbl_ChineseName;
    QLineEdit *txtChineseName;
    QLabel *lbl_EnglishName;
    QLineEdit *txtEnglishName;
    QLabel *lbl_Icon;
    QLineEdit *txtIcon;
    QPushButton *btnLoadIcon;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *TreeInformation)
    {
        if (TreeInformation->objectName().isEmpty())
            TreeInformation->setObjectName(QString::fromUtf8("TreeInformation"));
        TreeInformation->resize(425, 170);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TreeInformation->sizePolicy().hasHeightForWidth());
        TreeInformation->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(TreeInformation);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(TreeInformation);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        lbl_ChineseName = new QLabel(groupBox);
        lbl_ChineseName->setObjectName(QString::fromUtf8("lbl_ChineseName"));

        gridLayout->addWidget(lbl_ChineseName, 0, 0, 1, 1);

        txtChineseName = new QLineEdit(groupBox);
        txtChineseName->setObjectName(QString::fromUtf8("txtChineseName"));

        gridLayout->addWidget(txtChineseName, 0, 1, 1, 2);

        lbl_EnglishName = new QLabel(groupBox);
        lbl_EnglishName->setObjectName(QString::fromUtf8("lbl_EnglishName"));

        gridLayout->addWidget(lbl_EnglishName, 1, 0, 1, 1);

        txtEnglishName = new QLineEdit(groupBox);
        txtEnglishName->setObjectName(QString::fromUtf8("txtEnglishName"));

        gridLayout->addWidget(txtEnglishName, 1, 1, 1, 2);

        lbl_Icon = new QLabel(groupBox);
        lbl_Icon->setObjectName(QString::fromUtf8("lbl_Icon"));

        gridLayout->addWidget(lbl_Icon, 2, 0, 1, 1);

        txtIcon = new QLineEdit(groupBox);
        txtIcon->setObjectName(QString::fromUtf8("txtIcon"));

        gridLayout->addWidget(txtIcon, 2, 1, 1, 1);

        btnLoadIcon = new QPushButton(groupBox);
        btnLoadIcon->setObjectName(QString::fromUtf8("btnLoadIcon"));

        gridLayout->addWidget(btnLoadIcon, 2, 2, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lbl_info = new QLabel(TreeInformation);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_3->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOk = new QPushButton(TreeInformation);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy1);
        btnOk->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(btnOk);

        btnCancel = new QPushButton(TreeInformation);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy2);
        btnCancel->setMaximumSize(QSize(16777215, 30));

        horizontalLayout_3->addWidget(btnCancel);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 1);


        retranslateUi(TreeInformation);

        QMetaObject::connectSlotsByName(TreeInformation);
    } // setupUi

    void retranslateUi(QDialog *TreeInformation)
    {
        TreeInformation->setWindowTitle(QCoreApplication::translate("TreeInformation", "Information", nullptr));
        groupBox->setTitle(QString());
        lbl_ChineseName->setText(QCoreApplication::translate("TreeInformation", "Chinese Name", nullptr));
        lbl_EnglishName->setText(QCoreApplication::translate("TreeInformation", "English Name", nullptr));
        lbl_Icon->setText(QCoreApplication::translate("TreeInformation", "Icon", nullptr));
        btnLoadIcon->setText(QCoreApplication::translate("TreeInformation", "Load icon", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("TreeInformation", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("TreeInformation", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TreeInformation: public Ui_TreeInformation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TREEINFORMATION_H
