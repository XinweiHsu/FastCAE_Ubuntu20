/********************************************************************************
** Form generated from reading UI file 'saveimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEIMAGEDIALOG_H
#define UI_SAVEIMAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

class Ui_saveImageDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QCheckBox *saveImage_checkBox;
    QGroupBox *saveImage_groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLineEdit *wid_lineEdit;
    QLabel *label_2;
    QLineEdit *hei_lineEdit;
    QGridLayout *gridLayout;
    QLabel *label_7;
    QLineEdit *imagePath_lineEdit;
    QPushButton *imagePath_pushButton;
    QCheckBox *savePOV_checkBox;
    QGroupBox *savePov_groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLineEdit *povPath_lineEdit;
    QPushButton *povPath_pushButton;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_pushButton;
    QPushButton *close_pushButton;

    void setupUi(QDialog *saveImageDialog)
    {
        if (saveImageDialog->objectName().isEmpty())
            saveImageDialog->setObjectName(QString::fromUtf8("saveImageDialog"));
        saveImageDialog->resize(501, 253);
        verticalLayout_2 = new QVBoxLayout(saveImageDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        saveImage_checkBox = new QCheckBox(saveImageDialog);
        saveImage_checkBox->setObjectName(QString::fromUtf8("saveImage_checkBox"));

        gridLayout_4->addWidget(saveImage_checkBox, 0, 0, 1, 1);

        saveImage_groupBox = new QGroupBox(saveImageDialog);
        saveImage_groupBox->setObjectName(QString::fromUtf8("saveImage_groupBox"));
        verticalLayout = new QVBoxLayout(saveImage_groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(saveImage_groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        wid_lineEdit = new QLineEdit(saveImage_groupBox);
        wid_lineEdit->setObjectName(QString::fromUtf8("wid_lineEdit"));

        gridLayout_2->addWidget(wid_lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(saveImage_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 0, 2, 1, 1);

        hei_lineEdit = new QLineEdit(saveImage_groupBox);
        hei_lineEdit->setObjectName(QString::fromUtf8("hei_lineEdit"));

        gridLayout_2->addWidget(hei_lineEdit, 0, 3, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_7 = new QLabel(saveImage_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 0, 0, 1, 1);

        imagePath_lineEdit = new QLineEdit(saveImage_groupBox);
        imagePath_lineEdit->setObjectName(QString::fromUtf8("imagePath_lineEdit"));
        imagePath_lineEdit->setReadOnly(true);

        gridLayout->addWidget(imagePath_lineEdit, 0, 1, 1, 1);

        imagePath_pushButton = new QPushButton(saveImage_groupBox);
        imagePath_pushButton->setObjectName(QString::fromUtf8("imagePath_pushButton"));

        gridLayout->addWidget(imagePath_pushButton, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_4->addWidget(saveImage_groupBox, 0, 1, 1, 1);

        savePOV_checkBox = new QCheckBox(saveImageDialog);
        savePOV_checkBox->setObjectName(QString::fromUtf8("savePOV_checkBox"));

        gridLayout_4->addWidget(savePOV_checkBox, 1, 0, 1, 1);

        savePov_groupBox = new QGroupBox(saveImageDialog);
        savePov_groupBox->setObjectName(QString::fromUtf8("savePov_groupBox"));
        gridLayout_3 = new QGridLayout(savePov_groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(savePov_groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        povPath_lineEdit = new QLineEdit(savePov_groupBox);
        povPath_lineEdit->setObjectName(QString::fromUtf8("povPath_lineEdit"));
        povPath_lineEdit->setReadOnly(true);

        gridLayout_3->addWidget(povPath_lineEdit, 0, 1, 1, 1);

        povPath_pushButton = new QPushButton(savePov_groupBox);
        povPath_pushButton->setObjectName(QString::fromUtf8("povPath_pushButton"));

        gridLayout_3->addWidget(povPath_pushButton, 0, 2, 1, 1);


        gridLayout_4->addWidget(savePov_groupBox, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save_pushButton = new QPushButton(saveImageDialog);
        save_pushButton->setObjectName(QString::fromUtf8("save_pushButton"));

        horizontalLayout->addWidget(save_pushButton);

        close_pushButton = new QPushButton(saveImageDialog);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        horizontalLayout->addWidget(close_pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(saveImageDialog);

        QMetaObject::connectSlotsByName(saveImageDialog);
    } // setupUi

    void retranslateUi(QDialog *saveImageDialog)
    {
        saveImageDialog->setWindowTitle(QCoreApplication::translate("saveImageDialog", "Image Settings Dialog", nullptr));
        saveImage_checkBox->setText(QString());
        saveImage_groupBox->setTitle(QCoreApplication::translate("saveImageDialog", "Save Image", nullptr));
        label->setText(QCoreApplication::translate("saveImageDialog", "width:", nullptr));
        label_2->setText(QCoreApplication::translate("saveImageDialog", "height:", nullptr));
        label_7->setText(QCoreApplication::translate("saveImageDialog", "file name", nullptr));
        imagePath_pushButton->setText(QCoreApplication::translate("saveImageDialog", "...", nullptr));
        savePOV_checkBox->setText(QString());
        savePov_groupBox->setTitle(QCoreApplication::translate("saveImageDialog", "Save POV", nullptr));
        label_8->setText(QCoreApplication::translate("saveImageDialog", "file name", nullptr));
        povPath_pushButton->setText(QCoreApplication::translate("saveImageDialog", "...", nullptr));
        save_pushButton->setText(QCoreApplication::translate("saveImageDialog", "save", nullptr));
        close_pushButton->setText(QCoreApplication::translate("saveImageDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveImageDialog: public Ui_saveImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEIMAGEDIALOG_H
