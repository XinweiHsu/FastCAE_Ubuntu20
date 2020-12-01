/********************************************************************************
** Form generated from reading UI file 'streamlinefilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STREAMLINEFILTERPROPFORM_H
#define UI_STREAMLINEFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_streamLineFilterPropForm
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout_4;
    QLabel *label_8;
    QComboBox *vector_comboBox;
    QLabel *label_16;
    QComboBox *interpolatorType_comboBox;
    QCheckBox *surfaceLines_checkBox;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QComboBox *Inte_Direction;
    QLabel *label_2;
    QComboBox *inte_Type;
    QLabel *label_3;
    QComboBox *inte_StepUnit;
    QLabel *label_10;
    QLineEdit *inte_InitStepLen;
    QLabel *label_4;
    QLineEdit *inte_MiniStepLen;
    QLabel *label_5;
    QLineEdit *inte_MaxiStepLen;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_3;
    QLabel *label_11;
    QLineEdit *stream_MaxiSteps;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout;
    QSlider *stream_MaxiLen_horizontalSlider;
    QLineEdit *stream_MaxiLen_lineEdit;
    QLabel *label_12;
    QLineEdit *stream_TerminalSpeed;
    QLabel *label_13;
    QLineEdit *stream_MaxiError;
    QCheckBox *vorticity_checkBox;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_2;
    QLabel *label_7;
    QComboBox *seeds_Type;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *seedP1_lineEdit;
    QLineEdit *seedP2_lineEdit;
    QLineEdit *seedP3_lineEdit;
    QLabel *label_14;
    QSpinBox *seedPoints_spinBox;
    QLabel *label_15;
    QLineEdit *seedRadius_lineEdit;
    QCheckBox *reflection_checkBox;
    QGroupBox *reflection_groupBox;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_17;
    QComboBox *reflection_comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *streamLineFilterPropForm)
    {
        if (streamLineFilterPropForm->objectName().isEmpty())
            streamLineFilterPropForm->setObjectName(QString::fromUtf8("streamLineFilterPropForm"));
        streamLineFilterPropForm->resize(380, 665);
        verticalLayout = new QVBoxLayout(streamLineFilterPropForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_8 = new QLabel(streamLineFilterPropForm);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_4->addWidget(label_8, 0, 0, 1, 1);

        vector_comboBox = new QComboBox(streamLineFilterPropForm);
        vector_comboBox->setObjectName(QString::fromUtf8("vector_comboBox"));

        gridLayout_4->addWidget(vector_comboBox, 0, 1, 1, 1);

        label_16 = new QLabel(streamLineFilterPropForm);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_4->addWidget(label_16, 1, 0, 1, 1);

        interpolatorType_comboBox = new QComboBox(streamLineFilterPropForm);
        interpolatorType_comboBox->addItem(QString());
        interpolatorType_comboBox->addItem(QString());
        interpolatorType_comboBox->setObjectName(QString::fromUtf8("interpolatorType_comboBox"));

        gridLayout_4->addWidget(interpolatorType_comboBox, 1, 1, 1, 1);


        verticalLayout->addLayout(gridLayout_4);

        surfaceLines_checkBox = new QCheckBox(streamLineFilterPropForm);
        surfaceLines_checkBox->setObjectName(QString::fromUtf8("surfaceLines_checkBox"));

        verticalLayout->addWidget(surfaceLines_checkBox);

        groupBox = new QGroupBox(streamLineFilterPropForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        Inte_Direction = new QComboBox(groupBox);
        Inte_Direction->addItem(QString());
        Inte_Direction->addItem(QString());
        Inte_Direction->addItem(QString());
        Inte_Direction->setObjectName(QString::fromUtf8("Inte_Direction"));

        gridLayout->addWidget(Inte_Direction, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        inte_Type = new QComboBox(groupBox);
        inte_Type->addItem(QString());
        inte_Type->addItem(QString());
        inte_Type->addItem(QString());
        inte_Type->setObjectName(QString::fromUtf8("inte_Type"));

        gridLayout->addWidget(inte_Type, 1, 1, 1, 1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        inte_StepUnit = new QComboBox(groupBox);
        inte_StepUnit->addItem(QString());
        inte_StepUnit->addItem(QString());
        inte_StepUnit->setObjectName(QString::fromUtf8("inte_StepUnit"));

        gridLayout->addWidget(inte_StepUnit, 2, 1, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 3, 0, 1, 1);

        inte_InitStepLen = new QLineEdit(groupBox);
        inte_InitStepLen->setObjectName(QString::fromUtf8("inte_InitStepLen"));
        inte_InitStepLen->setReadOnly(true);

        gridLayout->addWidget(inte_InitStepLen, 3, 1, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        inte_MiniStepLen = new QLineEdit(groupBox);
        inte_MiniStepLen->setObjectName(QString::fromUtf8("inte_MiniStepLen"));
        inte_MiniStepLen->setReadOnly(true);

        gridLayout->addWidget(inte_MiniStepLen, 4, 1, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        inte_MaxiStepLen = new QLineEdit(groupBox);
        inte_MaxiStepLen->setObjectName(QString::fromUtf8("inte_MaxiStepLen"));
        inte_MaxiStepLen->setReadOnly(true);

        gridLayout->addWidget(inte_MaxiStepLen, 5, 1, 1, 1);


        verticalLayout->addWidget(groupBox);

        groupBox_3 = new QGroupBox(streamLineFilterPropForm);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_3 = new QGridLayout(groupBox_3);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 0, 0, 1, 1);

        stream_MaxiSteps = new QLineEdit(groupBox_3);
        stream_MaxiSteps->setObjectName(QString::fromUtf8("stream_MaxiSteps"));
        stream_MaxiSteps->setReadOnly(true);

        gridLayout_3->addWidget(stream_MaxiSteps, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        stream_MaxiLen_horizontalSlider = new QSlider(groupBox_3);
        stream_MaxiLen_horizontalSlider->setObjectName(QString::fromUtf8("stream_MaxiLen_horizontalSlider"));
        stream_MaxiLen_horizontalSlider->setMaximum(100);
        stream_MaxiLen_horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(stream_MaxiLen_horizontalSlider);

        stream_MaxiLen_lineEdit = new QLineEdit(groupBox_3);
        stream_MaxiLen_lineEdit->setObjectName(QString::fromUtf8("stream_MaxiLen_lineEdit"));
        stream_MaxiLen_lineEdit->setReadOnly(true);

        horizontalLayout->addWidget(stream_MaxiLen_lineEdit);


        gridLayout_3->addLayout(horizontalLayout, 1, 1, 1, 1);

        label_12 = new QLabel(groupBox_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 2, 0, 1, 1);

        stream_TerminalSpeed = new QLineEdit(groupBox_3);
        stream_TerminalSpeed->setObjectName(QString::fromUtf8("stream_TerminalSpeed"));
        stream_TerminalSpeed->setReadOnly(true);

        gridLayout_3->addWidget(stream_TerminalSpeed, 2, 1, 1, 1);

        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 3, 0, 1, 1);

        stream_MaxiError = new QLineEdit(groupBox_3);
        stream_MaxiError->setObjectName(QString::fromUtf8("stream_MaxiError"));
        stream_MaxiError->setReadOnly(true);

        gridLayout_3->addWidget(stream_MaxiError, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_3);

        vorticity_checkBox = new QCheckBox(streamLineFilterPropForm);
        vorticity_checkBox->setObjectName(QString::fromUtf8("vorticity_checkBox"));

        verticalLayout->addWidget(vorticity_checkBox);

        groupBox_2 = new QGroupBox(streamLineFilterPropForm);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_2 = new QGridLayout(groupBox_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 0, 0, 1, 1);

        seeds_Type = new QComboBox(groupBox_2);
        seeds_Type->addItem(QString());
        seeds_Type->addItem(QString());
        seeds_Type->setObjectName(QString::fromUtf8("seeds_Type"));

        gridLayout_2->addWidget(seeds_Type, 0, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        seedP1_lineEdit = new QLineEdit(groupBox_2);
        seedP1_lineEdit->setObjectName(QString::fromUtf8("seedP1_lineEdit"));

        horizontalLayout_3->addWidget(seedP1_lineEdit);

        seedP2_lineEdit = new QLineEdit(groupBox_2);
        seedP2_lineEdit->setObjectName(QString::fromUtf8("seedP2_lineEdit"));

        horizontalLayout_3->addWidget(seedP2_lineEdit);

        seedP3_lineEdit = new QLineEdit(groupBox_2);
        seedP3_lineEdit->setObjectName(QString::fromUtf8("seedP3_lineEdit"));

        horizontalLayout_3->addWidget(seedP3_lineEdit);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 2, 0, 1, 1);

        seedPoints_spinBox = new QSpinBox(groupBox_2);
        seedPoints_spinBox->setObjectName(QString::fromUtf8("seedPoints_spinBox"));
        seedPoints_spinBox->setMaximum(10000);

        gridLayout_2->addWidget(seedPoints_spinBox, 2, 1, 1, 1);

        label_15 = new QLabel(groupBox_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 3, 0, 1, 1);

        seedRadius_lineEdit = new QLineEdit(groupBox_2);
        seedRadius_lineEdit->setObjectName(QString::fromUtf8("seedRadius_lineEdit"));

        gridLayout_2->addWidget(seedRadius_lineEdit, 3, 1, 1, 1);


        verticalLayout->addWidget(groupBox_2);

        reflection_checkBox = new QCheckBox(streamLineFilterPropForm);
        reflection_checkBox->setObjectName(QString::fromUtf8("reflection_checkBox"));

        verticalLayout->addWidget(reflection_checkBox);

        reflection_groupBox = new QGroupBox(streamLineFilterPropForm);
        reflection_groupBox->setObjectName(QString::fromUtf8("reflection_groupBox"));
        horizontalLayout_2 = new QHBoxLayout(reflection_groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_17 = new QLabel(reflection_groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_2->addWidget(label_17);

        reflection_comboBox = new QComboBox(reflection_groupBox);
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->addItem(QString());
        reflection_comboBox->setObjectName(QString::fromUtf8("reflection_comboBox"));

        horizontalLayout_2->addWidget(reflection_comboBox);


        verticalLayout->addWidget(reflection_groupBox);

        verticalSpacer = new QSpacerItem(20, 73, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(streamLineFilterPropForm);

        QMetaObject::connectSlotsByName(streamLineFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *streamLineFilterPropForm)
    {
        streamLineFilterPropForm->setWindowTitle(QCoreApplication::translate("streamLineFilterPropForm", "Streamline Property", nullptr));
        label_8->setText(QCoreApplication::translate("streamLineFilterPropForm", "vectors", nullptr));
        label_16->setText(QCoreApplication::translate("streamLineFilterPropForm", "Interpolator Type", nullptr));
        interpolatorType_comboBox->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "Interpolator with Point Locator", nullptr));
        interpolatorType_comboBox->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "Interpolator with Cell Locator", nullptr));

        surfaceLines_checkBox->setText(QCoreApplication::translate("streamLineFilterPropForm", "Surface Streamlines", nullptr));
        groupBox->setTitle(QCoreApplication::translate("streamLineFilterPropForm", "Integration Parameters", nullptr));
        label->setText(QCoreApplication::translate("streamLineFilterPropForm", "Integration Direction", nullptr));
        Inte_Direction->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "FORWARD", nullptr));
        Inte_Direction->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "BACKWARD", nullptr));
        Inte_Direction->setItemText(2, QCoreApplication::translate("streamLineFilterPropForm", "BOTH", nullptr));

        label_2->setText(QCoreApplication::translate("streamLineFilterPropForm", "Integrator Type", nullptr));
        inte_Type->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "Runge-Kutta 2", nullptr));
        inte_Type->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "Runge-Kutta 4", nullptr));
        inte_Type->setItemText(2, QCoreApplication::translate("streamLineFilterPropForm", "Runge-Kutta 4-5", nullptr));

        label_3->setText(QCoreApplication::translate("streamLineFilterPropForm", "Integration Step Unit", nullptr));
        inte_StepUnit->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "Length", nullptr));
        inte_StepUnit->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "Cell Length", nullptr));

        label_10->setText(QCoreApplication::translate("streamLineFilterPropForm", "Initial Step Length", nullptr));
        label_4->setText(QCoreApplication::translate("streamLineFilterPropForm", "Minimum Step Length", nullptr));
        label_5->setText(QCoreApplication::translate("streamLineFilterPropForm", "Maximum Step Length", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("streamLineFilterPropForm", "Streamline Parameters", nullptr));
        label_11->setText(QCoreApplication::translate("streamLineFilterPropForm", "Maximum Steps", nullptr));
        label_6->setText(QCoreApplication::translate("streamLineFilterPropForm", "Maximum Streamline Length", nullptr));
        label_12->setText(QCoreApplication::translate("streamLineFilterPropForm", "Terminal Speed", nullptr));
        label_13->setText(QCoreApplication::translate("streamLineFilterPropForm", "Maximum Error", nullptr));
        vorticity_checkBox->setText(QCoreApplication::translate("streamLineFilterPropForm", "Compute Vorticity", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("streamLineFilterPropForm", "Seeds", nullptr));
        label_7->setText(QCoreApplication::translate("streamLineFilterPropForm", "Seed Types", nullptr));
        seeds_Type->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "Point Source", nullptr));
        seeds_Type->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "High Resolution Line Source", nullptr));

        label_9->setText(QCoreApplication::translate("streamLineFilterPropForm", "Point", nullptr));
        label_14->setText(QCoreApplication::translate("streamLineFilterPropForm", "Number of Points", nullptr));
        label_15->setText(QCoreApplication::translate("streamLineFilterPropForm", "Radius", nullptr));
        reflection_checkBox->setText(QCoreApplication::translate("streamLineFilterPropForm", "Reflection", nullptr));
        reflection_groupBox->setTitle(QCoreApplication::translate("streamLineFilterPropForm", "reflection", nullptr));
        label_17->setText(QCoreApplication::translate("streamLineFilterPropForm", "reflection:", nullptr));
        reflection_comboBox->setItemText(0, QCoreApplication::translate("streamLineFilterPropForm", "X_MIN", nullptr));
        reflection_comboBox->setItemText(1, QCoreApplication::translate("streamLineFilterPropForm", "Y_MIN", nullptr));
        reflection_comboBox->setItemText(2, QCoreApplication::translate("streamLineFilterPropForm", "Z_MIN", nullptr));
        reflection_comboBox->setItemText(3, QCoreApplication::translate("streamLineFilterPropForm", "X_MAX", nullptr));
        reflection_comboBox->setItemText(4, QCoreApplication::translate("streamLineFilterPropForm", "Y_MAX", nullptr));
        reflection_comboBox->setItemText(5, QCoreApplication::translate("streamLineFilterPropForm", "Z_MAX", nullptr));
        reflection_comboBox->setItemText(6, QCoreApplication::translate("streamLineFilterPropForm", "X", nullptr));
        reflection_comboBox->setItemText(7, QCoreApplication::translate("streamLineFilterPropForm", "Y", nullptr));
        reflection_comboBox->setItemText(8, QCoreApplication::translate("streamLineFilterPropForm", "Z", nullptr));

    } // retranslateUi

};

namespace Ui {
    class streamLineFilterPropForm: public Ui_streamLineFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STREAMLINEFILTERPROPFORM_H
