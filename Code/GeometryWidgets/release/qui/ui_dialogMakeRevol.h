/********************************************************************************
** Form generated from reading UI file 'dialogMakeRevol.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKEREVOL_H
#define UI_DIALOGMAKEREVOL_H

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
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CreateRevol
{
public:
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_7;
    QVBoxLayout *basicPointLayout;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_3;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEditDegree;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout;
    QPushButton *geoSelectCurve;
    QLabel *edgelabel;
    QCheckBox *solidCheckBox;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QComboBox *comboBoxOption;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QGridLayout *gridLayout_4;
    QLabel *edgelabel_2;
    QPushButton *geoSelectCurve_1;
    QWidget *tab_2;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_7;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonUser;
    QHBoxLayout *horizontalLayout_9;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QCheckBox *reversecheckBox;

    void setupUi(QDialog *CreateRevol)
    {
        if (CreateRevol->objectName().isEmpty())
            CreateRevol->setObjectName(QString::fromUtf8("CreateRevol"));
        CreateRevol->resize(412, 465);
        gridLayout_2 = new QGridLayout(CreateRevol);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(CreateRevol);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_7 = new QGridLayout(groupBox);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        basicPointLayout = new QVBoxLayout();
        basicPointLayout->setObjectName(QString::fromUtf8("basicPointLayout"));

        gridLayout_7->addLayout(basicPointLayout, 0, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_5 = new QGroupBox(CreateRevol);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_3 = new QGridLayout(groupBox_5);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(label_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEditDegree = new QLineEdit(groupBox_5);
        lineEditDegree->setObjectName(QString::fromUtf8("lineEditDegree"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditDegree->sizePolicy().hasHeightForWidth());
        lineEditDegree->setSizePolicy(sizePolicy2);

        horizontalLayout->addWidget(lineEditDegree);

        label_3 = new QLabel(groupBox_5);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);


        gridLayout_2->addWidget(groupBox_5, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(CreateRevol);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout = new QGridLayout(groupBox_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        geoSelectCurve = new QPushButton(groupBox_3);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));

        gridLayout->addWidget(geoSelectCurve, 0, 1, 1, 1);

        edgelabel = new QLabel(groupBox_3);
        edgelabel->setObjectName(QString::fromUtf8("edgelabel"));

        gridLayout->addWidget(edgelabel, 0, 0, 2, 1);

        edgelabel->raise();
        geoSelectCurve->raise();

        gridLayout_2->addWidget(groupBox_3, 0, 0, 1, 1);

        solidCheckBox = new QCheckBox(CreateRevol);
        solidCheckBox->setObjectName(QString::fromUtf8("solidCheckBox"));
        solidCheckBox->setLayoutDirection(Qt::LeftToRight);
        solidCheckBox->setChecked(true);

        gridLayout_2->addWidget(solidCheckBox, 5, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateRevol);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_2->addWidget(buttonBox, 6, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateRevol);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_5 = new QGridLayout(groupBox_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        comboBoxOption = new QComboBox(groupBox_2);
        comboBoxOption->addItem(QString());
        comboBoxOption->addItem(QString());
        comboBoxOption->setObjectName(QString::fromUtf8("comboBoxOption"));

        gridLayout_5->addWidget(comboBoxOption, 0, 1, 1, 1);

        tabWidget = new QTabWidget(groupBox_2);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        gridLayout_4 = new QGridLayout(tab_1);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        edgelabel_2 = new QLabel(tab_1);
        edgelabel_2->setObjectName(QString::fromUtf8("edgelabel_2"));

        gridLayout_4->addWidget(edgelabel_2, 0, 0, 1, 1);

        geoSelectCurve_1 = new QPushButton(tab_1);
        geoSelectCurve_1->setObjectName(QString::fromUtf8("geoSelectCurve_1"));
        geoSelectCurve_1->setMinimumSize(QSize(32, 32));
        geoSelectCurve_1->setMaximumSize(QSize(32, 32));
        geoSelectCurve_1->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));

        gridLayout_4->addWidget(geoSelectCurve_1, 0, 1, 1, 1);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        gridLayout_6 = new QGridLayout(tab_2);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        radioButtonX = new QRadioButton(tab_2);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_7->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(tab_2);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_7->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(tab_2);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_7->addWidget(radioButtonZ);


        verticalLayout_3->addLayout(horizontalLayout_7);


        gridLayout_6->addLayout(verticalLayout_3, 0, 0, 1, 1);

        radioButtonUser = new QRadioButton(tab_2);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_6->addWidget(radioButtonUser, 1, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        doubleSpinBoxX = new QDoubleSpinBox(tab_2);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(tab_2);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(tab_2);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_9->addWidget(doubleSpinBoxZ);


        gridLayout_6->addLayout(horizontalLayout_9, 2, 0, 1, 1);

        tabWidget->addTab(tab_2, QString());

        gridLayout_5->addWidget(tabWidget, 1, 0, 1, 2);

        reversecheckBox = new QCheckBox(groupBox_2);
        reversecheckBox->setObjectName(QString::fromUtf8("reversecheckBox"));

        gridLayout_5->addWidget(reversecheckBox, 2, 0, 1, 2);

        label->raise();
        comboBoxOption->raise();
        reversecheckBox->raise();
        tabWidget->raise();

        gridLayout_2->addWidget(groupBox_2, 3, 0, 1, 1);

        buttonBox->raise();
        solidCheckBox->raise();
        groupBox_5->raise();
        groupBox_3->raise();
        groupBox->raise();
        groupBox_2->raise();

        retranslateUi(CreateRevol);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateRevol, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateRevol, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CreateRevol);
    } // setupUi

    void retranslateUi(QDialog *CreateRevol)
    {
        CreateRevol->setWindowTitle(QCoreApplication::translate("CreateRevol", "Create Revol", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CreateRevol", "Basic Point", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("CreateRevol", "Degree", nullptr));
        label_2->setText(QCoreApplication::translate("CreateRevol", "Degree", nullptr));
        lineEditDegree->setText(QCoreApplication::translate("CreateRevol", "90.0", nullptr));
        label_3->setText(QCoreApplication::translate("CreateRevol", "deg", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CreateRevol", "Edge", nullptr));
        geoSelectCurve->setText(QString());
        edgelabel->setText(QCoreApplication::translate("CreateRevol", "Selected edge(0)", nullptr));
#if QT_CONFIG(tooltip)
        solidCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        solidCheckBox->setText(QCoreApplication::translate("CreateRevol", "Generate Solid", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("CreateRevol", "Direction", nullptr));
        label->setText(QCoreApplication::translate("CreateRevol", "Option", nullptr));
        comboBoxOption->setItemText(0, QCoreApplication::translate("CreateRevol", "Select On Geometry", nullptr));
        comboBoxOption->setItemText(1, QCoreApplication::translate("CreateRevol", "Coordinate", nullptr));

        edgelabel_2->setText(QCoreApplication::translate("CreateRevol", "Selected edge(0)", nullptr));
        geoSelectCurve_1->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("CreateRevol", "Tab 1", nullptr));
        radioButtonX->setText(QCoreApplication::translate("CreateRevol", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("CreateRevol", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("CreateRevol", "Z axis", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("CreateRevol", "User define", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("CreateRevol", "Tab 2", nullptr));
        reversecheckBox->setText(QCoreApplication::translate("CreateRevol", "Reverse", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateRevol: public Ui_CreateRevol {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKEREVOL_H
