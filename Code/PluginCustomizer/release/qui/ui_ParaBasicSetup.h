/********************************************************************************
** Form generated from reading UI file 'ParaBasicSetup.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARABASICSETUP_H
#define UI_PARABASICSETUP_H

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
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ParaBasicSetup
{
public:
    QLabel *label_2;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_name_cn;
    QLineEdit *txtNameCn;
    QLabel *label_4;
    QLabel *label_corporation;
    QLineEdit *txtWedSite;
    QLabel *label_wedsite;
    QLineEdit *txtNameEn;
    QLabel *label_5;
    QLabel *label_email;
    QLabel *label_ver;
    QLabel *label_name_en;
    QLineEdit *txtVer;
    QLineEdit *txtEmail;
    QLineEdit *txtCorporation;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbl_logo;
    QPushButton *btnLogo;
    QHBoxLayout *horizontalLayout_4;
    QLabel *lbl_welcome;
    QPushButton *btnWelcom;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *ParaBasicSetup)
    {
        if (ParaBasicSetup->objectName().isEmpty())
            ParaBasicSetup->setObjectName(QString::fromUtf8("ParaBasicSetup"));
        ParaBasicSetup->resize(740, 496);
        label_2 = new QLabel(ParaBasicSetup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(270, 90, 0, 71));
        label_2->setMinimumSize(QSize(0, 0));
        label_2->setMaximumSize(QSize(0, 16777215));
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        gridLayout_4 = new QGridLayout(ParaBasicSetup);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(ParaBasicSetup);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_name_cn = new QLabel(groupBox);
        label_name_cn->setObjectName(QString::fromUtf8("label_name_cn"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_name_cn->sizePolicy().hasHeightForWidth());
        label_name_cn->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_name_cn, 0, 0, 1, 1);

        txtNameCn = new QLineEdit(groupBox);
        txtNameCn->setObjectName(QString::fromUtf8("txtNameCn"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(txtNameCn->sizePolicy().hasHeightForWidth());
        txtNameCn->setSizePolicy(sizePolicy1);
        txtNameCn->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtNameCn, 0, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(20, 0));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 2, 1, 1);

        label_corporation = new QLabel(groupBox);
        label_corporation->setObjectName(QString::fromUtf8("label_corporation"));
        sizePolicy.setHeightForWidth(label_corporation->sizePolicy().hasHeightForWidth());
        label_corporation->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_corporation, 4, 0, 1, 1);

        txtWedSite = new QLineEdit(groupBox);
        txtWedSite->setObjectName(QString::fromUtf8("txtWedSite"));
        sizePolicy1.setHeightForWidth(txtWedSite->sizePolicy().hasHeightForWidth());
        txtWedSite->setSizePolicy(sizePolicy1);
        txtWedSite->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtWedSite, 9, 1, 1, 1);

        label_wedsite = new QLabel(groupBox);
        label_wedsite->setObjectName(QString::fromUtf8("label_wedsite"));
        sizePolicy.setHeightForWidth(label_wedsite->sizePolicy().hasHeightForWidth());
        label_wedsite->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_wedsite, 9, 0, 1, 1);

        txtNameEn = new QLineEdit(groupBox);
        txtNameEn->setObjectName(QString::fromUtf8("txtNameEn"));
        sizePolicy1.setHeightForWidth(txtNameEn->sizePolicy().hasHeightForWidth());
        txtNameEn->setSizePolicy(sizePolicy1);
        txtNameEn->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtNameEn, 1, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(20, 0));
        label_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 1, 2, 1, 1);

        label_email = new QLabel(groupBox);
        label_email->setObjectName(QString::fromUtf8("label_email"));
        sizePolicy.setHeightForWidth(label_email->sizePolicy().hasHeightForWidth());
        label_email->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_email, 8, 0, 1, 1);

        label_ver = new QLabel(groupBox);
        label_ver->setObjectName(QString::fromUtf8("label_ver"));
        sizePolicy.setHeightForWidth(label_ver->sizePolicy().hasHeightForWidth());
        label_ver->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_ver, 2, 0, 1, 1);

        label_name_en = new QLabel(groupBox);
        label_name_en->setObjectName(QString::fromUtf8("label_name_en"));
        sizePolicy.setHeightForWidth(label_name_en->sizePolicy().hasHeightForWidth());
        label_name_en->setSizePolicy(sizePolicy);

        gridLayout_2->addWidget(label_name_en, 1, 0, 1, 1);

        txtVer = new QLineEdit(groupBox);
        txtVer->setObjectName(QString::fromUtf8("txtVer"));
        sizePolicy1.setHeightForWidth(txtVer->sizePolicy().hasHeightForWidth());
        txtVer->setSizePolicy(sizePolicy1);
        txtVer->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtVer, 2, 1, 1, 1);

        txtEmail = new QLineEdit(groupBox);
        txtEmail->setObjectName(QString::fromUtf8("txtEmail"));
        txtEmail->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtEmail, 8, 1, 1, 1);

        txtCorporation = new QLineEdit(groupBox);
        txtCorporation->setObjectName(QString::fromUtf8("txtCorporation"));
        sizePolicy1.setHeightForWidth(txtCorporation->sizePolicy().hasHeightForWidth());
        txtCorporation->setSizePolicy(sizePolicy1);
        txtCorporation->setMinimumSize(QSize(0, 30));

        gridLayout_2->addWidget(txtCorporation, 4, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(ParaBasicSetup);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        lbl_logo = new QLabel(groupBox_2);
        lbl_logo->setObjectName(QString::fromUtf8("lbl_logo"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbl_logo->sizePolicy().hasHeightForWidth());
        lbl_logo->setSizePolicy(sizePolicy2);
        lbl_logo->setMinimumSize(QSize(50, 50));
        lbl_logo->setMaximumSize(QSize(50, 50));

        horizontalLayout_3->addWidget(lbl_logo);


        verticalLayout->addLayout(horizontalLayout_3);

        btnLogo = new QPushButton(groupBox_2);
        btnLogo->setObjectName(QString::fromUtf8("btnLogo"));
        btnLogo->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(btnLogo);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 6, 6, 6);
        lbl_welcome = new QLabel(groupBox_2);
        lbl_welcome->setObjectName(QString::fromUtf8("lbl_welcome"));
        sizePolicy2.setHeightForWidth(lbl_welcome->sizePolicy().hasHeightForWidth());
        lbl_welcome->setSizePolicy(sizePolicy2);
        lbl_welcome->setMinimumSize(QSize(50, 50));

        horizontalLayout_4->addWidget(lbl_welcome);


        verticalLayout->addLayout(horizontalLayout_4);

        btnWelcom = new QPushButton(groupBox_2);
        btnWelcom->setObjectName(QString::fromUtf8("btnWelcom"));
        btnWelcom->setMinimumSize(QSize(0, 30));

        verticalLayout->addWidget(btnWelcom);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_info = new QLabel(ParaBasicSetup);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOk = new QPushButton(ParaBasicSetup);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(btnOk);

        btnCancel = new QPushButton(ParaBasicSetup);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout->addWidget(btnCancel);


        gridLayout_4->addLayout(horizontalLayout, 1, 0, 1, 2);


        retranslateUi(ParaBasicSetup);

        QMetaObject::connectSlotsByName(ParaBasicSetup);
    } // setupUi

    void retranslateUi(QDialog *ParaBasicSetup)
    {
        ParaBasicSetup->setWindowTitle(QCoreApplication::translate("ParaBasicSetup", "Basic parameter setup", nullptr));
        label_2->setText(QCoreApplication::translate("ParaBasicSetup", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ParaBasicSetup", "Basic info", nullptr));
        label_name_cn->setText(QCoreApplication::translate("ParaBasicSetup", "Chinese name", nullptr));
        label_4->setText(QCoreApplication::translate("ParaBasicSetup", "*", nullptr));
        label_corporation->setText(QCoreApplication::translate("ParaBasicSetup", "Corporation", nullptr));
        label_wedsite->setText(QCoreApplication::translate("ParaBasicSetup", "Website", nullptr));
        label_5->setText(QCoreApplication::translate("ParaBasicSetup", "*", nullptr));
        label_email->setText(QCoreApplication::translate("ParaBasicSetup", "Email", nullptr));
        label_ver->setText(QCoreApplication::translate("ParaBasicSetup", "Version", nullptr));
        label_name_en->setText(QCoreApplication::translate("ParaBasicSetup", "English name", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ParaBasicSetup", "Image info", nullptr));
        lbl_logo->setText(QCoreApplication::translate("ParaBasicSetup", "TextLabel", nullptr));
        btnLogo->setText(QCoreApplication::translate("ParaBasicSetup", "Logo    (recommend size 50*50)", nullptr));
        lbl_welcome->setText(QCoreApplication::translate("ParaBasicSetup", "TextLabel", nullptr));
        btnWelcom->setText(QCoreApplication::translate("ParaBasicSetup", "Welcom    (recommend size 400*300)", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("ParaBasicSetup", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("ParaBasicSetup", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParaBasicSetup: public Ui_ParaBasicSetup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARABASICSETUP_H
