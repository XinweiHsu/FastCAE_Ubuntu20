/********************************************************************************
** Form generated from reading UI file 'dialogMakeExtrusion.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMAKEEXTRUSION_H
#define UI_DIALOGMAKEEXTRUSION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
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

QT_BEGIN_NAMESPACE

class Ui_CreateExtrusion
{
public:
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *edglabel;
    QPushButton *geoSelectCurve;
    QDialogButtonBox *buttonBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QRadioButton *radioButtonUser;
    QHBoxLayout *horizontalLayout_5;
    QDoubleSpinBox *doubleSpinBoxX;
    QDoubleSpinBox *doubleSpinBoxY;
    QDoubleSpinBox *doubleSpinBoxZ;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QCheckBox *reversecheckBox;
    QCheckBox *solidCheckBox;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEditDistance;

    void setupUi(QDialog *CreateExtrusion)
    {
        if (CreateExtrusion->objectName().isEmpty())
            CreateExtrusion->setObjectName(QString::fromUtf8("CreateExtrusion"));
        CreateExtrusion->resize(431, 319);
        gridLayout_4 = new QGridLayout(CreateExtrusion);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(CreateExtrusion);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        edglabel = new QLabel(groupBox_3);
        edglabel->setObjectName(QString::fromUtf8("edglabel"));

        horizontalLayout->addWidget(edglabel);

        geoSelectCurve = new QPushButton(groupBox_3);
        geoSelectCurve->setObjectName(QString::fromUtf8("geoSelectCurve"));
        geoSelectCurve->setMinimumSize(QSize(32, 32));
        geoSelectCurve->setMaximumSize(QSize(32, 32));
        geoSelectCurve->setStyleSheet(QString::fromUtf8("background-image: url(:/QUI/geometry/selectwire.png);"));

        horizontalLayout->addWidget(geoSelectCurve);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(CreateExtrusion);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_4->addWidget(buttonBox, 5, 0, 1, 1);

        groupBox_2 = new QGroupBox(CreateExtrusion);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        radioButtonUser = new QRadioButton(groupBox_2);
        radioButtonUser->setObjectName(QString::fromUtf8("radioButtonUser"));

        gridLayout_2->addWidget(radioButtonUser, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        doubleSpinBoxX = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxX->setObjectName(QString::fromUtf8("doubleSpinBoxX"));
        doubleSpinBoxX->setMinimum(-1000.000000000000000);
        doubleSpinBoxX->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxX);

        doubleSpinBoxY = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxY->setObjectName(QString::fromUtf8("doubleSpinBoxY"));
        doubleSpinBoxY->setMinimum(-1000.000000000000000);
        doubleSpinBoxY->setMaximum(1000.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxY);

        doubleSpinBoxZ = new QDoubleSpinBox(groupBox_2);
        doubleSpinBoxZ->setObjectName(QString::fromUtf8("doubleSpinBoxZ"));
        doubleSpinBoxZ->setMinimum(-1000.000000000000000);
        doubleSpinBoxZ->setMaximum(1000.000000000000000);
        doubleSpinBoxZ->setValue(1.000000000000000);

        horizontalLayout_5->addWidget(doubleSpinBoxZ);


        gridLayout_2->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        radioButtonX = new QRadioButton(groupBox_2);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));

        horizontalLayout_4->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox_2);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));

        horizontalLayout_4->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox_2);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setChecked(true);

        horizontalLayout_4->addWidget(radioButtonZ);


        gridLayout_2->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        reversecheckBox = new QCheckBox(groupBox_2);
        reversecheckBox->setObjectName(QString::fromUtf8("reversecheckBox"));

        gridLayout_2->addWidget(reversecheckBox, 3, 0, 1, 1);

        radioButtonUser->raise();
        reversecheckBox->raise();

        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);

        solidCheckBox = new QCheckBox(CreateExtrusion);
        solidCheckBox->setObjectName(QString::fromUtf8("solidCheckBox"));
        solidCheckBox->setLayoutDirection(Qt::LeftToRight);
        solidCheckBox->setChecked(true);

        gridLayout_4->addWidget(solidCheckBox, 4, 0, 1, 1);

        groupBox_5 = new QGroupBox(CreateExtrusion);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy);
        groupBox_5->setMaximumSize(QSize(16777215, 16777215));
        gridLayout = new QGridLayout(groupBox_5);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox_5);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEditDistance = new QLineEdit(groupBox_5);
        lineEditDistance->setObjectName(QString::fromUtf8("lineEditDistance"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditDistance->sizePolicy().hasHeightForWidth());
        lineEditDistance->setSizePolicy(sizePolicy2);

        gridLayout->addWidget(lineEditDistance, 0, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_5, 1, 0, 1, 1);


        retranslateUi(CreateExtrusion);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateExtrusion, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateExtrusion, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateExtrusion);
    } // setupUi

    void retranslateUi(QDialog *CreateExtrusion)
    {
        CreateExtrusion->setWindowTitle(QCoreApplication::translate("CreateExtrusion", "Create Extrusion", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("CreateExtrusion", "Select", nullptr));
        edglabel->setText(QCoreApplication::translate("CreateExtrusion", "Selected edge(0)", nullptr));
        geoSelectCurve->setText(QString());
        groupBox_2->setTitle(QCoreApplication::translate("CreateExtrusion", "Direction", nullptr));
        radioButtonUser->setText(QCoreApplication::translate("CreateExtrusion", "User define", nullptr));
        radioButtonX->setText(QCoreApplication::translate("CreateExtrusion", "X axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("CreateExtrusion", "Y axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("CreateExtrusion", "Z axis", nullptr));
        reversecheckBox->setText(QCoreApplication::translate("CreateExtrusion", "Reverse", nullptr));
#if QT_CONFIG(tooltip)
        solidCheckBox->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        solidCheckBox->setText(QCoreApplication::translate("CreateExtrusion", "Generate Solid", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("CreateExtrusion", "Distance", nullptr));
        label_2->setText(QCoreApplication::translate("CreateExtrusion", "Distance", nullptr));
        lineEditDistance->setText(QCoreApplication::translate("CreateExtrusion", "10.00", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CreateExtrusion: public Ui_CreateExtrusion {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMAKEEXTRUSION_H
