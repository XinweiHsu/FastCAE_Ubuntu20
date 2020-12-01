/********************************************************************************
** Form generated from reading UI file 'pipelineobjpropwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIPELINEOBJPROPWIDGET_H
#define UI_PIPELINEOBJPROPWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PipelineObjPropWidget
{
public:
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *BtnAccept;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *BtnPropertiesButton;
    QWidget *pipelineObj_propWidget;
    QPushButton *BtnDisplayButton;
    QWidget *pipelineObj_GloPropwidget;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *m_cmb_Representation;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout;
    QComboBox *m_cmb_ColumnList;
    QComboBox *vectorColorXYZ_comboBox;
    QPushButton *scalarBar_showBtn;
    QPushButton *colorEdit_Btn;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_2;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_7;
    QSlider *m_sliderOpacity;
    QLineEdit *m_edt_Opacity;
    QLabel *label_6;
    QLineEdit *m_edt_PointSize;
    QLabel *label_7;
    QLineEdit *m_edt_linewidth;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_4;
    QLabel *label_9;
    QComboBox *m_cmb_interpolation;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout;
    QSlider *m_slider_specular;
    QLineEdit *m_edt_specular;
    QPushButton *btnspecularcolor;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_2;
    QSlider *m_silder_specularpower;
    QLineEdit *m_edt_specularpower;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_3;
    QSlider *m_slider_ambient;
    QLineEdit *m_edt_ambient;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_8;
    QSlider *m_slider_diffuse;
    QLineEdit *m_edt_diffuse;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *edgeColor_pushButton;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_3;
    QLabel *label_19;
    QLineEdit *m_edt_tranx;
    QLineEdit *m_edt_trany;
    QLineEdit *m_edt_tranz;
    QLabel *label_20;
    QLineEdit *m_edt_scalex;
    QLineEdit *m_edt_scaley;
    QLineEdit *m_edt_scalez;
    QLabel *label_21;
    QLineEdit *m_edt_orientx;
    QLineEdit *m_edt_orienty;
    QLineEdit *m_edt_orientz;
    QLabel *label_22;
    QLineEdit *m_edt_originx;
    QLineEdit *m_edt_originy;
    QLineEdit *m_edt_originz;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_7;
    QCheckBox *cubeAxes_checkBox;
    QPushButton *BtnViewButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *orient_checkBox;
    QCheckBox *camera_parallel_checkBox;
    QCheckBox *remark_checkBox;
    QGroupBox *remark_groupBox;
    QGridLayout *gridLayout_5;
    QLabel *fontColor_label;
    QPushButton *fontColor_pushButton;
    QLabel *label_2;
    QTextEdit *remark_textEdit;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_4;
    QComboBox *comboBox_backgroundType;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *color1_pushButton;
    QPushButton *color2_pushButton;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *PipelineObjPropWidget)
    {
        if (PipelineObjPropWidget->objectName().isEmpty())
            PipelineObjPropWidget->setObjectName(QString::fromUtf8("PipelineObjPropWidget"));
        PipelineObjPropWidget->resize(432, 776);
        verticalLayout_6 = new QVBoxLayout(PipelineObjPropWidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(PipelineObjPropWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -405, 413, 1179));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        BtnAccept = new QPushButton(scrollAreaWidgetContents);
        BtnAccept->setObjectName(QString::fromUtf8("BtnAccept"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/apply.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnAccept->setIcon(icon);

        horizontalLayout_4->addWidget(BtnAccept);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_4);

        BtnPropertiesButton = new QPushButton(scrollAreaWidgetContents);
        BtnPropertiesButton->setObjectName(QString::fromUtf8("BtnPropertiesButton"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/expand.png"), QSize(), QIcon::Normal, QIcon::Off);
        BtnPropertiesButton->setIcon(icon1);
        BtnPropertiesButton->setAutoDefault(false);
        BtnPropertiesButton->setFlat(false);

        verticalLayout_5->addWidget(BtnPropertiesButton);

        pipelineObj_propWidget = new QWidget(scrollAreaWidgetContents);
        pipelineObj_propWidget->setObjectName(QString::fromUtf8("pipelineObj_propWidget"));

        verticalLayout_5->addWidget(pipelineObj_propWidget);

        BtnDisplayButton = new QPushButton(scrollAreaWidgetContents);
        BtnDisplayButton->setObjectName(QString::fromUtf8("BtnDisplayButton"));
        BtnDisplayButton->setIcon(icon1);

        verticalLayout_5->addWidget(BtnDisplayButton);

        pipelineObj_GloPropwidget = new QWidget(scrollAreaWidgetContents);
        pipelineObj_GloPropwidget->setObjectName(QString::fromUtf8("pipelineObj_GloPropwidget"));
        verticalLayout_8 = new QVBoxLayout(pipelineObj_GloPropwidget);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(pipelineObj_GloPropwidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_6->addWidget(label);

        m_cmb_Representation = new QComboBox(pipelineObj_GloPropwidget);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/rep_point.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_cmb_Representation->addItem(icon2, QString());
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/rep_surface.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_cmb_Representation->addItem(icon3, QString());
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/rep_surfaceWithEdge.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_cmb_Representation->addItem(icon4, QString());
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/rep_wireFrame.png"), QSize(), QIcon::Normal, QIcon::Off);
        m_cmb_Representation->addItem(icon5, QString());
        m_cmb_Representation->setObjectName(QString::fromUtf8("m_cmb_Representation"));

        horizontalLayout_6->addWidget(m_cmb_Representation);


        verticalLayout_8->addLayout(horizontalLayout_6);

        groupBox_4 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout = new QGridLayout(groupBox_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        m_cmb_ColumnList = new QComboBox(groupBox_4);
        m_cmb_ColumnList->setObjectName(QString::fromUtf8("m_cmb_ColumnList"));

        gridLayout->addWidget(m_cmb_ColumnList, 0, 0, 1, 1);

        vectorColorXYZ_comboBox = new QComboBox(groupBox_4);
        vectorColorXYZ_comboBox->addItem(QString());
        vectorColorXYZ_comboBox->addItem(QString());
        vectorColorXYZ_comboBox->addItem(QString());
        vectorColorXYZ_comboBox->setObjectName(QString::fromUtf8("vectorColorXYZ_comboBox"));

        gridLayout->addWidget(vectorColorXYZ_comboBox, 0, 1, 1, 1);

        scalarBar_showBtn = new QPushButton(groupBox_4);
        scalarBar_showBtn->setObjectName(QString::fromUtf8("scalarBar_showBtn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/ScalarBar.png"), QSize(), QIcon::Normal, QIcon::Off);
        scalarBar_showBtn->setIcon(icon6);

        gridLayout->addWidget(scalarBar_showBtn, 1, 0, 1, 1);

        colorEdit_Btn = new QPushButton(groupBox_4);
        colorEdit_Btn->setObjectName(QString::fromUtf8("colorEdit_Btn"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/editColor.png"), QSize(), QIcon::Normal, QIcon::Off);
        colorEdit_Btn->setIcon(icon7);

        gridLayout->addWidget(colorEdit_Btn, 1, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_2 = new QGridLayout(groupBox_5);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_5 = new QLabel(groupBox_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        m_sliderOpacity = new QSlider(groupBox_5);
        m_sliderOpacity->setObjectName(QString::fromUtf8("m_sliderOpacity"));
        m_sliderOpacity->setMaximum(100);
        m_sliderOpacity->setTracking(false);
        m_sliderOpacity->setOrientation(Qt::Horizontal);

        horizontalLayout_7->addWidget(m_sliderOpacity);

        m_edt_Opacity = new QLineEdit(groupBox_5);
        m_edt_Opacity->setObjectName(QString::fromUtf8("m_edt_Opacity"));

        horizontalLayout_7->addWidget(m_edt_Opacity);


        gridLayout_2->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 1, 0, 1, 1);

        m_edt_PointSize = new QLineEdit(groupBox_5);
        m_edt_PointSize->setObjectName(QString::fromUtf8("m_edt_PointSize"));

        gridLayout_2->addWidget(m_edt_PointSize, 1, 1, 1, 1);

        label_7 = new QLabel(groupBox_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 2, 0, 1, 1);

        m_edt_linewidth = new QLineEdit(groupBox_5);
        m_edt_linewidth->setObjectName(QString::fromUtf8("m_edt_linewidth"));

        gridLayout_2->addWidget(m_edt_linewidth, 2, 1, 1, 1);


        verticalLayout_8->addWidget(groupBox_5);

        groupBox_7 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_3 = new QVBoxLayout(groupBox_7);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_9 = new QLabel(groupBox_7);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_4->addWidget(label_9, 0, 0, 1, 1);

        m_cmb_interpolation = new QComboBox(groupBox_7);
        m_cmb_interpolation->addItem(QString());
        m_cmb_interpolation->addItem(QString());
        m_cmb_interpolation->setObjectName(QString::fromUtf8("m_cmb_interpolation"));

        gridLayout_4->addWidget(m_cmb_interpolation, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_4->addWidget(label_10, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_slider_specular = new QSlider(groupBox_7);
        m_slider_specular->setObjectName(QString::fromUtf8("m_slider_specular"));
        m_slider_specular->setTracking(false);
        m_slider_specular->setOrientation(Qt::Horizontal);

        horizontalLayout->addWidget(m_slider_specular);

        m_edt_specular = new QLineEdit(groupBox_7);
        m_edt_specular->setObjectName(QString::fromUtf8("m_edt_specular"));

        horizontalLayout->addWidget(m_edt_specular);


        gridLayout_4->addLayout(horizontalLayout, 1, 1, 1, 1);

        btnspecularcolor = new QPushButton(groupBox_7);
        btnspecularcolor->setObjectName(QString::fromUtf8("btnspecularcolor"));

        gridLayout_4->addWidget(btnspecularcolor, 2, 0, 1, 1);

        label_11 = new QLabel(groupBox_7);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_4->addWidget(label_11, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        m_silder_specularpower = new QSlider(groupBox_7);
        m_silder_specularpower->setObjectName(QString::fromUtf8("m_silder_specularpower"));
        m_silder_specularpower->setTracking(false);
        m_silder_specularpower->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(m_silder_specularpower);

        m_edt_specularpower = new QLineEdit(groupBox_7);
        m_edt_specularpower->setObjectName(QString::fromUtf8("m_edt_specularpower"));

        horizontalLayout_2->addWidget(m_edt_specularpower);


        gridLayout_4->addLayout(horizontalLayout_2, 3, 1, 1, 1);

        label_12 = new QLabel(groupBox_7);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_4->addWidget(label_12, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        m_slider_ambient = new QSlider(groupBox_7);
        m_slider_ambient->setObjectName(QString::fromUtf8("m_slider_ambient"));
        m_slider_ambient->setTracking(false);
        m_slider_ambient->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(m_slider_ambient);

        m_edt_ambient = new QLineEdit(groupBox_7);
        m_edt_ambient->setObjectName(QString::fromUtf8("m_edt_ambient"));

        horizontalLayout_3->addWidget(m_edt_ambient);


        gridLayout_4->addLayout(horizontalLayout_3, 4, 1, 1, 1);

        label_13 = new QLabel(groupBox_7);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_4->addWidget(label_13, 5, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        m_slider_diffuse = new QSlider(groupBox_7);
        m_slider_diffuse->setObjectName(QString::fromUtf8("m_slider_diffuse"));
        m_slider_diffuse->setTracking(false);
        m_slider_diffuse->setOrientation(Qt::Horizontal);

        horizontalLayout_8->addWidget(m_slider_diffuse);

        m_edt_diffuse = new QLineEdit(groupBox_7);
        m_edt_diffuse->setObjectName(QString::fromUtf8("m_edt_diffuse"));

        horizontalLayout_8->addWidget(m_edt_diffuse);


        gridLayout_4->addLayout(horizontalLayout_8, 5, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout_4);


        verticalLayout_8->addWidget(groupBox_7);

        groupBox_3 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        edgeColor_pushButton = new QPushButton(groupBox_3);
        edgeColor_pushButton->setObjectName(QString::fromUtf8("edgeColor_pushButton"));

        verticalLayout_2->addWidget(edgeColor_pushButton);


        verticalLayout_8->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_3 = new QGridLayout(groupBox_6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_19 = new QLabel(groupBox_6);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        gridLayout_3->addWidget(label_19, 0, 0, 1, 1);

        m_edt_tranx = new QLineEdit(groupBox_6);
        m_edt_tranx->setObjectName(QString::fromUtf8("m_edt_tranx"));

        gridLayout_3->addWidget(m_edt_tranx, 0, 1, 1, 1);

        m_edt_trany = new QLineEdit(groupBox_6);
        m_edt_trany->setObjectName(QString::fromUtf8("m_edt_trany"));

        gridLayout_3->addWidget(m_edt_trany, 0, 2, 1, 1);

        m_edt_tranz = new QLineEdit(groupBox_6);
        m_edt_tranz->setObjectName(QString::fromUtf8("m_edt_tranz"));

        gridLayout_3->addWidget(m_edt_tranz, 0, 3, 1, 1);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_3->addWidget(label_20, 1, 0, 1, 1);

        m_edt_scalex = new QLineEdit(groupBox_6);
        m_edt_scalex->setObjectName(QString::fromUtf8("m_edt_scalex"));

        gridLayout_3->addWidget(m_edt_scalex, 1, 1, 1, 1);

        m_edt_scaley = new QLineEdit(groupBox_6);
        m_edt_scaley->setObjectName(QString::fromUtf8("m_edt_scaley"));

        gridLayout_3->addWidget(m_edt_scaley, 1, 2, 1, 1);

        m_edt_scalez = new QLineEdit(groupBox_6);
        m_edt_scalez->setObjectName(QString::fromUtf8("m_edt_scalez"));

        gridLayout_3->addWidget(m_edt_scalez, 1, 3, 1, 1);

        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        gridLayout_3->addWidget(label_21, 2, 0, 1, 1);

        m_edt_orientx = new QLineEdit(groupBox_6);
        m_edt_orientx->setObjectName(QString::fromUtf8("m_edt_orientx"));

        gridLayout_3->addWidget(m_edt_orientx, 2, 1, 1, 1);

        m_edt_orienty = new QLineEdit(groupBox_6);
        m_edt_orienty->setObjectName(QString::fromUtf8("m_edt_orienty"));

        gridLayout_3->addWidget(m_edt_orienty, 2, 2, 1, 1);

        m_edt_orientz = new QLineEdit(groupBox_6);
        m_edt_orientz->setObjectName(QString::fromUtf8("m_edt_orientz"));

        gridLayout_3->addWidget(m_edt_orientz, 2, 3, 1, 1);

        label_22 = new QLabel(groupBox_6);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 3, 0, 1, 1);

        m_edt_originx = new QLineEdit(groupBox_6);
        m_edt_originx->setObjectName(QString::fromUtf8("m_edt_originx"));

        gridLayout_3->addWidget(m_edt_originx, 3, 1, 1, 1);

        m_edt_originy = new QLineEdit(groupBox_6);
        m_edt_originy->setObjectName(QString::fromUtf8("m_edt_originy"));

        gridLayout_3->addWidget(m_edt_originy, 3, 2, 1, 1);

        m_edt_originz = new QLineEdit(groupBox_6);
        m_edt_originz->setObjectName(QString::fromUtf8("m_edt_originz"));

        gridLayout_3->addWidget(m_edt_originz, 3, 3, 1, 1);


        verticalLayout_8->addWidget(groupBox_6);

        groupBox_8 = new QGroupBox(pipelineObj_GloPropwidget);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_7 = new QVBoxLayout(groupBox_8);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        cubeAxes_checkBox = new QCheckBox(groupBox_8);
        cubeAxes_checkBox->setObjectName(QString::fromUtf8("cubeAxes_checkBox"));

        verticalLayout_7->addWidget(cubeAxes_checkBox);


        verticalLayout_8->addWidget(groupBox_8);


        verticalLayout_5->addWidget(pipelineObj_GloPropwidget);

        BtnViewButton = new QPushButton(scrollAreaWidgetContents);
        BtnViewButton->setObjectName(QString::fromUtf8("BtnViewButton"));
        BtnViewButton->setIcon(icon1);

        verticalLayout_5->addWidget(BtnViewButton);

        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        orient_checkBox = new QCheckBox(groupBox);
        orient_checkBox->setObjectName(QString::fromUtf8("orient_checkBox"));

        verticalLayout->addWidget(orient_checkBox);

        camera_parallel_checkBox = new QCheckBox(groupBox);
        camera_parallel_checkBox->setObjectName(QString::fromUtf8("camera_parallel_checkBox"));

        verticalLayout->addWidget(camera_parallel_checkBox);

        remark_checkBox = new QCheckBox(groupBox);
        remark_checkBox->setObjectName(QString::fromUtf8("remark_checkBox"));

        verticalLayout->addWidget(remark_checkBox);

        remark_groupBox = new QGroupBox(groupBox);
        remark_groupBox->setObjectName(QString::fromUtf8("remark_groupBox"));
        gridLayout_5 = new QGridLayout(remark_groupBox);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        fontColor_label = new QLabel(remark_groupBox);
        fontColor_label->setObjectName(QString::fromUtf8("fontColor_label"));

        gridLayout_5->addWidget(fontColor_label, 0, 0, 1, 1);

        fontColor_pushButton = new QPushButton(remark_groupBox);
        fontColor_pushButton->setObjectName(QString::fromUtf8("fontColor_pushButton"));

        gridLayout_5->addWidget(fontColor_pushButton, 0, 1, 1, 1);

        label_2 = new QLabel(remark_groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 1, 0, 1, 1);

        remark_textEdit = new QTextEdit(remark_groupBox);
        remark_textEdit->setObjectName(QString::fromUtf8("remark_textEdit"));

        gridLayout_5->addWidget(remark_textEdit, 1, 1, 1, 1);


        verticalLayout->addWidget(remark_groupBox);

        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_4 = new QVBoxLayout(groupBox_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        comboBox_backgroundType = new QComboBox(groupBox_2);
        comboBox_backgroundType->addItem(QString());
        comboBox_backgroundType->addItem(QString());
        comboBox_backgroundType->setObjectName(QString::fromUtf8("comboBox_backgroundType"));

        verticalLayout_4->addWidget(comboBox_backgroundType);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        color1_pushButton = new QPushButton(groupBox_2);
        color1_pushButton->setObjectName(QString::fromUtf8("color1_pushButton"));

        horizontalLayout_11->addWidget(color1_pushButton);

        color2_pushButton = new QPushButton(groupBox_2);
        color2_pushButton->setObjectName(QString::fromUtf8("color2_pushButton"));

        horizontalLayout_11->addWidget(color2_pushButton);


        verticalLayout_4->addLayout(horizontalLayout_11);


        verticalLayout->addWidget(groupBox_2);


        verticalLayout_5->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 150, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_6->addWidget(scrollArea);

        QWidget::setTabOrder(BtnViewButton, BtnAccept);
        QWidget::setTabOrder(BtnAccept, m_edt_originz);
        QWidget::setTabOrder(m_edt_originz, BtnPropertiesButton);
        QWidget::setTabOrder(BtnPropertiesButton, orient_checkBox);
        QWidget::setTabOrder(orient_checkBox, m_cmb_Representation);
        QWidget::setTabOrder(m_cmb_Representation, comboBox_backgroundType);
        QWidget::setTabOrder(comboBox_backgroundType, m_cmb_ColumnList);
        QWidget::setTabOrder(m_cmb_ColumnList, m_sliderOpacity);
        QWidget::setTabOrder(m_sliderOpacity, m_edt_Opacity);
        QWidget::setTabOrder(m_edt_Opacity, m_edt_PointSize);
        QWidget::setTabOrder(m_edt_PointSize, m_edt_linewidth);
        QWidget::setTabOrder(m_edt_linewidth, m_edt_tranz);
        QWidget::setTabOrder(m_edt_tranz, BtnDisplayButton);
        QWidget::setTabOrder(BtnDisplayButton, m_edt_trany);
        QWidget::setTabOrder(m_edt_trany, m_edt_originy);
        QWidget::setTabOrder(m_edt_originy, m_edt_orientz);
        QWidget::setTabOrder(m_edt_orientz, m_edt_tranx);
        QWidget::setTabOrder(m_edt_tranx, m_edt_originx);
        QWidget::setTabOrder(m_edt_originx, m_edt_orientx);
        QWidget::setTabOrder(m_edt_orientx, m_edt_orienty);
        QWidget::setTabOrder(m_edt_orienty, m_edt_scalez);
        QWidget::setTabOrder(m_edt_scalez, m_edt_scalex);
        QWidget::setTabOrder(m_edt_scalex, m_edt_scaley);
        QWidget::setTabOrder(m_edt_scaley, color1_pushButton);
        QWidget::setTabOrder(color1_pushButton, color2_pushButton);

        retranslateUi(PipelineObjPropWidget);

        BtnAccept->setDefault(true);
        BtnPropertiesButton->setDefault(false);


        QMetaObject::connectSlotsByName(PipelineObjPropWidget);
    } // setupUi

    void retranslateUi(QWidget *PipelineObjPropWidget)
    {
        PipelineObjPropWidget->setWindowTitle(QCoreApplication::translate("PipelineObjPropWidget", "Pipeline propeties", nullptr));
        BtnAccept->setText(QCoreApplication::translate("PipelineObjPropWidget", "&Apply", nullptr));
#if QT_CONFIG(shortcut)
        BtnAccept->setShortcut(QCoreApplication::translate("PipelineObjPropWidget", "Alt+A", nullptr));
#endif // QT_CONFIG(shortcut)
        BtnPropertiesButton->setText(QCoreApplication::translate("PipelineObjPropWidget", "Properties", nullptr));
        BtnDisplayButton->setText(QCoreApplication::translate("PipelineObjPropWidget", "Display", nullptr));
        label->setText(QCoreApplication::translate("PipelineObjPropWidget", "Representation", nullptr));
        m_cmb_Representation->setItemText(0, QCoreApplication::translate("PipelineObjPropWidget", "Points", nullptr));
        m_cmb_Representation->setItemText(1, QCoreApplication::translate("PipelineObjPropWidget", "Surface", nullptr));
        m_cmb_Representation->setItemText(2, QCoreApplication::translate("PipelineObjPropWidget", "Surface With Edges", nullptr));
        m_cmb_Representation->setItemText(3, QCoreApplication::translate("PipelineObjPropWidget", "Wireframe", nullptr));

        groupBox_4->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Coloring", nullptr));
        vectorColorXYZ_comboBox->setItemText(0, QCoreApplication::translate("PipelineObjPropWidget", "X", nullptr));
        vectorColorXYZ_comboBox->setItemText(1, QCoreApplication::translate("PipelineObjPropWidget", "Y", nullptr));
        vectorColorXYZ_comboBox->setItemText(2, QCoreApplication::translate("PipelineObjPropWidget", "Z", nullptr));

        scalarBar_showBtn->setText(QCoreApplication::translate("PipelineObjPropWidget", "show", nullptr));
        colorEdit_Btn->setText(QCoreApplication::translate("PipelineObjPropWidget", "Edit", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Styling", nullptr));
        label_5->setText(QCoreApplication::translate("PipelineObjPropWidget", "Opacity", nullptr));
        m_edt_Opacity->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        label_6->setText(QCoreApplication::translate("PipelineObjPropWidget", "Point Size", nullptr));
        m_edt_PointSize->setText(QCoreApplication::translate("PipelineObjPropWidget", "2", nullptr));
        label_7->setText(QCoreApplication::translate("PipelineObjPropWidget", "Line Width", nullptr));
        m_edt_linewidth->setText(QCoreApplication::translate("PipelineObjPropWidget", "1", nullptr));
        groupBox_7->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Lighting", nullptr));
        label_9->setText(QCoreApplication::translate("PipelineObjPropWidget", "Interpolation", nullptr));
        m_cmb_interpolation->setItemText(0, QCoreApplication::translate("PipelineObjPropWidget", "Flat", nullptr));
        m_cmb_interpolation->setItemText(1, QCoreApplication::translate("PipelineObjPropWidget", "Gouraud", nullptr));

        label_10->setText(QCoreApplication::translate("PipelineObjPropWidget", "Specular", nullptr));
        m_edt_specular->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        btnspecularcolor->setText(QCoreApplication::translate("PipelineObjPropWidget", "Specular Color", nullptr));
        label_11->setText(QCoreApplication::translate("PipelineObjPropWidget", "Specular Power", nullptr));
        m_edt_specularpower->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        label_12->setText(QCoreApplication::translate("PipelineObjPropWidget", "Ambient", nullptr));
        m_edt_ambient->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        label_13->setText(QCoreApplication::translate("PipelineObjPropWidget", "Diffuse", nullptr));
        m_edt_diffuse->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Edge Color", nullptr));
        edgeColor_pushButton->setText(QString());
        groupBox_6->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Transforming", nullptr));
        label_19->setText(QCoreApplication::translate("PipelineObjPropWidget", "Translation", nullptr));
        m_edt_tranx->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_trany->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_tranz->setText(QCoreApplication::translate("PipelineObjPropWidget", "1", nullptr));
        label_20->setText(QCoreApplication::translate("PipelineObjPropWidget", "Scale", nullptr));
        m_edt_scalex->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_scaley->setText(QCoreApplication::translate("PipelineObjPropWidget", "1", nullptr));
        m_edt_scalez->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        label_21->setText(QCoreApplication::translate("PipelineObjPropWidget", "Orientation", nullptr));
        m_edt_orientx->setText(QCoreApplication::translate("PipelineObjPropWidget", "1", nullptr));
        m_edt_orienty->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_orientz->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        label_22->setText(QCoreApplication::translate("PipelineObjPropWidget", "Origin", nullptr));
        m_edt_originx->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_originy->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        m_edt_originz->setText(QCoreApplication::translate("PipelineObjPropWidget", "0", nullptr));
        groupBox_8->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Cube Axes", nullptr));
        cubeAxes_checkBox->setText(QCoreApplication::translate("PipelineObjPropWidget", "Show Axis", nullptr));
        BtnViewButton->setText(QCoreApplication::translate("PipelineObjPropWidget", "View", nullptr));
        groupBox->setTitle(QString());
        orient_checkBox->setText(QCoreApplication::translate("PipelineObjPropWidget", "Orientation Visibility", nullptr));
        camera_parallel_checkBox->setText(QCoreApplication::translate("PipelineObjPropWidget", "Camera parallel projection", nullptr));
        remark_checkBox->setText(QCoreApplication::translate("PipelineObjPropWidget", "Remark", nullptr));
        remark_groupBox->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Remark Properties", nullptr));
        fontColor_label->setText(QCoreApplication::translate("PipelineObjPropWidget", "Font Color", nullptr));
        fontColor_pushButton->setText(QString());
        label_2->setText(QCoreApplication::translate("PipelineObjPropWidget", "text", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("PipelineObjPropWidget", "Background", nullptr));
        comboBox_backgroundType->setItemText(0, QCoreApplication::translate("PipelineObjPropWidget", "single color", nullptr));
        comboBox_backgroundType->setItemText(1, QCoreApplication::translate("PipelineObjPropWidget", "gradient", nullptr));

        color1_pushButton->setText(QString());
        color2_pushButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PipelineObjPropWidget: public Ui_PipelineObjPropWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIPELINEOBJPROPWIDGET_H
