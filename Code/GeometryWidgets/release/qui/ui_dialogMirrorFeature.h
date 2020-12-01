/********************************************************************************
** Form generated from reading UI file 'dialogMirrorFeature.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMIRRORFEATURE_H
#define UI_DIALOGMIRRORFEATURE_H

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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MirrorFeatureDialog
{
public:
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *bodylabel;
    QPushButton *geoSelectSurface;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxType;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGridLayout *gridLayout_2;
    QLabel *planelabel;
    QPushButton *geoSelectSurface_1;
    QWidget *tab_2;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QComboBox *comboBoxPlane;
    QWidget *tab_3;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QVBoxLayout *basicLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_7;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonUser;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QDialogButtonBox *buttonBox;
    QCheckBox *checkBoxSaveOrigin;

    void setupUi(QDialog *MirrorFeatureDialog)
    {
        if (MirrorFeatureDialog->objectName().isEmpty())
            MirrorFeatureDialog->setObjectName(QString::fromUtf8("MirrorFeatureDialog"));
        MirrorFeatureDialog->resize(434, 383);
        gridLayout_5 = new QGridLayout(MirrorFeatureDialog);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox = new QGroupBox(MirrorFeatureDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        bodylabel = new QLabel(groupBox);
        bodylabel->setObjectName(QString::fromUtf8("bodylabel"));

        gridLayout->addWidget(bodylabel, 0, 0, 1, 1);

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


        gridLayout_5->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(MirrorFeatureDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(label);

        comboBoxType = new QComboBox(groupBox_2);
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->addItem(QString());
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(comboBoxType->sizePolicy().hasHeightForWidth());
        comboBoxType->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(comboBoxType);


        gridLayout_4->addLayout(horizontalLayout, 0, 0, 1, 1);

        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_2 = new QGridLayout(tab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        planelabel = new QLabel(tab);
        planelabel->setObjectName(QString::fromUtf8("planelabel"));

        gridLayout_2->addWidget(planelabel, 0, 0, 1, 1);

        geoSelectSurface_1 = new QPushButton(tab);
        geoSelectSurface_1->setObjectName(QString::fromUtf8("geoSelectSurface_1"));
        sizePolicy.setHeightForWidth(geoSelectSurface_1->sizePolicy().hasHeightForWidth());
        geoSelectSurface_1->setSizePolicy(sizePolicy);
        geoSelectSurface_1->setMinimumSize(QSize(32, 32));
        geoSelectSurface_1->setMaximumSize(QSize(32, 32));
        geoSelectSurface_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectface.png);"));
        geoSelectSurface_1->setCheckable(true);

        gridLayout_2->addWidget(geoSelectSurface_1, 0, 1, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_3 = new QGridLayout(tab_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        comboBoxPlane = new QComboBox(tab_2);
        comboBoxPlane->addItem(QString());
        comboBoxPlane->addItem(QString());
        comboBoxPlane->addItem(QString());
        comboBoxPlane->setObjectName(QString::fromUtf8("comboBoxPlane"));

        gridLayout_3->addWidget(comboBoxPlane, 0, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        gridLayout_8 = new QGridLayout(tab_3);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_3 = new QGroupBox(tab_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        gridLayout_6->setContentsMargins(0, -1, 0, -1);
        basicLayout = new QVBoxLayout();
        basicLayout->setObjectName(QString::fromUtf8("basicLayout"));

        gridLayout_6->addLayout(basicLayout, 0, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_7 = new QGridLayout(groupBox_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(groupBox_4);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox_4);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox_4);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_7->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        radioButtonUser = new QRadioButton(groupBox_4);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_7->addWidget(radioButtonUser, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(groupBox_4);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_4);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(groupBox_4);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_7->addLayout(horizontalLayout_5, 2, 0, 1, 1);


        gridLayout_8->addWidget(groupBox_4, 1, 0, 1, 1);

        tabWidget->addTab(tab_3, QString());

        gridLayout_4->addWidget(tabWidget, 1, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_2, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MirrorFeatureDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_5->addWidget(buttonBox, 3, 0, 1, 1);

        checkBoxSaveOrigin = new QCheckBox(MirrorFeatureDialog);
        checkBoxSaveOrigin->setObjectName(QString::fromUtf8("checkBoxSaveOrigin"));
        checkBoxSaveOrigin->setChecked(true);

        gridLayout_5->addWidget(checkBoxSaveOrigin, 2, 0, 1, 1);


        retranslateUi(MirrorFeatureDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MirrorFeatureDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MirrorFeatureDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MirrorFeatureDialog);
    } // setupUi

    void retranslateUi(QDialog *MirrorFeatureDialog)
    {
        MirrorFeatureDialog->setWindowTitle(QCoreApplication::translate("MirrorFeatureDialog", "Mirror Feature", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MirrorFeatureDialog", "Body", nullptr));
        bodylabel->setText(QCoreApplication::translate("MirrorFeatureDialog", "Selected body(0)", nullptr));
        geoSelectSurface->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("MirrorFeatureDialog", "Symmetric Plane", nullptr));
        label->setText(QCoreApplication::translate("MirrorFeatureDialog", "Plane", nullptr));
        comboBoxType->setItemText(0, QCoreApplication::translate("MirrorFeatureDialog", "Select plane on geometry", nullptr));
        comboBoxType->setItemText(1, QCoreApplication::translate("MirrorFeatureDialog", "Coordinate", nullptr));
        comboBoxType->setItemText(2, QCoreApplication::translate("MirrorFeatureDialog", "Random", nullptr));

        planelabel->setText(QCoreApplication::translate("MirrorFeatureDialog", "Selected Plane(0)", nullptr));
        geoSelectSurface_1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MirrorFeatureDialog", "Tab 1", nullptr));
        label_2->setText(QCoreApplication::translate("MirrorFeatureDialog", "Plane:", nullptr));
        comboBoxPlane->setItemText(0, QCoreApplication::translate("MirrorFeatureDialog", "XOY", nullptr));
        comboBoxPlane->setItemText(1, QCoreApplication::translate("MirrorFeatureDialog", "XOZ", nullptr));
        comboBoxPlane->setItemText(2, QCoreApplication::translate("MirrorFeatureDialog", "YOZ", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MirrorFeatureDialog", "Tab 2", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MirrorFeatureDialog", "Basic Point", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MirrorFeatureDialog", "Axis", nullptr));
        radioButtonX->setText(QCoreApplication::translate("MirrorFeatureDialog", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("MirrorFeatureDialog", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("MirrorFeatureDialog", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("MirrorFeatureDialog", "User define", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MirrorFeatureDialog", "Tab 3", nullptr));
        checkBoxSaveOrigin->setText(QCoreApplication::translate("MirrorFeatureDialog", "Save Origin body", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MirrorFeatureDialog: public Ui_MirrorFeatureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMIRRORFEATURE_H
