/********************************************************************************
** Form generated from reading UI file 'dialogRotateFeature.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGROTATEFEATURE_H
#define UI_DIALOGROTATEFEATURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
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

class Ui_RotateFeatureDialog
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *edgelabel;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_8;
    QVBoxLayout *basicPointlLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxOption;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *edgelabel_2;
    QPushButton *geoSelectCurve;
    QWidget *tab_2;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QRadioButton *radioButtonUser;
    QSpacerItem *verticalSpacer;
    QCheckBox *checkBoxReverse;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QFormLayout *formLayout;
    QLineEdit *lineEditDegree;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer;
    QCheckBox *checkBoxSaveOrigin;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RotateFeatureDialog)
    {
        if (RotateFeatureDialog->objectName().isEmpty())
            RotateFeatureDialog->setObjectName(QString::fromUtf8("RotateFeatureDialog"));
        RotateFeatureDialog->resize(456, 439);
        gridLayout_4 = new QGridLayout(RotateFeatureDialog);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(RotateFeatureDialog);
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


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_6 = new QGroupBox(RotateFeatureDialog);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_8 = new QGridLayout(groupBox_6);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        gridLayout_8->setContentsMargins(0, -1, 0, -1);
        basicPointlLayout = new QVBoxLayout();
        basicPointlLayout->setObjectName(QString::fromUtf8("basicPointlLayout"));

        gridLayout_8->addLayout(basicPointlLayout, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_6, 1, 0, 1, 2);

        groupBox_2 = new QGroupBox(RotateFeatureDialog);
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
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        edgelabel_2 = new QLabel(tab);
        edgelabel_2->setObjectName(QString::fromUtf8("edgelabel_2"));

        gridLayout_2->addWidget(edgelabel_2, 0, 0, 1, 1);

        geoSelectCurve = new QPushButton(tab);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        sizePolicy.setHeightForWidth(geoSelectCurve->sizePolicy().hasHeightForWidth());
        geoSelectCurve->setSizePolicy(sizePolicy);
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));
        geoSelectCurve->setCheckable(true);
        geoSelectCurve->setChecked(false);

        gridLayout_2->addWidget(geoSelectCurve, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_5 = new QGridLayout(tab_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(tab_2);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(tab_2);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(tab_2);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_5->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(tab_2);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(tab_2);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(tab_2);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_5->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        radioButtonUser = new QRadioButton(tab_2);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_5->addWidget(radioButtonUser, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 3, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_7->addWidget(tabWidget, 1, 0, 1, 1);

        checkBoxReverse = new QCheckBox(groupBox_2);
        checkBoxReverse->setObjectName(QString::fromUtf8("checkBoxReverse"));

        gridLayout_7->addWidget(checkBoxReverse, 2, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 2);

        groupBox_3 = new QGroupBox(RotateFeatureDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lineEditDegree = new QLineEdit(groupBox_3);
        lineEditDegree->setObjectName(QString::fromUtf8("lineEditDegree"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lineEditDegree);

        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_3);


        gridLayout_3->addLayout(formLayout, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_3, 3, 0, 1, 2);

        checkBoxSaveOrigin = new QCheckBox(RotateFeatureDialog);
        checkBoxSaveOrigin->setObjectName(QString::fromUtf8("checkBoxSaveOrigin"));
        checkBoxSaveOrigin->setChecked(false);

        gridLayout_4->addWidget(checkBoxSaveOrigin, 4, 0, 1, 1);

        buttonBox = new QDialogButtonBox(RotateFeatureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 5, 1, 1, 1);


        retranslateUi(RotateFeatureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), RotateFeatureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RotateFeatureDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RotateFeatureDialog);
    } // setupUi

    void retranslateUi(QDialog *RotateFeatureDialog)
    {
        RotateFeatureDialog->setWindowTitle(QCoreApplication::translate("RotateFeatureDialog", "Rotate Feature", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RotateFeatureDialog", "Body", nullptr));
        edgelabel->setText(QCoreApplication::translate("RotateFeatureDialog", "Selected body(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("RotateFeatureDialog", "Basic Point", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("RotateFeatureDialog", "Axis", nullptr));
        label->setText(QCoreApplication::translate("RotateFeatureDialog", "Option:", nullptr));
        comboBoxOption->setItemText(0, QCoreApplication::translate("RotateFeatureDialog", "Select on geometry", nullptr));
        comboBoxOption->setItemText(1, QCoreApplication::translate("RotateFeatureDialog", "Coordinate", nullptr));

        edgelabel_2->setText(QCoreApplication::translate("RotateFeatureDialog", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("RotateFeatureDialog", "Tab 1", nullptr));
        radioButtonX->setText(QCoreApplication::translate("RotateFeatureDialog", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("RotateFeatureDialog", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("RotateFeatureDialog", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("RotateFeatureDialog", "User define", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("RotateFeatureDialog", "Tab 2", nullptr));
        checkBoxReverse->setText(QCoreApplication::translate("RotateFeatureDialog", "Reverse", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("RotateFeatureDialog", "Degree", nullptr));
        label_2->setText(QCoreApplication::translate("RotateFeatureDialog", "Degree:", nullptr));
        lineEditDegree->setText(QCoreApplication::translate("RotateFeatureDialog", "30.00", nullptr));
        label_3->setText(QCoreApplication::translate("RotateFeatureDialog", "deg", nullptr));
        checkBoxSaveOrigin->setText(QCoreApplication::translate("RotateFeatureDialog", "Save Origin body", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RotateFeatureDialog: public Ui_RotateFeatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGROTATEFEATURE_H
