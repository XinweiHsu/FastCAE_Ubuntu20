/********************************************************************************
** Form generated from reading UI file 'dialogMakeMatrix.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKEMATRIX_H
#define UI_DIALOGMAKEMATRIX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MakeMatrixDialog
{
public:
    QGridLayout *gridLayout;
    QDialogButtonBox *buttonBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxOption;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_11;
    QPushButton *geoSelectSurface;
    QLabel *edgelabel;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QDoubleSpinBox *doubleSpinBoxX_2;
    QDoubleSpinBox *doubleSpinBoxY_2;
    QDoubleSpinBox *doubleSpinBoxZ_2;
    QHBoxLayout *horizontalLayout_12;
    QRadioButton *radioButtonX_2;
    QRadioButton *radioButtonY_2;
    QRadioButton *radioButtonZ_2;
    QRadioButton *radioButtonUser_2;
    QCheckBox *checkBoxDir1Reverse_2;
    QLabel *label_11;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *dir2lineEdit;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *sum2spinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_13;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QDoubleSpinBox *doubleSpinBoxX_1;
    QDoubleSpinBox *doubleSpinBoxY_1;
    QDoubleSpinBox *doubleSpinBoxZ_1;
    QHBoxLayout *horizontalLayout_10;
    QRadioButton *radioButtonX_1;
    QRadioButton *radioButtonY_1;
    QRadioButton *radioButtonZ_1;
    QRadioButton *radioButtonUser_1;
    QCheckBox *checkBoxDir1Reverse;
    QGridLayout *gridLayout_2;
    QLabel *sum1label;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_6;
    QSpinBox *sum1spinBox;
    QLineEdit *dir1lineEdit;
    QCheckBox *dir2checkBox;
    QWidget *tab_2;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_12;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_10;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *doubleSpinBoxX_3;
    QDoubleSpinBox *doubleSpinBoxY_3;
    QDoubleSpinBox *doubleSpinBoxZ_3;
    QHBoxLayout *horizontalLayout_13;
    QRadioButton *radioButtonX_3;
    QRadioButton *radioButtonY_3;
    QRadioButton *radioButtonZ_3;
    QCheckBox *checkBoxDir1Reverse_3;
    QRadioButton *radioButtonUser_3;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_4;
    QLabel *sum1label_2;
    QSpacerItem *horizontalSpacer_5;
    QSpinBox *sum1spinBox_2;
    QLabel *label_18;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *axisAnglelineEdit;
    QLabel *label_19;

    void setupUi(QDialog *MakeMatrixDialog)
    {
        if (MakeMatrixDialog->objectName().isEmpty())
            MakeMatrixDialog->setObjectName(QString::fromUtf8("MakeMatrixDialog"));
        MakeMatrixDialog->resize(392, 639);
        gridLayout = new QGridLayout(MakeMatrixDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        buttonBox = new QDialogButtonBox(MakeMatrixDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(MakeMatrixDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxOption = new QComboBox(MakeMatrixDialog);
        comboBoxOption->addItem(QString());
        comboBoxOption->addItem(QString());
        comboBoxOption->setObjectName(QString::fromUtf8("comboBoxOption"));

        horizontalLayout->addWidget(comboBoxOption);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        groupBox = new QGroupBox(MakeMatrixDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_11 = new QGridLayout(groupBox);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        geoSelectSurface = new QPushButton(groupBox);
        geoSelectSurface->setObjectName(QString::fromUtf8("geoSelectSurface"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectSurface->sizePolicy().hasHeightForWidth());
        geoSelectSurface->setSizePolicy(sizePolicy);
        geoSelectSurface->setMinimumSize(QSize(32, 32));
        geoSelectSurface->setMaximumSize(QSize(32, 32));
        geoSelectSurface->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectbody.png);"));
        geoSelectSurface->setCheckable(true);

        gridLayout_11->addWidget(geoSelectSurface, 0, 1, 1, 1);

        edgelabel = new QLabel(groupBox);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout_11->addWidget(edgelabel, 0, 0, 1, 1);


        gridLayout->addWidget(groupBox, 0, 0, 1, 1);

        tabWidget = new QTabWidget(MakeMatrixDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_7 = new QGridLayout(tab);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setCheckable(false);
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_5 = new QGroupBox(groupBox_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        doubleSpinBoxX_2 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxX_2->setObjectName(QString::fromUtf8("doubleSpinBoxX_2"));
        doubleSpinBoxX_2->setMinimum(-1000.000000000000000);
        doubleSpinBoxX_2->setMaximum(1000.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBoxX_2);

        doubleSpinBoxY_2 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxY_2->setObjectName(QString::fromUtf8("doubleSpinBoxY_2"));
        doubleSpinBoxY_2->setMinimum(-1000.000000000000000);
        doubleSpinBoxY_2->setMaximum(1000.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBoxY_2);

        doubleSpinBoxZ_2 = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxZ_2->setObjectName(QString::fromUtf8("doubleSpinBoxZ_2"));
        doubleSpinBoxZ_2->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ_2->setMaximum(1000.000000000000000);
        doubleSpinBoxZ_2->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBoxZ_2);


        gridLayout_6->addLayout(horizontalLayout_8, 2, 0, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        radioButtonX_2 = new QRadioButton(groupBox_5);
        radioButtonX_2->setObjectName(QString::fromUtf8("radioButtonX_2"));

        horizontalLayout_12->addWidget(radioButtonX_2);

        radioButtonY_2 = new QRadioButton(groupBox_5);
        radioButtonY_2->setObjectName(QString::fromUtf8("radioButtonY_2"));
        radioButtonY_2->setChecked(true);

        horizontalLayout_12->addWidget(radioButtonY_2);

        radioButtonZ_2 = new QRadioButton(groupBox_5);
        radioButtonZ_2->setObjectName(QString::fromUtf8("radioButtonZ_2"));
        radioButtonZ_2->setChecked(false);

        horizontalLayout_12->addWidget(radioButtonZ_2);


        gridLayout_6->addLayout(horizontalLayout_12, 0, 0, 1, 1);

        radioButtonUser_2 = new QRadioButton(groupBox_5);
        radioButtonUser_2->setObjectName(QString::fromUtf8("radioButtonUser_2"));

        gridLayout_6->addWidget(radioButtonUser_2, 1, 0, 1, 1);

        checkBoxDir1Reverse_2 = new QCheckBox(groupBox_5);
        checkBoxDir1Reverse_2->setObjectName(QString::fromUtf8("checkBoxDir1Reverse_2"));

        gridLayout_6->addWidget(checkBoxDir1Reverse_2, 3, 0, 1, 1);


        gridLayout_3->addWidget(groupBox_5, 0, 0, 1, 3);

        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_3, 1, 1, 1, 1);

        dir2lineEdit = new QLineEdit(groupBox_4);
        dir2lineEdit->setObjectName(QString::fromUtf8("dir2lineEdit"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(dir2lineEdit->sizePolicy().hasHeightForWidth());
        dir2lineEdit->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(dir2lineEdit, 1, 2, 1, 1);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 2, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(128, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_4, 2, 1, 1, 1);

        sum2spinBox = new QSpinBox(groupBox_4);
        sum2spinBox->setObjectName(QString::fromUtf8("sum2spinBox"));
        sizePolicy1.setHeightForWidth(sum2spinBox->sizePolicy().hasHeightForWidth());
        sum2spinBox->setSizePolicy(sizePolicy1);
        sum2spinBox->setMinimum(1);
        sum2spinBox->setMaximum(999999999);
        sum2spinBox->setValue(2);

        gridLayout_3->addWidget(sum2spinBox, 2, 2, 1, 1);


        gridLayout_7->addWidget(groupBox_4, 2, 0, 1, 1);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_13 = new QGridLayout(groupBox_2);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        groupBox_3 = new QGroupBox(groupBox_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_5 = new QGridLayout(groupBox_3);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        doubleSpinBoxX_1 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBoxX_1->setObjectName(QString::fromUtf8("doubleSpinBoxX_1"));
        doubleSpinBoxX_1->setMinimum(-1000.000000000000000);
        doubleSpinBoxX_1->setMaximum(1000.000000000000000);

        horizontalLayout_7->addWidget(doubleSpinBoxX_1);

        doubleSpinBoxY_1 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBoxY_1->setObjectName(QString::fromUtf8("doubleSpinBoxY_1"));
        doubleSpinBoxY_1->setMinimum(-1000.000000000000000);
        doubleSpinBoxY_1->setMaximum(1000.000000000000000);

        horizontalLayout_7->addWidget(doubleSpinBoxY_1);

        doubleSpinBoxZ_1 = new QDoubleSpinBox(groupBox_3);
        doubleSpinBoxZ_1->setObjectName(QString::fromUtf8("doubleSpinBoxZ_1"));
        doubleSpinBoxZ_1->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ_1->setMaximum(1000.000000000000000);
        doubleSpinBoxZ_1->setValue(1.000000000000000);

        horizontalLayout_7->addWidget(doubleSpinBoxZ_1);


        gridLayout_5->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        radioButtonX_1 = new QRadioButton(groupBox_3);
        radioButtonX_1->setObjectName(QString::fromUtf8("radioButtonX_1"));

        horizontalLayout_10->addWidget(radioButtonX_1);

        radioButtonY_1 = new QRadioButton(groupBox_3);
        radioButtonY_1->setObjectName(QString::fromUtf8("radioButtonY_1"));

        horizontalLayout_10->addWidget(radioButtonY_1);

        radioButtonZ_1 = new QRadioButton(groupBox_3);
        radioButtonZ_1->setObjectName(QString::fromUtf8("radioButtonZ_1"));
        radioButtonZ_1->setChecked(true);

        horizontalLayout_10->addWidget(radioButtonZ_1);


        gridLayout_5->addLayout(horizontalLayout_10, 0, 0, 1, 1);

        radioButtonUser_1 = new QRadioButton(groupBox_3);
        radioButtonUser_1->setObjectName(QString::fromUtf8("radioButtonUser_1"));

        gridLayout_5->addWidget(radioButtonUser_1, 1, 0, 1, 1);

        checkBoxDir1Reverse = new QCheckBox(groupBox_3);
        checkBoxDir1Reverse->setObjectName(QString::fromUtf8("checkBoxDir1Reverse"));

        gridLayout_5->addWidget(checkBoxDir1Reverse, 3, 0, 1, 1);


        gridLayout_13->addWidget(groupBox_3, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sum1label = new QLabel(groupBox_2);
        sum1label->setObjectName(QString::fromUtf8("sum1label"));

        gridLayout_2->addWidget(sum1label, 1, 0, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_6, 1, 1, 1, 1);

        sum1spinBox = new QSpinBox(groupBox_2);
        sum1spinBox->setObjectName(QString::fromUtf8("sum1spinBox"));
        sizePolicy1.setHeightForWidth(sum1spinBox->sizePolicy().hasHeightForWidth());
        sum1spinBox->setSizePolicy(sizePolicy1);
        sum1spinBox->setMinimum(1);
        sum1spinBox->setMaximum(999999999);
        sum1spinBox->setValue(2);

        gridLayout_2->addWidget(sum1spinBox, 1, 2, 1, 1);

        dir1lineEdit = new QLineEdit(groupBox_2);
        dir1lineEdit->setObjectName(QString::fromUtf8("dir1lineEdit"));
        sizePolicy1.setHeightForWidth(dir1lineEdit->sizePolicy().hasHeightForWidth());
        dir1lineEdit->setSizePolicy(sizePolicy1);

        gridLayout_2->addWidget(dir1lineEdit, 0, 2, 1, 1);


        gridLayout_13->addLayout(gridLayout_2, 1, 0, 1, 1);


        gridLayout_7->addWidget(groupBox_2, 0, 0, 1, 1);

        dir2checkBox = new QCheckBox(tab);
        dir2checkBox->setObjectName(QString::fromUtf8("dir2checkBox"));

        gridLayout_7->addWidget(dir2checkBox, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_8 = new QGridLayout(tab_2);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_7 = new QGroupBox(tab_2);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(groupBox_7->sizePolicy().hasHeightForWidth());
        groupBox_7->setSizePolicy(sizePolicy2);
        gridLayout_12 = new QGridLayout(groupBox_7);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        groupBox_6 = new QGroupBox(groupBox_7);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        sizePolicy2.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy2);
        gridLayout_10 = new QGridLayout(groupBox_6);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        gridLayout_10->addLayout(verticalLayout, 0, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_6, 0, 0, 1, 1);

        groupBox_8 = new QGroupBox(groupBox_7);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        sizePolicy2.setHeightForWidth(groupBox_8->sizePolicy().hasHeightForWidth());
        groupBox_8->setSizePolicy(sizePolicy2);
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        doubleSpinBoxX_3 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBoxX_3->setObjectName(QString::fromUtf8("doubleSpinBoxX_3"));
        doubleSpinBoxX_3->setMinimum(-1000.000000000000000);
        doubleSpinBoxX_3->setMaximum(1000.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxX_3);

        doubleSpinBoxY_3 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBoxY_3->setObjectName(QString::fromUtf8("doubleSpinBoxY_3"));
        doubleSpinBoxY_3->setMinimum(-1000.000000000000000);
        doubleSpinBoxY_3->setMaximum(1000.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxY_3);

        doubleSpinBoxZ_3 = new QDoubleSpinBox(groupBox_8);
        doubleSpinBoxZ_3->setObjectName(QString::fromUtf8("doubleSpinBoxZ_3"));
        doubleSpinBoxZ_3->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ_3->setMaximum(1000.000000000000000);
        doubleSpinBoxZ_3->setValue(1.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxZ_3);


        gridLayout_9->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        radioButtonX_3 = new QRadioButton(groupBox_8);
        radioButtonX_3->setObjectName(QString::fromUtf8("radioButtonX_3"));

        horizontalLayout_13->addWidget(radioButtonX_3);

        radioButtonY_3 = new QRadioButton(groupBox_8);
        radioButtonY_3->setObjectName(QString::fromUtf8("radioButtonY_3"));

        horizontalLayout_13->addWidget(radioButtonY_3);

        radioButtonZ_3 = new QRadioButton(groupBox_8);
        radioButtonZ_3->setObjectName(QString::fromUtf8("radioButtonZ_3"));
        radioButtonZ_3->setChecked(true);

        horizontalLayout_13->addWidget(radioButtonZ_3);


        gridLayout_9->addLayout(horizontalLayout_13, 0, 0, 1, 1);

        checkBoxDir1Reverse_3 = new QCheckBox(groupBox_8);
        checkBoxDir1Reverse_3->setObjectName(QString::fromUtf8("checkBoxDir1Reverse_3"));

        gridLayout_9->addWidget(checkBoxDir1Reverse_3, 3, 0, 1, 1);

        radioButtonUser_3 = new QRadioButton(groupBox_8);
        radioButtonUser_3->setObjectName(QString::fromUtf8("radioButtonUser_3"));

        gridLayout_9->addWidget(radioButtonUser_3, 1, 0, 1, 1);


        gridLayout_12->addWidget(groupBox_8, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_7, 0, 0, 1, 1);

        groupBox_9 = new QGroupBox(tab_2);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        sizePolicy2.setHeightForWidth(groupBox_9->sizePolicy().hasHeightForWidth());
        groupBox_9->setSizePolicy(sizePolicy2);
        gridLayout_4 = new QGridLayout(groupBox_9);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        sum1label_2 = new QLabel(groupBox_9);
        sum1label_2->setObjectName(QString::fromUtf8("sum1label_2"));

        gridLayout_4->addWidget(sum1label_2, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 1, 1, 1);

        sum1spinBox_2 = new QSpinBox(groupBox_9);
        sum1spinBox_2->setObjectName(QString::fromUtf8("sum1spinBox_2"));
        sizePolicy1.setHeightForWidth(sum1spinBox_2->sizePolicy().hasHeightForWidth());
        sum1spinBox_2->setSizePolicy(sizePolicy1);
        sum1spinBox_2->setValue(2);

        gridLayout_4->addWidget(sum1spinBox_2, 0, 2, 1, 1);

        label_18 = new QLabel(groupBox_9);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_4->addWidget(label_18, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(96, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 1, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        axisAnglelineEdit = new QLineEdit(groupBox_9);
        axisAnglelineEdit->setObjectName(QString::fromUtf8("axisAnglelineEdit"));

        horizontalLayout_3->addWidget(axisAnglelineEdit);

        label_19 = new QLabel(groupBox_9);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_3->addWidget(label_19);


        gridLayout_4->addLayout(horizontalLayout_3, 1, 2, 1, 1);


        gridLayout_8->addWidget(groupBox_9, 1, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout->addWidget(tabWidget, 2, 0, 1, 1);


        retranslateUi(MakeMatrixDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MakeMatrixDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MakeMatrixDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MakeMatrixDialog);
    } // setupUi

    void retranslateUi(QDialog *MakeMatrixDialog)
    {
        MakeMatrixDialog->setWindowTitle(QCoreApplication::translate("MakeMatrixDialog", "Make Matrix", nullptr));
        label->setText(QCoreApplication::translate("MakeMatrixDialog", "Option:", nullptr));
        comboBoxOption->setItemText(0, QCoreApplication::translate("MakeMatrixDialog", "Linear Matrix", nullptr));
        comboBoxOption->setItemText(1, QCoreApplication::translate("MakeMatrixDialog", "Wire Matrix", nullptr));

        groupBox->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Body", nullptr));
        geoSelectSurface->setText(QString());
        edgelabel->setText(QCoreApplication::translate("MakeMatrixDialog", "Selected body(0)", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Direction 2", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Direction", nullptr));
        radioButtonX_2->setText(QCoreApplication::translate("MakeMatrixDialog", "X axis", nullptr));
        radioButtonY_2->setText(QCoreApplication::translate("MakeMatrixDialog", "Y axis", nullptr));
        radioButtonZ_2->setText(QCoreApplication::translate("MakeMatrixDialog", "Z axis", nullptr));
        radioButtonUser_2->setText(QCoreApplication::translate("MakeMatrixDialog", "User define", nullptr));
        checkBoxDir1Reverse_2->setText(QCoreApplication::translate("MakeMatrixDialog", "Reverse", nullptr));
        label_11->setText(QCoreApplication::translate("MakeMatrixDialog", "Distance", nullptr));
        dir2lineEdit->setText(QCoreApplication::translate("MakeMatrixDialog", "15", nullptr));
        label_7->setText(QCoreApplication::translate("MakeMatrixDialog", "Count", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Direction 1", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Direction", nullptr));
        radioButtonX_1->setText(QCoreApplication::translate("MakeMatrixDialog", "X axis", nullptr));
        radioButtonY_1->setText(QCoreApplication::translate("MakeMatrixDialog", "Y axis", nullptr));
        radioButtonZ_1->setText(QCoreApplication::translate("MakeMatrixDialog", "Z axis", nullptr));
        radioButtonUser_1->setText(QCoreApplication::translate("MakeMatrixDialog", "User define", nullptr));
        checkBoxDir1Reverse->setText(QCoreApplication::translate("MakeMatrixDialog", "Reverse", nullptr));
        sum1label->setText(QCoreApplication::translate("MakeMatrixDialog", "Count", nullptr));
        label_10->setText(QCoreApplication::translate("MakeMatrixDialog", "Distance", nullptr));
        dir1lineEdit->setText(QCoreApplication::translate("MakeMatrixDialog", "15", nullptr));
        dir2checkBox->setText(QCoreApplication::translate("MakeMatrixDialog", "Set Direction 2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MakeMatrixDialog", "Tab 1", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Axis", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Basic Point", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("MakeMatrixDialog", "Direction", nullptr));
        radioButtonX_3->setText(QCoreApplication::translate("MakeMatrixDialog", "X axis", nullptr));
        radioButtonY_3->setText(QCoreApplication::translate("MakeMatrixDialog", "Y axis", nullptr));
        radioButtonZ_3->setText(QCoreApplication::translate("MakeMatrixDialog", "Z axis", nullptr));
        checkBoxDir1Reverse_3->setText(QCoreApplication::translate("MakeMatrixDialog", "Reverse", nullptr));
        radioButtonUser_3->setText(QCoreApplication::translate("MakeMatrixDialog", "User define", nullptr));
        groupBox_9->setTitle(QString());
        sum1label_2->setText(QCoreApplication::translate("MakeMatrixDialog", "Count", nullptr));
        label_18->setText(QCoreApplication::translate("MakeMatrixDialog", "Pitch Angle", nullptr));
        axisAnglelineEdit->setText(QCoreApplication::translate("MakeMatrixDialog", "30", nullptr));
        label_19->setText(QCoreApplication::translate("MakeMatrixDialog", "deg", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MakeMatrixDialog", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MakeMatrixDialog: public Ui_MakeMatrixDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKEMATRIX_H
