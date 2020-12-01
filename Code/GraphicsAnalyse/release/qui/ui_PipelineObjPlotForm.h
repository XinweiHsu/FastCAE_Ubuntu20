/********************************************************************************
** Form generated from reading UI file 'PipelineObjPlotForm.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PIPELINEOBJPLOTFORM_H
#define UI_PIPELINEOBJPLOTFORM_H

#include <QVTKOpenGLNativeWidget.h>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PipelineObjPlotForm
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QVTKOpenGLNativeWidget *qvtkWidget;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *PipelineObjPlotForm)
    {
        if (PipelineObjPlotForm->objectName().isEmpty())
            PipelineObjPlotForm->setObjectName(QString::fromUtf8("PipelineObjPlotForm"));
        PipelineObjPlotForm->resize(629, 625);
        gridLayout = new QGridLayout(PipelineObjPlotForm);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qvtkWidget = new QVTKOpenGLNativeWidget(PipelineObjPlotForm);
        qvtkWidget->setObjectName(QString::fromUtf8("qvtkWidget"));

        verticalLayout->addWidget(qvtkWidget);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));

        verticalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(PipelineObjPlotForm);

        QMetaObject::connectSlotsByName(PipelineObjPlotForm);
    } // setupUi

    void retranslateUi(QWidget *PipelineObjPlotForm)
    {
        PipelineObjPlotForm->setWindowTitle(QCoreApplication::translate("PipelineObjPlotForm", "Render View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PipelineObjPlotForm: public Ui_PipelineObjPlotForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PIPELINEOBJPLOTFORM_H
