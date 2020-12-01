/********************************************************************************
** Form generated from reading UI file 'curve_saveimagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVE_SAVEIMAGEDIALOG_H
#define UI_CURVE_SAVEIMAGEDIALOG_H

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

class Ui_curve_saveImageDialog
{
public:
    QVBoxLayout *verticalLayout_2;
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
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *save_pushButton;
    QPushButton *close_pushButton;

    void setupUi(QDialog *curve_saveImageDialog)
    {
        if (curve_saveImageDialog->objectName().isEmpty())
            curve_saveImageDialog->setObjectName(QString::fromUtf8("curve_saveImageDialog"));
        curve_saveImageDialog->resize(462, 188);
        verticalLayout_2 = new QVBoxLayout(curve_saveImageDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        saveImage_groupBox = new QGroupBox(curve_saveImageDialog);
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


        verticalLayout_2->addWidget(saveImage_groupBox);

        verticalSpacer = new QSpacerItem(20, 63, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        save_pushButton = new QPushButton(curve_saveImageDialog);
        save_pushButton->setObjectName(QString::fromUtf8("save_pushButton"));

        horizontalLayout->addWidget(save_pushButton);

        close_pushButton = new QPushButton(curve_saveImageDialog);
        close_pushButton->setObjectName(QString::fromUtf8("close_pushButton"));

        horizontalLayout->addWidget(close_pushButton);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(curve_saveImageDialog);

        QMetaObject::connectSlotsByName(curve_saveImageDialog);
    } // setupUi

    void retranslateUi(QDialog *curve_saveImageDialog)
    {
        curve_saveImageDialog->setWindowTitle(QCoreApplication::translate("curve_saveImageDialog", "Image Settings Dialog", nullptr));
        saveImage_groupBox->setTitle(QCoreApplication::translate("curve_saveImageDialog", "Save Image", nullptr));
        label->setText(QCoreApplication::translate("curve_saveImageDialog", "width:", nullptr));
        label_2->setText(QCoreApplication::translate("curve_saveImageDialog", "height:", nullptr));
        label_7->setText(QCoreApplication::translate("curve_saveImageDialog", "file name", nullptr));
        imagePath_pushButton->setText(QCoreApplication::translate("curve_saveImageDialog", "...", nullptr));
        save_pushButton->setText(QCoreApplication::translate("curve_saveImageDialog", "save", nullptr));
        close_pushButton->setText(QCoreApplication::translate("curve_saveImageDialog", "close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curve_saveImageDialog: public Ui_curve_saveImageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVE_SAVEIMAGEDIALOG_H
