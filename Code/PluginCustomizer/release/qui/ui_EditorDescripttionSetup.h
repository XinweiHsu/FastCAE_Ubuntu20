/********************************************************************************
** Form generated from reading UI file 'EditorDescripttionSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORDESCRIPTTIONSETUP_H
#define UI_EDITORDESCRIPTTIONSETUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_EditorDescripttionSetup
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QGridLayout *gridLayout_4;
    QLabel *lbl_chnName;
    QLineEdit *txtChineseName;
    QLabel *lbl_engName;
    QLineEdit *txtEnglishName;
    QLabel *lbl_icon;
    QLineEdit *txtIcon;
    QPushButton *btnLoadIcon;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btnAdd_s;
    QPushButton *btnDel_s;
    QPushButton *btnEdit_s;
    QPushButton *btnDelAll_s;
    QSpacerItem *horizontalSpacer_2;
    QTableWidget *tableWidget_PList;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *btnAdd_S_G;
    QPushButton *btnDel_S_G;
    QPushButton *btnEdit_S_G;
    QPushButton *btnClearAll_S_G;
    QTableWidget *tableWidget_GList;
    QTableWidget *tableWidget_GPList;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *btnAdd_G;
    QPushButton *btnDel_G;
    QPushButton *btnEdit_G;
    QPushButton *btnClearAll_G;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *parameterLinkagePBtn;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnShowParameterGroup;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditorDescripttionSetup)
    {
        if (EditorDescripttionSetup->objectName().isEmpty())
            EditorDescripttionSetup->setObjectName(QString::fromUtf8("EditorDescripttionSetup"));
        EditorDescripttionSetup->resize(776, 687);
        gridLayout_5 = new QGridLayout(EditorDescripttionSetup);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(EditorDescripttionSetup);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        gridLayout_4->setContentsMargins(6, 6, 6, 6);
        lbl_chnName = new QLabel(groupBox);
        lbl_chnName->setObjectName(QString::fromUtf8("lbl_chnName"));

        gridLayout_4->addWidget(lbl_chnName, 0, 0, 1, 1);

        txtChineseName = new QLineEdit(groupBox);
        txtChineseName->setObjectName(QString::fromUtf8("txtChineseName"));

        gridLayout_4->addWidget(txtChineseName, 0, 1, 1, 2);

        lbl_engName = new QLabel(groupBox);
        lbl_engName->setObjectName(QString::fromUtf8("lbl_engName"));

        gridLayout_4->addWidget(lbl_engName, 1, 0, 1, 1);

        txtEnglishName = new QLineEdit(groupBox);
        txtEnglishName->setObjectName(QString::fromUtf8("txtEnglishName"));

        gridLayout_4->addWidget(txtEnglishName, 1, 1, 1, 2);

        lbl_icon = new QLabel(groupBox);
        lbl_icon->setObjectName(QString::fromUtf8("lbl_icon"));

        gridLayout_4->addWidget(lbl_icon, 2, 0, 1, 1);

        txtIcon = new QLineEdit(groupBox);
        txtIcon->setObjectName(QString::fromUtf8("txtIcon"));

        gridLayout_4->addWidget(txtIcon, 2, 1, 1, 1);

        btnLoadIcon = new QPushButton(groupBox);
        btnLoadIcon->setObjectName(QString::fromUtf8("btnLoadIcon"));

        gridLayout_4->addWidget(btnLoadIcon, 2, 2, 1, 1);


        gridLayout->addLayout(gridLayout_4, 3, 1, 1, 1);


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_2 = new QGroupBox(EditorDescripttionSetup);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btnAdd_s = new QPushButton(groupBox_2);
        btnAdd_s->setObjectName(QString::fromUtf8("btnAdd_s"));

        horizontalLayout_4->addWidget(btnAdd_s);

        btnDel_s = new QPushButton(groupBox_2);
        btnDel_s->setObjectName(QString::fromUtf8("btnDel_s"));

        horizontalLayout_4->addWidget(btnDel_s);

        btnEdit_s = new QPushButton(groupBox_2);
        btnEdit_s->setObjectName(QString::fromUtf8("btnEdit_s"));

        horizontalLayout_4->addWidget(btnEdit_s);

        btnDelAll_s = new QPushButton(groupBox_2);
        btnDelAll_s->setObjectName(QString::fromUtf8("btnDelAll_s"));

        horizontalLayout_4->addWidget(btnDelAll_s);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        tableWidget_PList = new QTableWidget(groupBox_2);
        tableWidget_PList->setObjectName(QString::fromUtf8("tableWidget_PList"));

        gridLayout_2->addWidget(tableWidget_PList, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        groupBox_3 = new QGroupBox(EditorDescripttionSetup);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        btnAdd_S_G = new QPushButton(groupBox_3);
        btnAdd_S_G->setObjectName(QString::fromUtf8("btnAdd_S_G"));

        horizontalLayout_6->addWidget(btnAdd_S_G);

        btnDel_S_G = new QPushButton(groupBox_3);
        btnDel_S_G->setObjectName(QString::fromUtf8("btnDel_S_G"));

        horizontalLayout_6->addWidget(btnDel_S_G);

        btnEdit_S_G = new QPushButton(groupBox_3);
        btnEdit_S_G->setObjectName(QString::fromUtf8("btnEdit_S_G"));

        horizontalLayout_6->addWidget(btnEdit_S_G);

        btnClearAll_S_G = new QPushButton(groupBox_3);
        btnClearAll_S_G->setObjectName(QString::fromUtf8("btnClearAll_S_G"));

        horizontalLayout_6->addWidget(btnClearAll_S_G);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        tableWidget_GList = new QTableWidget(groupBox_3);
        tableWidget_GList->setObjectName(QString::fromUtf8("tableWidget_GList"));
        tableWidget_GList->setMaximumSize(QSize(16777215, 100));

        gridLayout_3->addWidget(tableWidget_GList, 2, 0, 1, 1);

        tableWidget_GPList = new QTableWidget(groupBox_3);
        tableWidget_GPList->setObjectName(QString::fromUtf8("tableWidget_GPList"));

        gridLayout_3->addWidget(tableWidget_GPList, 4, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        btnAdd_G = new QPushButton(groupBox_3);
        btnAdd_G->setObjectName(QString::fromUtf8("btnAdd_G"));

        horizontalLayout_5->addWidget(btnAdd_G);

        btnDel_G = new QPushButton(groupBox_3);
        btnDel_G->setObjectName(QString::fromUtf8("btnDel_G"));

        horizontalLayout_5->addWidget(btnDel_G);

        btnEdit_G = new QPushButton(groupBox_3);
        btnEdit_G->setObjectName(QString::fromUtf8("btnEdit_G"));

        horizontalLayout_5->addWidget(btnEdit_G);

        btnClearAll_G = new QPushButton(groupBox_3);
        btnClearAll_G->setObjectName(QString::fromUtf8("btnClearAll_G"));

        horizontalLayout_5->addWidget(btnClearAll_G);


        gridLayout_3->addLayout(horizontalLayout_5, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 1, 1, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        parameterLinkagePBtn = new QPushButton(EditorDescripttionSetup);
        parameterLinkagePBtn->setObjectName(QString::fromUtf8("parameterLinkagePBtn"));

        horizontalLayout_7->addWidget(parameterLinkagePBtn);

        lbl_info = new QLabel(EditorDescripttionSetup);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnShowParameterGroup = new QPushButton(EditorDescripttionSetup);
        btnShowParameterGroup->setObjectName(QString::fromUtf8("btnShowParameterGroup"));

        horizontalLayout_7->addWidget(btnShowParameterGroup);

        btnOk = new QPushButton(EditorDescripttionSetup);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorDescripttionSetup);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy1);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout_5->addLayout(horizontalLayout_7, 2, 0, 1, 2);


        retranslateUi(EditorDescripttionSetup);

        QMetaObject::connectSlotsByName(EditorDescripttionSetup);
    } // setupUi

    void retranslateUi(QDialog *EditorDescripttionSetup)
    {
        EditorDescripttionSetup->setWindowTitle(QCoreApplication::translate("EditorDescripttionSetup", "Dialog", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorDescripttionSetup", "Node info", nullptr));
        lbl_chnName->setText(QCoreApplication::translate("EditorDescripttionSetup", "Chinese name", nullptr));
        lbl_engName->setText(QCoreApplication::translate("EditorDescripttionSetup", "English name", nullptr));
        lbl_icon->setText(QCoreApplication::translate("EditorDescripttionSetup", "Icon", nullptr));
        btnLoadIcon->setText(QCoreApplication::translate("EditorDescripttionSetup", "Load icon", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorDescripttionSetup", "Parameter list", nullptr));
        btnAdd_s->setText(QCoreApplication::translate("EditorDescripttionSetup", "Add", nullptr));
        btnDel_s->setText(QCoreApplication::translate("EditorDescripttionSetup", "Del", nullptr));
        btnEdit_s->setText(QCoreApplication::translate("EditorDescripttionSetup", "Edit", nullptr));
        btnDelAll_s->setText(QCoreApplication::translate("EditorDescripttionSetup", "Del all", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("EditorDescripttionSetup", "Parameter group list", nullptr));
        btnAdd_S_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Add", nullptr));
        btnDel_S_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Del", nullptr));
        btnEdit_S_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Edit", nullptr));
        btnClearAll_S_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Del all", nullptr));
        btnAdd_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Add", nullptr));
        btnDel_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Del", nullptr));
        btnEdit_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Edit", nullptr));
        btnClearAll_G->setText(QCoreApplication::translate("EditorDescripttionSetup", "Clear all", nullptr));
        parameterLinkagePBtn->setText(QCoreApplication::translate("EditorDescripttionSetup", "Parameter Linkage", nullptr));
        lbl_info->setText(QString());
        btnShowParameterGroup->setText(QCoreApplication::translate("EditorDescripttionSetup", "Show parameter group", nullptr));
        btnOk->setText(QCoreApplication::translate("EditorDescripttionSetup", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorDescripttionSetup", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorDescripttionSetup: public Ui_EditorDescripttionSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORDESCRIPTTIONSETUP_H
