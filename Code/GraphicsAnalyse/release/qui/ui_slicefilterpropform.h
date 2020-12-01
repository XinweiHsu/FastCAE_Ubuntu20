/********************************************************************************
** Form generated from reading UI file 'slicefilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLICEFILTERPROPFORM_H
#define UI_SLICEFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sliceFilterPropForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QCheckBox *checkBox;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *m_planeOrigin_lineEdit1;
    QLineEdit *m_planeOrigin_lineEdit2;
    QLineEdit *m_planeOrigin_lineEdit3;
    QLabel *label_2;
    QLineEdit *m_planeNormal_lineEdit1;
    QLineEdit *m_planeNormal_lineEdit2;
    QLineEdit *m_planeNormal_lineEdit3;
    QGridLayout *gridLayout_2;
    QPushButton *xNormal_btn;
    QPushButton *yNormal_btn;
    QPushButton *zNormal_btn;
    QPushButton *cameraNormal_btn;
    QCheckBox *insideOut_checkBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *sliceFilterPropForm)
    {
        if (sliceFilterPropForm->objectName().isEmpty())
            sliceFilterPropForm->setObjectName(QString::fromUtf8("sliceFilterPropForm"));
        sliceFilterPropForm->resize(347, 306);
        verticalLayout_2 = new QVBoxLayout(sliceFilterPropForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(sliceFilterPropForm);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout->addWidget(checkBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        m_planeOrigin_lineEdit1 = new QLineEdit(groupBox);
        m_planeOrigin_lineEdit1->setObjectName(QString::fromUtf8("m_planeOrigin_lineEdit1"));

        gridLayout->addWidget(m_planeOrigin_lineEdit1, 0, 1, 1, 1);

        m_planeOrigin_lineEdit2 = new QLineEdit(groupBox);
        m_planeOrigin_lineEdit2->setObjectName(QString::fromUtf8("m_planeOrigin_lineEdit2"));

        gridLayout->addWidget(m_planeOrigin_lineEdit2, 0, 2, 1, 1);

        m_planeOrigin_lineEdit3 = new QLineEdit(groupBox);
        m_planeOrigin_lineEdit3->setObjectName(QString::fromUtf8("m_planeOrigin_lineEdit3"));

        gridLayout->addWidget(m_planeOrigin_lineEdit3, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        m_planeNormal_lineEdit1 = new QLineEdit(groupBox);
        m_planeNormal_lineEdit1->setObjectName(QString::fromUtf8("m_planeNormal_lineEdit1"));

        gridLayout->addWidget(m_planeNormal_lineEdit1, 1, 1, 1, 1);

        m_planeNormal_lineEdit2 = new QLineEdit(groupBox);
        m_planeNormal_lineEdit2->setObjectName(QString::fromUtf8("m_planeNormal_lineEdit2"));

        gridLayout->addWidget(m_planeNormal_lineEdit2, 1, 2, 1, 1);

        m_planeNormal_lineEdit3 = new QLineEdit(groupBox);
        m_planeNormal_lineEdit3->setObjectName(QString::fromUtf8("m_planeNormal_lineEdit3"));

        gridLayout->addWidget(m_planeNormal_lineEdit3, 1, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        xNormal_btn = new QPushButton(groupBox);
        xNormal_btn->setObjectName(QString::fromUtf8("xNormal_btn"));

        gridLayout_2->addWidget(xNormal_btn, 0, 0, 1, 1);

        yNormal_btn = new QPushButton(groupBox);
        yNormal_btn->setObjectName(QString::fromUtf8("yNormal_btn"));

        gridLayout_2->addWidget(yNormal_btn, 0, 1, 1, 1);

        zNormal_btn = new QPushButton(groupBox);
        zNormal_btn->setObjectName(QString::fromUtf8("zNormal_btn"));

        gridLayout_2->addWidget(zNormal_btn, 0, 2, 1, 1);

        cameraNormal_btn = new QPushButton(groupBox);
        cameraNormal_btn->setObjectName(QString::fromUtf8("cameraNormal_btn"));

        gridLayout_2->addWidget(cameraNormal_btn, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_2);


        verticalLayout_2->addWidget(groupBox);

        insideOut_checkBox = new QCheckBox(sliceFilterPropForm);
        insideOut_checkBox->setObjectName(QString::fromUtf8("insideOut_checkBox"));

        verticalLayout_2->addWidget(insideOut_checkBox);

        verticalSpacer = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        retranslateUi(sliceFilterPropForm);

        QMetaObject::connectSlotsByName(sliceFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *sliceFilterPropForm)
    {
        sliceFilterPropForm->setWindowTitle(QCoreApplication::translate("sliceFilterPropForm", "Slice Property", nullptr));
        groupBox->setTitle(QCoreApplication::translate("sliceFilterPropForm", "plane", nullptr));
        checkBox->setText(QCoreApplication::translate("sliceFilterPropForm", "show plane", nullptr));
        label->setText(QCoreApplication::translate("sliceFilterPropForm", "origin", nullptr));
        label_2->setText(QCoreApplication::translate("sliceFilterPropForm", "normal", nullptr));
        xNormal_btn->setText(QCoreApplication::translate("sliceFilterPropForm", "X Normal", nullptr));
        yNormal_btn->setText(QCoreApplication::translate("sliceFilterPropForm", "Y Normal", nullptr));
        zNormal_btn->setText(QCoreApplication::translate("sliceFilterPropForm", "Z Normal", nullptr));
        cameraNormal_btn->setText(QCoreApplication::translate("sliceFilterPropForm", "Camera Normal", nullptr));
        insideOut_checkBox->setText(QCoreApplication::translate("sliceFilterPropForm", "Inside out", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sliceFilterPropForm: public Ui_sliceFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLICEFILTERPROPFORM_H
