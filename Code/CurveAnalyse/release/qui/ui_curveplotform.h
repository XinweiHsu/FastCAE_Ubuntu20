/********************************************************************************
** Form generated from reading UI file 'curveplotform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURVEPLOTFORM_H
#define UI_CURVEPLOTFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurvePlotForm
{
public:

    void setupUi(QWidget *CurvePlotForm)
    {
        if (CurvePlotForm->objectName().isEmpty())
            CurvePlotForm->setObjectName(QString::fromUtf8("CurvePlotForm"));
        CurvePlotForm->resize(572, 492);

        retranslateUi(CurvePlotForm);

        QMetaObject::connectSlotsByName(CurvePlotForm);
    } // setupUi

    void retranslateUi(QWidget *CurvePlotForm)
    {
        CurvePlotForm->setWindowTitle(QCoreApplication::translate("CurvePlotForm", "Curve Plot", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurvePlotForm: public Ui_CurvePlotForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURVEPLOTFORM_H
