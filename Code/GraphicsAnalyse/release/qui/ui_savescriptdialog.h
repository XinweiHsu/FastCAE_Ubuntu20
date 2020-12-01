/********************************************************************************
** Form generated from reading UI file 'savescriptdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVESCRIPTDIALOG_H
#define UI_SAVESCRIPTDIALOG_H

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
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_saveScriptDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_5;
    QLabel *label_9;
    QLineEdit *scriptPath_lineEdit;
    QPushButton *scriptPath_pushButton;
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
    QCheckBox *saveAvi_checkBox;
    QGroupBox *saveAvi_groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLineEdit *aviPath_lineEdit;
    QPushButton *aviPath_pushButton;
    QCheckBox *autoExit_checkBox;
    QGroupBox *autoExit_groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *exitTime_spinBox;
    QLabel *label_4;
    QCheckBox *plotSize_checkBox;
    QCheckBox *adapt_checkBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_pushButton;
    QPushButton *close_pushButton;

    void setupUi(QDialog *saveScriptDialog)
    {
        if (saveScriptDialog->objectName().isEmpty())
            saveScriptDialog->setObjectName(QString::fromUtf8("saveScriptDialog"));
        saveScriptDialog->resize(501, 401);
        verticalLayout_3 = new QVBoxLayout(saveScriptDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_9 = new QLabel(saveScriptDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_5->addWidget(label_9, 0, 0, 1, 1);

        scriptPath_lineEdit = new QLineEdit(saveScriptDialog);
        scriptPath_lineEdit->setObjectName(QString::fromUtf8("scriptPath_lineEdit"));
        scriptPath_lineEdit->setReadOnly(true);

        gridLayout_5->addWidget(scriptPath_lineEdit, 0, 1, 1, 1);

        scriptPath_pushButton = new QPushButton(saveScriptDialog);
        scriptPath_pushButton->setObjectName(QString::fromUtf8("scriptPath_pushButton"));

        gridLayout_5->addWidget(scriptPath_pushButton, 0, 2, 1, 1);


        verticalLayout_3->addLayout(gridLayout_5);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        saveImage_checkBox = new QCheckBox(saveScriptDialog);
        saveImage_checkBox->setObjectName(QString::fromUtf8("saveImage_checkBox"));

        gridLayout_4->addWidget(saveImage_checkBox, 0, 0, 1, 1);

        saveImage_groupBox = new QGroupBox(saveScriptDialog);
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

        saveAvi_checkBox = new QCheckBox(saveScriptDialog);
        saveAvi_checkBox->setObjectName(QString::fromUtf8("saveAvi_checkBox"));

        gridLayout_4->addWidget(saveAvi_checkBox, 1, 0, 1, 1);

        saveAvi_groupBox = new QGroupBox(saveScriptDialog);
        saveAvi_groupBox->setObjectName(QString::fromUtf8("saveAvi_groupBox"));
        gridLayout_3 = new QGridLayout(saveAvi_groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_8 = new QLabel(saveAvi_groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 0, 0, 1, 1);

        aviPath_lineEdit = new QLineEdit(saveAvi_groupBox);
        aviPath_lineEdit->setObjectName(QString::fromUtf8("aviPath_lineEdit"));
        aviPath_lineEdit->setReadOnly(true);

        gridLayout_3->addWidget(aviPath_lineEdit, 0, 1, 1, 1);

        aviPath_pushButton = new QPushButton(saveAvi_groupBox);
        aviPath_pushButton->setObjectName(QString::fromUtf8("aviPath_pushButton"));

        gridLayout_3->addWidget(aviPath_pushButton, 0, 2, 1, 1);


        gridLayout_4->addWidget(saveAvi_groupBox, 1, 1, 1, 1);

        autoExit_checkBox = new QCheckBox(saveScriptDialog);
        autoExit_checkBox->setObjectName(QString::fromUtf8("autoExit_checkBox"));

        gridLayout_4->addWidget(autoExit_checkBox, 2, 0, 1, 1);

        autoExit_groupBox = new QGroupBox(saveScriptDialog);
        autoExit_groupBox->setObjectName(QString::fromUtf8("autoExit_groupBox"));
        verticalLayout_2 = new QVBoxLayout(autoExit_groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(autoExit_groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        exitTime_spinBox = new QSpinBox(autoExit_groupBox);
        exitTime_spinBox->setObjectName(QString::fromUtf8("exitTime_spinBox"));
        exitTime_spinBox->setMinimum(100);
        exitTime_spinBox->setMaximum(10000);
        exitTime_spinBox->setSingleStep(50);
        exitTime_spinBox->setValue(500);

        horizontalLayout_2->addWidget(exitTime_spinBox);

        label_4 = new QLabel(autoExit_groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        horizontalLayout_2->setStretch(0, 2);
        horizontalLayout_2->setStretch(1, 6);
        horizontalLayout_2->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout_2);


        gridLayout_4->addWidget(autoExit_groupBox, 2, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);

        plotSize_checkBox = new QCheckBox(saveScriptDialog);
        plotSize_checkBox->setObjectName(QString::fromUtf8("plotSize_checkBox"));

        verticalLayout_3->addWidget(plotSize_checkBox);

        adapt_checkBox = new QCheckBox(saveScriptDialog);
        adapt_checkBox->setObjectName(QString::fromUtf8("adapt_checkBox"));

        verticalLayout_3->addWidget(adapt_checkBox);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save_pushButton = new QPushButton(saveScriptDialog);
        save_pushButton->setObjectName(QString::fromUtf8("save_pushButton"));

        horizontalLayout->addWidget(save_pushButton);

        close_pushButton = new QPushButton(saveScriptDialog);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        horizontalLayout->addWidget(close_pushButton);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(saveScriptDialog);

        QMetaObject::connectSlotsByName(saveScriptDialog);
    } // setupUi

    void retranslateUi(QDialog *saveScriptDialog)
    {
        saveScriptDialog->setWindowTitle(QCoreApplication::translate("saveScriptDialog", "Script Settings Dialog", nullptr));
        label_9->setText(QCoreApplication::translate("saveScriptDialog", "Script name", nullptr));
        scriptPath_pushButton->setText(QCoreApplication::translate("saveScriptDialog", "...", nullptr));
        saveImage_checkBox->setText(QString());
        saveImage_groupBox->setTitle(QCoreApplication::translate("saveScriptDialog", "Save Image", nullptr));
        label->setText(QCoreApplication::translate("saveScriptDialog", "width:", nullptr));
        label_2->setText(QCoreApplication::translate("saveScriptDialog", "height:", nullptr));
        label_7->setText(QCoreApplication::translate("saveScriptDialog", "file name", nullptr));
        imagePath_pushButton->setText(QCoreApplication::translate("saveScriptDialog", "...", nullptr));
        saveAvi_checkBox->setText(QString());
        saveAvi_groupBox->setTitle(QCoreApplication::translate("saveScriptDialog", "Save Avi", nullptr));
        label_8->setText(QCoreApplication::translate("saveScriptDialog", "file name", nullptr));
        aviPath_pushButton->setText(QCoreApplication::translate("saveScriptDialog", "...", nullptr));
        autoExit_checkBox->setText(QString());
        autoExit_groupBox->setTitle(QCoreApplication::translate("saveScriptDialog", "Exit Automatically", nullptr));
        label_3->setText(QCoreApplication::translate("saveScriptDialog", "delay time", nullptr));
        label_4->setText(QCoreApplication::translate("saveScriptDialog", "ms", nullptr));
        plotSize_checkBox->setText(QCoreApplication::translate("saveScriptDialog", "Save Plot Size", nullptr));
        adapt_checkBox->setText(QCoreApplication::translate("saveScriptDialog", "Self-adaptation", nullptr));
        save_pushButton->setText(QCoreApplication::translate("saveScriptDialog", "save", nullptr));
        close_pushButton->setText(QCoreApplication::translate("saveScriptDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveScriptDialog: public Ui_saveScriptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVESCRIPTDIALOG_H
