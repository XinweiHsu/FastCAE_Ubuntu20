/********************************************************************************
** Form generated from reading UI file 'saveanidialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEANIDIALOG_H
#define UI_SAVEANIDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
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

class Ui_saveAniDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *aniRate_doubleSpinBox;
    QLabel *label_5;
    QSpinBox *frameNum_spinBox;
    QLabel *label_3;
    QSpinBox *frameStep_spinBox;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QSpinBox *startFrame_spinBox;
    QSpinBox *endFrame_spinBox;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *pngWid_lineEdit;
    QLineEdit *pngHei_lineEdit;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_4;
    QCheckBox *saveImage_checkBox;
    QGroupBox *saveImage_groupBox;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QComboBox *imageFormat_comboBox;
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
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveAni_Btn;
    QPushButton *cancle_Btn;

    void setupUi(QDialog *saveAniDialog)
    {
        if (saveAniDialog->objectName().isEmpty())
            saveAniDialog->setObjectName(QString::fromUtf8("saveAniDialog"));
        saveAniDialog->resize(517, 413);
        verticalLayout_2 = new QVBoxLayout(saveAniDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(saveAniDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        aniRate_doubleSpinBox = new QDoubleSpinBox(saveAniDialog);
        aniRate_doubleSpinBox->setObjectName(QString::fromUtf8("aniRate_doubleSpinBox"));
        aniRate_doubleSpinBox->setMinimum(1.000000000000000);
        aniRate_doubleSpinBox->setMaximum(30.989999999999998);

        gridLayout->addWidget(aniRate_doubleSpinBox, 0, 1, 1, 1);

        label_5 = new QLabel(saveAniDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        frameNum_spinBox = new QSpinBox(saveAniDialog);
        frameNum_spinBox->setObjectName(QString::fromUtf8("frameNum_spinBox"));

        gridLayout->addWidget(frameNum_spinBox, 1, 1, 1, 1);

        label_3 = new QLabel(saveAniDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        frameStep_spinBox = new QSpinBox(saveAniDialog);
        frameStep_spinBox->setObjectName(QString::fromUtf8("frameStep_spinBox"));
        frameStep_spinBox->setMinimum(1);
        frameStep_spinBox->setValue(1);

        gridLayout->addWidget(frameStep_spinBox, 2, 1, 1, 1);

        label_2 = new QLabel(saveAniDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        startFrame_spinBox = new QSpinBox(saveAniDialog);
        startFrame_spinBox->setObjectName(QString::fromUtf8("startFrame_spinBox"));

        horizontalLayout->addWidget(startFrame_spinBox);

        endFrame_spinBox = new QSpinBox(saveAniDialog);
        endFrame_spinBox->setObjectName(QString::fromUtf8("endFrame_spinBox"));

        horizontalLayout->addWidget(endFrame_spinBox);


        gridLayout->addLayout(horizontalLayout, 3, 1, 1, 1);

        label_4 = new QLabel(saveAniDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pngWid_lineEdit = new QLineEdit(saveAniDialog);
        pngWid_lineEdit->setObjectName(QString::fromUtf8("pngWid_lineEdit"));

        horizontalLayout_2->addWidget(pngWid_lineEdit);

        pngHei_lineEdit = new QLineEdit(saveAniDialog);
        pngHei_lineEdit->setObjectName(QString::fromUtf8("pngHei_lineEdit"));

        horizontalLayout_2->addWidget(pngHei_lineEdit);


        gridLayout->addLayout(horizontalLayout_2, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);

        groupBox = new QGroupBox(saveAniDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_4 = new QGridLayout(groupBox);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        saveImage_checkBox = new QCheckBox(groupBox);
        saveImage_checkBox->setObjectName(QString::fromUtf8("saveImage_checkBox"));

        gridLayout_4->addWidget(saveImage_checkBox, 0, 0, 1, 1);

        saveImage_groupBox = new QGroupBox(groupBox);
        saveImage_groupBox->setObjectName(QString::fromUtf8("saveImage_groupBox"));
        verticalLayout = new QVBoxLayout(saveImage_groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(saveImage_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        imageFormat_comboBox = new QComboBox(saveImage_groupBox);
        imageFormat_comboBox->addItem(QString());
        imageFormat_comboBox->addItem(QString());
        imageFormat_comboBox->addItem(QString());
        imageFormat_comboBox->setObjectName(QString::fromUtf8("imageFormat_comboBox"));

        gridLayout_2->addWidget(imageFormat_comboBox, 0, 1, 1, 1);

        label_7 = new QLabel(saveImage_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        imagePath_lineEdit = new QLineEdit(saveImage_groupBox);
        imagePath_lineEdit->setObjectName(QString::fromUtf8("imagePath_lineEdit"));
        imagePath_lineEdit->setReadOnly(true);

        gridLayout_2->addWidget(imagePath_lineEdit, 1, 1, 1, 1);

        imagePath_pushButton = new QPushButton(saveImage_groupBox);
        imagePath_pushButton->setObjectName(QString::fromUtf8("imagePath_pushButton"));

        gridLayout_2->addWidget(imagePath_pushButton, 1, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        gridLayout_4->addWidget(saveImage_groupBox, 0, 1, 1, 1);

        savePOV_checkBox = new QCheckBox(groupBox);
        savePOV_checkBox->setObjectName(QString::fromUtf8("savePOV_checkBox"));

        gridLayout_4->addWidget(savePOV_checkBox, 1, 0, 1, 1);

        savePov_groupBox = new QGroupBox(groupBox);
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


        verticalLayout_2->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 41, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        saveAni_Btn = new QPushButton(saveAniDialog);
        saveAni_Btn->setObjectName(QString::fromUtf8("saveAni_Btn"));

        horizontalLayout_3->addWidget(saveAni_Btn);

        cancle_Btn = new QPushButton(saveAniDialog);
        cancle_Btn->setObjectName(QString::fromUtf8("cancle_Btn"));

        horizontalLayout_3->addWidget(cancle_Btn);


        verticalLayout_2->addLayout(horizontalLayout_3);


        retranslateUi(saveAniDialog);

        QMetaObject::connectSlotsByName(saveAniDialog);
    } // setupUi

    void retranslateUi(QDialog *saveAniDialog)
    {
        saveAniDialog->setWindowTitle(QCoreApplication::translate("saveAniDialog", "Animation Settings Dialog", nullptr));
        label->setText(QCoreApplication::translate("saveAniDialog", "Frame Rate (fps)", nullptr));
        label_5->setText(QCoreApplication::translate("saveAniDialog", "Number of Frames", nullptr));
        label_3->setText(QCoreApplication::translate("saveAniDialog", "Frame Step", nullptr));
        label_2->setText(QCoreApplication::translate("saveAniDialog", "Timestep Range", nullptr));
        label_4->setText(QCoreApplication::translate("saveAniDialog", "Resolution (Pixels)", nullptr));
        pngWid_lineEdit->setText(QCoreApplication::translate("saveAniDialog", "600", nullptr));
        pngHei_lineEdit->setText(QCoreApplication::translate("saveAniDialog", "400", nullptr));
        groupBox->setTitle(QCoreApplication::translate("saveAniDialog", "Save Image Settings", nullptr));
        saveImage_checkBox->setText(QString());
        saveImage_groupBox->setTitle(QCoreApplication::translate("saveAniDialog", "Save Image", nullptr));
        label_6->setText(QCoreApplication::translate("saveAniDialog", "format", nullptr));
        imageFormat_comboBox->setItemText(0, QCoreApplication::translate("saveAniDialog", "png", nullptr));
        imageFormat_comboBox->setItemText(1, QCoreApplication::translate("saveAniDialog", "jpg", nullptr));
        imageFormat_comboBox->setItemText(2, QCoreApplication::translate("saveAniDialog", "bmp", nullptr));

        label_7->setText(QCoreApplication::translate("saveAniDialog", "filepath", nullptr));
        imagePath_pushButton->setText(QCoreApplication::translate("saveAniDialog", "...", nullptr));
        savePOV_checkBox->setText(QString());
        savePov_groupBox->setTitle(QCoreApplication::translate("saveAniDialog", "Save POV", nullptr));
        label_8->setText(QCoreApplication::translate("saveAniDialog", "filepath", nullptr));
        povPath_pushButton->setText(QCoreApplication::translate("saveAniDialog", "...", nullptr));
        saveAni_Btn->setText(QCoreApplication::translate("saveAniDialog", "saveAnimation", nullptr));
        cancle_Btn->setText(QCoreApplication::translate("saveAniDialog", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class saveAniDialog: public Ui_saveAniDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEANIDIALOG_H
