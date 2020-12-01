/********************************************************************************
** Form generated from reading UI file 'curveaxispropdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEAXISPROPDIALOG_H
#define UI_CURVEAXISPROPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_curveAxisPropDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *axis_name_lineEdit1;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *axis_fontType_comboBox1;
    QLabel *label_3;
    QPushButton *axis_fontColor_pushButton1;
    QLabel *label_4;
    QSpinBox *axis_fontSize_spinBox1;
    QGroupBox *range_groupBox;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_min;
    QLineEdit *lineEdit_min;
    QLabel *label_max;
    QLineEdit *lineEdit_max;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *rescale_pushButton;
    QGroupBox *xDataSource_groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *axis_dataSource_comboBox1;
    QGroupBox *fileDataSource_groupBox;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QComboBox *axis_dataFile_comboBox1;
    QLabel *label_7;
    QComboBox *axis_dataColumn_comboBox1;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *curveAxisPropDialog)
    {
        if (curveAxisPropDialog->objectName().isEmpty())
            curveAxisPropDialog->setObjectName(QString::fromUtf8("curveAxisPropDialog"));
        curveAxisPropDialog->resize(355, 393);
        verticalLayout_3 = new QVBoxLayout(curveAxisPropDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(curveAxisPropDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        axis_name_lineEdit1 = new QLineEdit(widget);
        axis_name_lineEdit1->setObjectName(QString::fromUtf8("axis_name_lineEdit1"));

        horizontalLayout_2->addWidget(axis_name_lineEdit1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        groupBox = new QGroupBox(widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        axis_fontType_comboBox1 = new QComboBox(groupBox);
        axis_fontType_comboBox1->addItem(QString());
        axis_fontType_comboBox1->addItem(QString());
        axis_fontType_comboBox1->addItem(QString());
        axis_fontType_comboBox1->setObjectName(QString::fromUtf8("axis_fontType_comboBox1"));

        gridLayout->addWidget(axis_fontType_comboBox1, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        axis_fontColor_pushButton1 = new QPushButton(groupBox);
        axis_fontColor_pushButton1->setObjectName(QString::fromUtf8("axis_fontColor_pushButton1"));

        gridLayout->addWidget(axis_fontColor_pushButton1, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        axis_fontSize_spinBox1 = new QSpinBox(groupBox);
        axis_fontSize_spinBox1->setObjectName(QString::fromUtf8("axis_fontSize_spinBox1"));
        axis_fontSize_spinBox1->setMinimum(1);
        axis_fontSize_spinBox1->setMaximum(20);
        axis_fontSize_spinBox1->setValue(8);

        gridLayout->addWidget(axis_fontSize_spinBox1, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        range_groupBox = new QGroupBox(widget);
        range_groupBox->setObjectName(QString::fromUtf8("range_groupBox"));
        verticalLayout_4 = new QVBoxLayout(range_groupBox);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_min = new QLabel(range_groupBox);
        label_min->setObjectName(QString::fromUtf8("label_min"));

        horizontalLayout_3->addWidget(label_min);

        lineEdit_min = new QLineEdit(range_groupBox);
        lineEdit_min->setObjectName(QString::fromUtf8("lineEdit_min"));

        horizontalLayout_3->addWidget(lineEdit_min);

        label_max = new QLabel(range_groupBox);
        label_max->setObjectName(QString::fromUtf8("label_max"));

        horizontalLayout_3->addWidget(label_max);

        lineEdit_max = new QLineEdit(range_groupBox);
        lineEdit_max->setObjectName(QString::fromUtf8("lineEdit_max"));

        horizontalLayout_3->addWidget(lineEdit_max);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        rescale_pushButton = new QPushButton(range_groupBox);
        rescale_pushButton->setObjectName(QString::fromUtf8("rescale_pushButton"));

        horizontalLayout_4->addWidget(rescale_pushButton);


        verticalLayout_4->addLayout(horizontalLayout_4);


        verticalLayout_2->addWidget(range_groupBox);

        xDataSource_groupBox = new QGroupBox(widget);
        xDataSource_groupBox->setObjectName(QString::fromUtf8("xDataSource_groupBox"));
        verticalLayout = new QVBoxLayout(xDataSource_groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_5 = new QLabel(xDataSource_groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        axis_dataSource_comboBox1 = new QComboBox(xDataSource_groupBox);
        axis_dataSource_comboBox1->addItem(QString());
        axis_dataSource_comboBox1->addItem(QString());
        axis_dataSource_comboBox1->setObjectName(QString::fromUtf8("axis_dataSource_comboBox1"));

        horizontalLayout->addWidget(axis_dataSource_comboBox1);


        verticalLayout->addLayout(horizontalLayout);

        fileDataSource_groupBox = new QGroupBox(xDataSource_groupBox);
        fileDataSource_groupBox->setObjectName(QString::fromUtf8("fileDataSource_groupBox"));
        gridLayout_2 = new QGridLayout(fileDataSource_groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_6 = new QLabel(fileDataSource_groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 0, 0, 1, 1);

        axis_dataFile_comboBox1 = new QComboBox(fileDataSource_groupBox);
        axis_dataFile_comboBox1->setObjectName(QString::fromUtf8("axis_dataFile_comboBox1"));

        gridLayout_2->addWidget(axis_dataFile_comboBox1, 0, 1, 1, 1);

        label_7 = new QLabel(fileDataSource_groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 1, 0, 1, 1);

        axis_dataColumn_comboBox1 = new QComboBox(fileDataSource_groupBox);
        axis_dataColumn_comboBox1->setObjectName(QString::fromUtf8("axis_dataColumn_comboBox1"));

        gridLayout_2->addWidget(axis_dataColumn_comboBox1, 1, 1, 1, 1);


        verticalLayout->addWidget(fileDataSource_groupBox);


        verticalLayout_2->addWidget(xDataSource_groupBox);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        verticalLayout_3->addWidget(widget);


        retranslateUi(curveAxisPropDialog);

        QMetaObject::connectSlotsByName(curveAxisPropDialog);
    } // setupUi

    void retranslateUi(QDialog *curveAxisPropDialog)
    {
        curveAxisPropDialog->setWindowTitle(QCoreApplication::translate("curveAxisPropDialog", "Axis Property", nullptr));
        label->setText(QCoreApplication::translate("curveAxisPropDialog", "axis name", nullptr));
        groupBox->setTitle(QCoreApplication::translate("curveAxisPropDialog", "font", nullptr));
        label_2->setText(QCoreApplication::translate("curveAxisPropDialog", "type", nullptr));
        axis_fontType_comboBox1->setItemText(0, QCoreApplication::translate("curveAxisPropDialog", "Song", nullptr));
        axis_fontType_comboBox1->setItemText(1, QCoreApplication::translate("curveAxisPropDialog", "Hei", nullptr));
        axis_fontType_comboBox1->setItemText(2, QCoreApplication::translate("curveAxisPropDialog", "Arail", nullptr));

        label_3->setText(QCoreApplication::translate("curveAxisPropDialog", "color", nullptr));
        axis_fontColor_pushButton1->setText(QString());
        label_4->setText(QCoreApplication::translate("curveAxisPropDialog", "size", nullptr));
        range_groupBox->setTitle(QCoreApplication::translate("curveAxisPropDialog", "Range", nullptr));
        label_min->setText(QCoreApplication::translate("curveAxisPropDialog", "min", nullptr));
        label_max->setText(QCoreApplication::translate("curveAxisPropDialog", "max", nullptr));
        rescale_pushButton->setText(QCoreApplication::translate("curveAxisPropDialog", "Rescale", nullptr));
        xDataSource_groupBox->setTitle(QCoreApplication::translate("curveAxisPropDialog", "xAxis dataSource", nullptr));
        label_5->setText(QCoreApplication::translate("curveAxisPropDialog", "dataSource", nullptr));
        axis_dataSource_comboBox1->setItemText(0, QCoreApplication::translate("curveAxisPropDialog", "index", nullptr));
        axis_dataSource_comboBox1->setItemText(1, QCoreApplication::translate("curveAxisPropDialog", "file", nullptr));

        fileDataSource_groupBox->setTitle(QString());
        label_6->setText(QCoreApplication::translate("curveAxisPropDialog", "dataFile", nullptr));
        label_7->setText(QCoreApplication::translate("curveAxisPropDialog", "dataColumn", nullptr));
    } // retranslateUi

};

namespace Ui {
    class curveAxisPropDialog: public Ui_curveAxisPropDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEAXISPROPDIALOG_H
