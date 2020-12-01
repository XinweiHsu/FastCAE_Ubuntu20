/********************************************************************************
** Form generated from reading UI file 'DialogVTKTransform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGVTKTRANSFORM_H
#define UI_DIALOGVTKTRANSFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_DialogVTKTransform
{
public:
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QListWidget *listWidget;
    QPushButton *geoSelectPoint;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QLabel *rotateAngleLabel;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioButtonX;
    QRadioButton *radioButtonY;
    QRadioButton *radioButtonZ;
    QRadioButton *radioButtonC;
    QLabel *rotateAxisLabel;
    QGroupBox *customRotAxisGBox;
    QGridLayout *gridLayout;
    QLabel *customXLabel;
    QSpinBox *customXDSB;
    QLabel *customYLabel;
    QSpinBox *customYDSB;
    QLabel *customZLabel;
    QSpinBox *customZDSB;
    QDoubleSpinBox *rotateAngleDSB;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QLabel *directionXLabel;
    QDoubleSpinBox *directionXDSB;
    QLabel *directionYLabel;
    QDoubleSpinBox *directionYDSB;
    QLabel *directionZLabel;
    QDoubleSpinBox *directionZDSB;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QLabel *scaleXLabel;
    QDoubleSpinBox *scaleXDSB;
    QLabel *scaleYLabel;
    QDoubleSpinBox *scaleYDSB;
    QLabel *scaleZLabel;
    QDoubleSpinBox *scaleZDSB;
    QDialogButtonBox *btBox;

    void setupUi(QDialog *DialogVTKTransform)
    {
        if (DialogVTKTransform->objectName().isEmpty())
            DialogVTKTransform->setObjectName(QString::fromUtf8("DialogVTKTransform"));
        DialogVTKTransform->resize(375, 664);
        DialogVTKTransform->setMinimumSize(QSize(375, 664));
        DialogVTKTransform->setMaximumSize(QSize(375, 752));
        gridLayout_6 = new QGridLayout(DialogVTKTransform);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_4 = new QGroupBox(DialogVTKTransform);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setMinimumSize(QSize(357, 0));
        groupBox_4->setMaximumSize(QSize(357, 200));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        listWidget = new QListWidget(groupBox_4);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(299, 32));
        listWidget->setMaximumSize(QSize(299, 500));

        gridLayout_5->addWidget(listWidget, 0, 0, 2, 1);

        geoSelectPoint = new QPushButton(groupBox_4);
        geoSelectPoint->setObjectName(QString::fromUtf8("geoSelectPoint"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(geoSelectPoint->sizePolicy().hasHeightForWidth());
        geoSelectPoint->setSizePolicy(sizePolicy);
        geoSelectPoint->setMinimumSize(QSize(32, 32));
        geoSelectPoint->setMaximumSize(QSize(32, 32));
        geoSelectPoint->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/QUI/geometry/selectface.png"), QSize(), QIcon::Normal, QIcon::Off);
        geoSelectPoint->setIcon(icon);
        geoSelectPoint->setIconSize(QSize(32, 32));

        gridLayout_5->addWidget(geoSelectPoint, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 1, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_4, 0, 0, 1, 1);

        groupBox = new QGroupBox(DialogVTKTransform);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(357, 252));
        groupBox->setMaximumSize(QSize(357, 252));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        rotateAngleLabel = new QLabel(groupBox);
        rotateAngleLabel->setObjectName(QString::fromUtf8("rotateAngleLabel"));
        rotateAngleLabel->setMinimumSize(QSize(91, 25));
        rotateAngleLabel->setMaximumSize(QSize(91, 25));

        gridLayout_2->addWidget(rotateAngleLabel, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(65, 25, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioButtonX = new QRadioButton(groupBox);
        radioButtonX->setObjectName(QString::fromUtf8("radioButtonX"));
        radioButtonX->setMinimumSize(QSize(59, 25));
        radioButtonX->setMaximumSize(QSize(59, 25));

        horizontalLayout->addWidget(radioButtonX);

        radioButtonY = new QRadioButton(groupBox);
        radioButtonY->setObjectName(QString::fromUtf8("radioButtonY"));
        radioButtonY->setMinimumSize(QSize(59, 25));
        radioButtonY->setMaximumSize(QSize(59, 25));

        horizontalLayout->addWidget(radioButtonY);

        radioButtonZ = new QRadioButton(groupBox);
        radioButtonZ->setObjectName(QString::fromUtf8("radioButtonZ"));
        radioButtonZ->setMinimumSize(QSize(59, 25));
        radioButtonZ->setMaximumSize(QSize(59, 25));
        radioButtonZ->setChecked(true);

        horizontalLayout->addWidget(radioButtonZ);

        radioButtonC = new QRadioButton(groupBox);
        radioButtonC->setObjectName(QString::fromUtf8("radioButtonC"));
        radioButtonC->setMinimumSize(QSize(89, 25));
        radioButtonC->setMaximumSize(QSize(89, 25));
        radioButtonC->setChecked(false);

        horizontalLayout->addWidget(radioButtonC);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 2);

        rotateAxisLabel = new QLabel(groupBox);
        rotateAxisLabel->setObjectName(QString::fromUtf8("rotateAxisLabel"));
        rotateAxisLabel->setMinimumSize(QSize(16, 25));
        rotateAxisLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_2->addWidget(rotateAxisLabel, 1, 0, 1, 1);

        customRotAxisGBox = new QGroupBox(groupBox);
        customRotAxisGBox->setObjectName(QString::fromUtf8("customRotAxisGBox"));
        customRotAxisGBox->setMinimumSize(QSize(337, 125));
        customRotAxisGBox->setMaximumSize(QSize(337, 125));
        gridLayout = new QGridLayout(customRotAxisGBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        customXLabel = new QLabel(customRotAxisGBox);
        customXLabel->setObjectName(QString::fromUtf8("customXLabel"));
        customXLabel->setMinimumSize(QSize(96, 25));
        customXLabel->setMaximumSize(QSize(96, 25));

        gridLayout->addWidget(customXLabel, 0, 0, 1, 1);

        customXDSB = new QSpinBox(customRotAxisGBox);
        customXDSB->setObjectName(QString::fromUtf8("customXDSB"));
        customXDSB->setMinimumSize(QSize(212, 25));
        customXDSB->setMaximumSize(QSize(212, 25));
        customXDSB->setMaximum(1000);

        gridLayout->addWidget(customXDSB, 0, 1, 1, 1);

        customYLabel = new QLabel(customRotAxisGBox);
        customYLabel->setObjectName(QString::fromUtf8("customYLabel"));
        customYLabel->setMinimumSize(QSize(96, 25));
        customYLabel->setMaximumSize(QSize(96, 25));

        gridLayout->addWidget(customYLabel, 1, 0, 1, 1);

        customYDSB = new QSpinBox(customRotAxisGBox);
        customYDSB->setObjectName(QString::fromUtf8("customYDSB"));
        customYDSB->setMinimumSize(QSize(212, 25));
        customYDSB->setMaximumSize(QSize(212, 25));
        customYDSB->setMaximum(1000);

        gridLayout->addWidget(customYDSB, 1, 1, 1, 1);

        customZLabel = new QLabel(customRotAxisGBox);
        customZLabel->setObjectName(QString::fromUtf8("customZLabel"));
        customZLabel->setMinimumSize(QSize(96, 25));
        customZLabel->setMaximumSize(QSize(96, 25));

        gridLayout->addWidget(customZLabel, 2, 0, 1, 1);

        customZDSB = new QSpinBox(customRotAxisGBox);
        customZDSB->setObjectName(QString::fromUtf8("customZDSB"));
        customZDSB->setMinimumSize(QSize(212, 25));
        customZDSB->setMaximumSize(QSize(212, 25));
        customZDSB->setMaximum(1000);

        gridLayout->addWidget(customZDSB, 2, 1, 1, 1);


        gridLayout_2->addWidget(customRotAxisGBox, 3, 0, 1, 2);

        rotateAngleDSB = new QDoubleSpinBox(groupBox);
        rotateAngleDSB->setObjectName(QString::fromUtf8("rotateAngleDSB"));
        rotateAngleDSB->setMinimumSize(QSize(238, 25));
        rotateAngleDSB->setMaximumSize(QSize(238, 25));
        rotateAngleDSB->setMinimum(-360.000000000000000);
        rotateAngleDSB->setMaximum(360.000000000000000);

        gridLayout_2->addWidget(rotateAngleDSB, 0, 1, 1, 1);


        gridLayout_6->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(DialogVTKTransform);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(357, 125));
        groupBox_2->setMaximumSize(QSize(357, 125));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        directionXLabel = new QLabel(groupBox_2);
        directionXLabel->setObjectName(QString::fromUtf8("directionXLabel"));
        directionXLabel->setMinimumSize(QSize(132, 25));
        directionXLabel->setMaximumSize(QSize(132, 25));

        gridLayout_3->addWidget(directionXLabel, 0, 0, 1, 1);

        directionXDSB = new QDoubleSpinBox(groupBox_2);
        directionXDSB->setObjectName(QString::fromUtf8("directionXDSB"));
        directionXDSB->setMinimumSize(QSize(196, 25));
        directionXDSB->setMaximumSize(QSize(196, 25));
        directionXDSB->setMaximum(10000000000000000139372116959414099130712064.000000000000000);

        gridLayout_3->addWidget(directionXDSB, 0, 1, 1, 1);

        directionYLabel = new QLabel(groupBox_2);
        directionYLabel->setObjectName(QString::fromUtf8("directionYLabel"));
        directionYLabel->setMinimumSize(QSize(132, 25));
        directionYLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_3->addWidget(directionYLabel, 1, 0, 1, 1);

        directionYDSB = new QDoubleSpinBox(groupBox_2);
        directionYDSB->setObjectName(QString::fromUtf8("directionYDSB"));
        directionYDSB->setMinimumSize(QSize(196, 25));
        directionYDSB->setMaximumSize(QSize(16777215, 25));
        directionYDSB->setMaximum(10000000000000000139372116959414099130712064.000000000000000);

        gridLayout_3->addWidget(directionYDSB, 1, 1, 1, 1);

        directionZLabel = new QLabel(groupBox_2);
        directionZLabel->setObjectName(QString::fromUtf8("directionZLabel"));
        directionZLabel->setMinimumSize(QSize(132, 25));
        directionZLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_3->addWidget(directionZLabel, 2, 0, 1, 1);

        directionZDSB = new QDoubleSpinBox(groupBox_2);
        directionZDSB->setObjectName(QString::fromUtf8("directionZDSB"));
        directionZDSB->setMinimumSize(QSize(196, 25));
        directionZDSB->setMaximumSize(QSize(16777215, 25));
        directionZDSB->setMaximum(1000.000000000000000);

        gridLayout_3->addWidget(directionZDSB, 2, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_3 = new QGroupBox(DialogVTKTransform);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setMinimumSize(QSize(357, 110));
        groupBox_3->setMaximumSize(QSize(357, 110));
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        scaleXLabel = new QLabel(groupBox_3);
        scaleXLabel->setObjectName(QString::fromUtf8("scaleXLabel"));
        scaleXLabel->setMinimumSize(QSize(108, 25));
        scaleXLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_4->addWidget(scaleXLabel, 0, 0, 1, 1);

        scaleXDSB = new QDoubleSpinBox(groupBox_3);
        scaleXDSB->setObjectName(QString::fromUtf8("scaleXDSB"));
        scaleXDSB->setMinimumSize(QSize(221, 25));
        scaleXDSB->setMaximumSize(QSize(16777215, 25));
        scaleXDSB->setMinimum(1.000000000000000);
        scaleXDSB->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(scaleXDSB, 0, 1, 1, 1);

        scaleYLabel = new QLabel(groupBox_3);
        scaleYLabel->setObjectName(QString::fromUtf8("scaleYLabel"));
        scaleYLabel->setMinimumSize(QSize(108, 25));
        scaleYLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_4->addWidget(scaleYLabel, 1, 0, 1, 1);

        scaleYDSB = new QDoubleSpinBox(groupBox_3);
        scaleYDSB->setObjectName(QString::fromUtf8("scaleYDSB"));
        scaleYDSB->setMinimumSize(QSize(221, 25));
        scaleYDSB->setMaximumSize(QSize(16777215, 25));
        scaleYDSB->setMinimum(1.000000000000000);
        scaleYDSB->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(scaleYDSB, 1, 1, 1, 1);

        scaleZLabel = new QLabel(groupBox_3);
        scaleZLabel->setObjectName(QString::fromUtf8("scaleZLabel"));
        scaleZLabel->setMinimumSize(QSize(108, 25));
        scaleZLabel->setMaximumSize(QSize(16777215, 25));

        gridLayout_4->addWidget(scaleZLabel, 2, 0, 1, 1);

        scaleZDSB = new QDoubleSpinBox(groupBox_3);
        scaleZDSB->setObjectName(QString::fromUtf8("scaleZDSB"));
        scaleZDSB->setMinimumSize(QSize(221, 25));
        scaleZDSB->setMaximumSize(QSize(16777215, 25));
        scaleZDSB->setMinimum(1.000000000000000);
        scaleZDSB->setMaximum(1000.000000000000000);

        gridLayout_4->addWidget(scaleZDSB, 2, 1, 1, 1);


        gridLayout_6->addWidget(groupBox_3, 3, 0, 1, 1);

        btBox = new QDialogButtonBox(DialogVTKTransform);
        btBox->setObjectName(QString::fromUtf8("btBox"));
        btBox->setOrientation(Qt::Horizontal);
        btBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout_6->addWidget(btBox, 4, 0, 1, 1);


        retranslateUi(DialogVTKTransform);
        QObject::connect(btBox, SIGNAL(accepted()), DialogVTKTransform, SLOT(accept()));
        QObject::connect(btBox, SIGNAL(rejected()), DialogVTKTransform, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogVTKTransform);
    } // setupUi

    void retranslateUi(QDialog *DialogVTKTransform)
    {
        DialogVTKTransform->setWindowTitle(QCoreApplication::translate("DialogVTKTransform", "Dialog", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("DialogVTKTransform", "Selected Component", nullptr));
#if QT_CONFIG(tooltip)
        geoSelectPoint->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        geoSelectPoint->setText(QString());
        groupBox->setTitle(QCoreApplication::translate("DialogVTKTransform", "Rotate", nullptr));
        rotateAngleLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Rotate Angle : ", nullptr));
        radioButtonX->setText(QCoreApplication::translate("DialogVTKTransform", "X Axis", nullptr));
        radioButtonY->setText(QCoreApplication::translate("DialogVTKTransform", "Y Axis", nullptr));
        radioButtonZ->setText(QCoreApplication::translate("DialogVTKTransform", "Z Axis", nullptr));
        radioButtonC->setText(QCoreApplication::translate("DialogVTKTransform", "Custom Axis", nullptr));
        rotateAxisLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Rotate Axis : ", nullptr));
        customRotAxisGBox->setTitle(QCoreApplication::translate("DialogVTKTransform", "Custom Rotate Axis", nullptr));
        customXLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Custom X Axis : ", nullptr));
        customYLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Custom Y Axis : ", nullptr));
        customZLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Custom Z Axis : ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DialogVTKTransform", "Move Location", nullptr));
        directionXLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Direction Of X Axis : ", nullptr));
        directionYLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Direction Of Y Axis : ", nullptr));
        directionZLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Direction Of Z Axis : ", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("DialogVTKTransform", "Scale", nullptr));
        scaleXLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Scale Of X Axis : ", nullptr));
        scaleYLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Scale Of Y Axis : ", nullptr));
        scaleZLabel->setText(QCoreApplication::translate("DialogVTKTransform", "Scale Of Z Axis : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogVTKTransform: public Ui_DialogVTKTransform {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGVTKTRANSFORM_H
