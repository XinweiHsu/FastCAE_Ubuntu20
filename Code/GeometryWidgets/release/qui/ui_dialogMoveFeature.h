/********************************************************************************
** Form generated from reading UI file 'dialogMoveFeature.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMOVEFEATURE_H
#define UI_DIALOGMOVEFEATURE_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoveFeatureDialog
{
public:
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxOption;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *baseLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_3;
    QVBoxLayout *endLayout;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditLength;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonUser;
    QCheckBox *checkBoxReverse;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxSaveOrigin;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MoveFeatureDialog)
    {
        if (MoveFeatureDialog->objectName().isEmpty())
            MoveFeatureDialog->setObjectName(QString::fromUtf8("MoveFeatureDialog"));
        MoveFeatureDialog->resize(456, 399);
        gridLayout_8 = new QGridLayout(MoveFeatureDialog);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox = new QGroupBox(MoveFeatureDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        edgelabel = new QLabel(groupBox);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout->addWidget(edgelabel, 0, 0, 1, 1);

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

        gridLayout->addWidget(geoSelectSurface, 0, 1, 1, 1);


        gridLayout_8->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MoveFeatureDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_7 = new QGridLayout(groupBox_2);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxOption = new QComboBox(groupBox_2);
        comboBoxOption->addItem(QString());
        comboBoxOption->addItem(QString());
        comboBoxOption->setObjectName(QString::fromUtf8("comboBoxOption"));

        horizontalLayout->addWidget(comboBoxOption);


        gridLayout_7->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, -1, 0, -1);
        baseLayout = new QVBoxLayout();
        baseLayout->setObjectName(QString::fromUtf8("baseLayout"));

        gridLayout_2->addLayout(baseLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_3 = new QGridLayout(groupBox_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setContentsMargins(0, -1, 0, -1);
        endLayout = new QVBoxLayout();
        endLayout->setObjectName(QString::fromUtf8("endLayout"));

        gridLayout_3->addLayout(endLayout, 0, 0, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 1, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(tab_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditLength = new QLineEdit(tab_2);
        lineEditLength->setObjectName(QString::fromUtf8("lineEditLength"));

        horizontalLayout_3->addWidget(lineEditLength);


        gridLayout_5->addLayout(horizontalLayout_3, 0, 0, 1, 1);

        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_4 = new QGridLayout(groupBox_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(groupBox_5);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_4->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(groupBox_5);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox_5);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox_5);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_4->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        radioButtonUser = new QRadioButton(groupBox_5);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_4->addWidget(radioButtonUser, 1, 0, 1, 1);

        checkBoxReverse = new QCheckBox(groupBox_5);
        checkBoxReverse->setObjectName(QString::fromUtf8("checkBoxReverse"));

        gridLayout_4->addWidget(checkBoxReverse, 3, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_5, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_7->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_2, 1, 0, 1, 1);

        checkBoxSaveOrigin = new QCheckBox(MoveFeatureDialog);
        checkBoxSaveOrigin->setObjectName(QString::fromUtf8("checkBoxSaveOrigin"));
        checkBoxSaveOrigin->setChecked(false);

        gridLayout_8->addWidget(checkBoxSaveOrigin, 2, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MoveFeatureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_8->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(MoveFeatureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MoveFeatureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MoveFeatureDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MoveFeatureDialog);
    } // setupUi

    void retranslateUi(QDialog *MoveFeatureDialog)
    {
        MoveFeatureDialog->setWindowTitle(QCoreApplication::translate("MoveFeatureDialog", "Move Feature", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MoveFeatureDialog", "Body", nullptr));
        edgelabel->setText(QCoreApplication::translate("MoveFeatureDialog", "Selected body(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MoveFeatureDialog", "Transform", nullptr));
        label->setText(QCoreApplication::translate("MoveFeatureDialog", "Option:", nullptr));
        comboBoxOption->setItemText(0, QCoreApplication::translate("MoveFeatureDialog", "Two Points", nullptr));
        comboBoxOption->setItemText(1, QCoreApplication::translate("MoveFeatureDialog", "Distance", nullptr));

        groupBox_3->setTitle(QCoreApplication::translate("MoveFeatureDialog", "Base Point", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MoveFeatureDialog", "End Point", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MoveFeatureDialog", "Tab 1", nullptr));
        label_3->setText(QCoreApplication::translate("MoveFeatureDialog", "Length:", nullptr));
        lineEditLength->setText(QCoreApplication::translate("MoveFeatureDialog", "10.00", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("MoveFeatureDialog", "Direction", nullptr));
        radioButtonX->setText(QCoreApplication::translate("MoveFeatureDialog", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("MoveFeatureDialog", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("MoveFeatureDialog", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("MoveFeatureDialog", "User define", nullptr));
        checkBoxReverse->setText(QCoreApplication::translate("MoveFeatureDialog", "Reverse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MoveFeatureDialog", "Tab 2", nullptr));
        checkBoxSaveOrigin->setText(QCoreApplication::translate("MoveFeatureDialog", "Save Origin body", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MoveFeatureDialog: public Ui_MoveFeatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMOVEFEATURE_H
