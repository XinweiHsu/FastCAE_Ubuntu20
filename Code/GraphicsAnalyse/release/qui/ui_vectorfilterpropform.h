/********************************************************************************
** Form generated from reading UI file 'vectorfilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VECTORFILTERPROPFORM_H
#define UI_VECTORFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_vectorFilterPropForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *glyphType_comboBox;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QSpinBox *tipRes_spinBox;
    QLabel *label_3;
    QDoubleSpinBox *tipRad_doubleSpinBox;
    QLabel *label_4;
    QDoubleSpinBox *tipLen_doubleSpinBox;
    QLabel *label_5;
    QSpinBox *shaftRes_spinBox;
    QLabel *label_6;
    QDoubleSpinBox *shaftRad_doubleSpinBox;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_9;
    QSpinBox *numPoints_spinBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QComboBox *scalar_comboBox;
    QLabel *label_8;
    QComboBox *vector_comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *vectorFilterPropForm)
    {
        if (vectorFilterPropForm->objectName().isEmpty())
            vectorFilterPropForm->setObjectName(QString::fromUtf8("vectorFilterPropForm"));
        vectorFilterPropForm->resize(319, 395);
        verticalLayout_2 = new QVBoxLayout(vectorFilterPropForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(vectorFilterPropForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        glyphType_comboBox = new QComboBox(groupBox);
        glyphType_comboBox->addItem(QString());
        glyphType_comboBox->setObjectName(QString::fromUtf8("glyphType_comboBox"));

        horizontalLayout->addWidget(glyphType_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        tipRes_spinBox = new QSpinBox(groupBox);
        tipRes_spinBox->setObjectName(QString::fromUtf8("tipRes_spinBox"));
        tipRes_spinBox->setMinimum(1);
        tipRes_spinBox->setMaximum(128);
        tipRes_spinBox->setValue(6);

        gridLayout->addWidget(tipRes_spinBox, 0, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        tipRad_doubleSpinBox = new QDoubleSpinBox(groupBox);
        tipRad_doubleSpinBox->setObjectName(QString::fromUtf8("tipRad_doubleSpinBox"));
        tipRad_doubleSpinBox->setMaximum(10.000000000000000);
        tipRad_doubleSpinBox->setSingleStep(0.100000000000000);
        tipRad_doubleSpinBox->setValue(0.100000000000000);

        gridLayout->addWidget(tipRad_doubleSpinBox, 1, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        tipLen_doubleSpinBox = new QDoubleSpinBox(groupBox);
        tipLen_doubleSpinBox->setObjectName(QString::fromUtf8("tipLen_doubleSpinBox"));
        tipLen_doubleSpinBox->setMaximum(1.000000000000000);
        tipLen_doubleSpinBox->setSingleStep(0.010000000000000);
        tipLen_doubleSpinBox->setValue(0.010000000000000);

        gridLayout->addWidget(tipLen_doubleSpinBox, 2, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        shaftRes_spinBox = new QSpinBox(groupBox);
        shaftRes_spinBox->setObjectName(QString::fromUtf8("shaftRes_spinBox"));
        shaftRes_spinBox->setMinimum(1);
        shaftRes_spinBox->setMaximum(128);
        shaftRes_spinBox->setValue(6);

        gridLayout->addWidget(shaftRes_spinBox, 3, 1, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 4, 0, 1, 1);

        shaftRad_doubleSpinBox = new QDoubleSpinBox(groupBox);
        shaftRad_doubleSpinBox->setObjectName(QString::fromUtf8("shaftRad_doubleSpinBox"));
        shaftRad_doubleSpinBox->setMaximum(5.000000000000000);
        shaftRad_doubleSpinBox->setSingleStep(0.100000000000000);
        shaftRad_doubleSpinBox->setValue(0.100000000000000);

        gridLayout->addWidget(shaftRad_doubleSpinBox, 4, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addWidget(groupBox);

        groupBox_3 = new QGroupBox(vectorFilterPropForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_2->addWidget(label_9);

        numPoints_spinBox = new QSpinBox(groupBox_3);
        numPoints_spinBox->setObjectName(QString::fromUtf8("numPoints_spinBox"));
        numPoints_spinBox->setMaximum(20000);

        horizontalLayout_2->addWidget(numPoints_spinBox);


        verticalLayout_2->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(vectorFilterPropForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        scalar_comboBox = new QComboBox(groupBox_2);
        scalar_comboBox->setObjectName(QString::fromUtf8("scalar_comboBox"));

        gridLayout_2->addWidget(scalar_comboBox, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        vector_comboBox = new QComboBox(groupBox_2);
        vector_comboBox->setObjectName(QString::fromUtf8("vector_comboBox"));

        gridLayout_2->addWidget(vector_comboBox, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(vectorFilterPropForm);

        QMetaObject::connectSlotsByName(vectorFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *vectorFilterPropForm)
    {
        vectorFilterPropForm->setWindowTitle(QCoreApplication::translate("vectorFilterPropForm", "Vector Property", nullptr));
        groupBox->setTitle(QCoreApplication::translate("vectorFilterPropForm", "Glyph Source", nullptr));
        label->setText(QCoreApplication::translate("vectorFilterPropForm", "type", nullptr));
        glyphType_comboBox->setItemText(0, QCoreApplication::translate("vectorFilterPropForm", "Arrow", nullptr));

        label_2->setText(QCoreApplication::translate("vectorFilterPropForm", "Tip resolution", nullptr));
        label_3->setText(QCoreApplication::translate("vectorFilterPropForm", "Tip radius", nullptr));
        label_4->setText(QCoreApplication::translate("vectorFilterPropForm", "Tip length", nullptr));
        label_5->setText(QCoreApplication::translate("vectorFilterPropForm", "Shaft resolution", nullptr));
        label_6->setText(QCoreApplication::translate("vectorFilterPropForm", "Shaft radius", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("vectorFilterPropForm", "mask", nullptr));
        label_9->setText(QCoreApplication::translate("vectorFilterPropForm", "Maximum Number Of Sample Points ", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("vectorFilterPropForm", "Active Attribute", nullptr));
        label_7->setText(QCoreApplication::translate("vectorFilterPropForm", "scalars", nullptr));
        label_8->setText(QCoreApplication::translate("vectorFilterPropForm", "vectors", nullptr));
    } // retranslateUi

};

namespace Ui {
    class vectorFilterPropForm: public Ui_vectorFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VECTORFILTERPROPFORM_H
