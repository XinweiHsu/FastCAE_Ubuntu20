/********************************************************************************
** Form generated from reading UI file 'calfilterpropform.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALFILTERPROPFORM_H
#define UI_CALFILTERPROPFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calFilterPropForm
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *resultName_lineEdit;
    QLineEdit *cal_lineEdit;
    QGridLayout *gridLayout;
    QPushButton *clear_pushButton;
    QPushButton *left_pushButton;
    QPushButton *right_pushButton;
    QPushButton *iHat_pushButton;
    QPushButton *jHat_pushButton;
    QPushButton *kHat_pushButton;
    QPushButton *sin_pushButton;
    QPushButton *cos_pushButton;
    QPushButton *tan_pushButton;
    QPushButton *abs_pushButton;
    QPushButton *sqrt_pushButton;
    QPushButton *add_pushButton;
    QPushButton *asin_pushButton;
    QPushButton *acos_pushButton;
    QPushButton *atan_pushButton;
    QPushButton *ceil_pushButton;
    QPushButton *floor_pushButton;
    QPushButton *sub_pushButton;
    QPushButton *sinh_pushButton;
    QPushButton *cosh_pushButton;
    QPushButton *tanh_pushButton;
    QPushButton *sqrtxy_pushButton;
    QPushButton *exp_pushButton;
    QPushButton *mul_pushButton;
    QPushButton *v1v2_pushButton;
    QPushButton *mag_pushButton;
    QPushButton *norm_pushButton;
    QPushButton *ln_pushButton;
    QPushButton *log10_pushButton;
    QPushButton *div_pushButton;
    QHBoxLayout *horizontalLayout;
    QComboBox *scalars_comboBox;
    QComboBox *vectors_comboBox;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *calFilterPropForm)
    {
        if (calFilterPropForm->objectName().isEmpty())
            calFilterPropForm->setObjectName(QString::fromUtf8("calFilterPropForm"));
        calFilterPropForm->resize(617, 429);
        verticalLayout = new QVBoxLayout(calFilterPropForm);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(calFilterPropForm);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        resultName_lineEdit = new QLineEdit(calFilterPropForm);
        resultName_lineEdit->setObjectName(QString::fromUtf8("resultName_lineEdit"));

        horizontalLayout_2->addWidget(resultName_lineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        cal_lineEdit = new QLineEdit(calFilterPropForm);
        cal_lineEdit->setObjectName(QString::fromUtf8("cal_lineEdit"));

        verticalLayout->addWidget(cal_lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        clear_pushButton = new QPushButton(calFilterPropForm);
        clear_pushButton->setObjectName(QString::fromUtf8("clear_pushButton"));

        gridLayout->addWidget(clear_pushButton, 0, 0, 1, 1);

        left_pushButton = new QPushButton(calFilterPropForm);
        left_pushButton->setObjectName(QString::fromUtf8("left_pushButton"));

        gridLayout->addWidget(left_pushButton, 0, 1, 1, 1);

        right_pushButton = new QPushButton(calFilterPropForm);
        right_pushButton->setObjectName(QString::fromUtf8("right_pushButton"));

        gridLayout->addWidget(right_pushButton, 0, 2, 1, 1);

        iHat_pushButton = new QPushButton(calFilterPropForm);
        iHat_pushButton->setObjectName(QString::fromUtf8("iHat_pushButton"));

        gridLayout->addWidget(iHat_pushButton, 0, 3, 1, 1);

        jHat_pushButton = new QPushButton(calFilterPropForm);
        jHat_pushButton->setObjectName(QString::fromUtf8("jHat_pushButton"));

        gridLayout->addWidget(jHat_pushButton, 0, 4, 1, 1);

        kHat_pushButton = new QPushButton(calFilterPropForm);
        kHat_pushButton->setObjectName(QString::fromUtf8("kHat_pushButton"));

        gridLayout->addWidget(kHat_pushButton, 0, 5, 1, 1);

        sin_pushButton = new QPushButton(calFilterPropForm);
        sin_pushButton->setObjectName(QString::fromUtf8("sin_pushButton"));

        gridLayout->addWidget(sin_pushButton, 1, 0, 1, 1);

        cos_pushButton = new QPushButton(calFilterPropForm);
        cos_pushButton->setObjectName(QString::fromUtf8("cos_pushButton"));

        gridLayout->addWidget(cos_pushButton, 1, 1, 1, 1);

        tan_pushButton = new QPushButton(calFilterPropForm);
        tan_pushButton->setObjectName(QString::fromUtf8("tan_pushButton"));

        gridLayout->addWidget(tan_pushButton, 1, 2, 1, 1);

        abs_pushButton = new QPushButton(calFilterPropForm);
        abs_pushButton->setObjectName(QString::fromUtf8("abs_pushButton"));

        gridLayout->addWidget(abs_pushButton, 1, 3, 1, 1);

        sqrt_pushButton = new QPushButton(calFilterPropForm);
        sqrt_pushButton->setObjectName(QString::fromUtf8("sqrt_pushButton"));

        gridLayout->addWidget(sqrt_pushButton, 1, 4, 1, 1);

        add_pushButton = new QPushButton(calFilterPropForm);
        add_pushButton->setObjectName(QString::fromUtf8("add_pushButton"));

        gridLayout->addWidget(add_pushButton, 1, 5, 1, 1);

        asin_pushButton = new QPushButton(calFilterPropForm);
        asin_pushButton->setObjectName(QString::fromUtf8("asin_pushButton"));

        gridLayout->addWidget(asin_pushButton, 2, 0, 1, 1);

        acos_pushButton = new QPushButton(calFilterPropForm);
        acos_pushButton->setObjectName(QString::fromUtf8("acos_pushButton"));

        gridLayout->addWidget(acos_pushButton, 2, 1, 1, 1);

        atan_pushButton = new QPushButton(calFilterPropForm);
        atan_pushButton->setObjectName(QString::fromUtf8("atan_pushButton"));

        gridLayout->addWidget(atan_pushButton, 2, 2, 1, 1);

        ceil_pushButton = new QPushButton(calFilterPropForm);
        ceil_pushButton->setObjectName(QString::fromUtf8("ceil_pushButton"));

        gridLayout->addWidget(ceil_pushButton, 2, 3, 1, 1);

        floor_pushButton = new QPushButton(calFilterPropForm);
        floor_pushButton->setObjectName(QString::fromUtf8("floor_pushButton"));

        gridLayout->addWidget(floor_pushButton, 2, 4, 1, 1);

        sub_pushButton = new QPushButton(calFilterPropForm);
        sub_pushButton->setObjectName(QString::fromUtf8("sub_pushButton"));

        gridLayout->addWidget(sub_pushButton, 2, 5, 1, 1);

        sinh_pushButton = new QPushButton(calFilterPropForm);
        sinh_pushButton->setObjectName(QString::fromUtf8("sinh_pushButton"));

        gridLayout->addWidget(sinh_pushButton, 3, 0, 1, 1);

        cosh_pushButton = new QPushButton(calFilterPropForm);
        cosh_pushButton->setObjectName(QString::fromUtf8("cosh_pushButton"));

        gridLayout->addWidget(cosh_pushButton, 3, 1, 1, 1);

        tanh_pushButton = new QPushButton(calFilterPropForm);
        tanh_pushButton->setObjectName(QString::fromUtf8("tanh_pushButton"));

        gridLayout->addWidget(tanh_pushButton, 3, 2, 1, 1);

        sqrtxy_pushButton = new QPushButton(calFilterPropForm);
        sqrtxy_pushButton->setObjectName(QString::fromUtf8("sqrtxy_pushButton"));

        gridLayout->addWidget(sqrtxy_pushButton, 3, 3, 1, 1);

        exp_pushButton = new QPushButton(calFilterPropForm);
        exp_pushButton->setObjectName(QString::fromUtf8("exp_pushButton"));

        gridLayout->addWidget(exp_pushButton, 3, 4, 1, 1);

        mul_pushButton = new QPushButton(calFilterPropForm);
        mul_pushButton->setObjectName(QString::fromUtf8("mul_pushButton"));

        gridLayout->addWidget(mul_pushButton, 3, 5, 1, 1);

        v1v2_pushButton = new QPushButton(calFilterPropForm);
        v1v2_pushButton->setObjectName(QString::fromUtf8("v1v2_pushButton"));

        gridLayout->addWidget(v1v2_pushButton, 4, 0, 1, 1);

        mag_pushButton = new QPushButton(calFilterPropForm);
        mag_pushButton->setObjectName(QString::fromUtf8("mag_pushButton"));

        gridLayout->addWidget(mag_pushButton, 4, 1, 1, 1);

        norm_pushButton = new QPushButton(calFilterPropForm);
        norm_pushButton->setObjectName(QString::fromUtf8("norm_pushButton"));

        gridLayout->addWidget(norm_pushButton, 4, 2, 1, 1);

        ln_pushButton = new QPushButton(calFilterPropForm);
        ln_pushButton->setObjectName(QString::fromUtf8("ln_pushButton"));

        gridLayout->addWidget(ln_pushButton, 4, 3, 1, 1);

        log10_pushButton = new QPushButton(calFilterPropForm);
        log10_pushButton->setObjectName(QString::fromUtf8("log10_pushButton"));

        gridLayout->addWidget(log10_pushButton, 4, 4, 1, 1);

        div_pushButton = new QPushButton(calFilterPropForm);
        div_pushButton->setObjectName(QString::fromUtf8("div_pushButton"));

        gridLayout->addWidget(div_pushButton, 4, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        scalars_comboBox = new QComboBox(calFilterPropForm);
        scalars_comboBox->setObjectName(QString::fromUtf8("scalars_comboBox"));

        horizontalLayout->addWidget(scalars_comboBox);

        vectors_comboBox = new QComboBox(calFilterPropForm);
        vectors_comboBox->setObjectName(QString::fromUtf8("vectors_comboBox"));

        horizontalLayout->addWidget(vectors_comboBox);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 238, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(calFilterPropForm);

        QMetaObject::connectSlotsByName(calFilterPropForm);
    } // setupUi

    void retranslateUi(QWidget *calFilterPropForm)
    {
        calFilterPropForm->setWindowTitle(QCoreApplication::translate("calFilterPropForm", "Calculator Property", nullptr));
        label->setText(QCoreApplication::translate("calFilterPropForm", "Result Array Name", nullptr));
        clear_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "clear", nullptr));
        left_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "(", nullptr));
        right_pushButton->setText(QCoreApplication::translate("calFilterPropForm", ")", nullptr));
        iHat_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "iHat", nullptr));
        jHat_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "jHat", nullptr));
        kHat_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "kHat", nullptr));
        sin_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "sin", nullptr));
        cos_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "cos", nullptr));
        tan_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "tan", nullptr));
        abs_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "fabs", nullptr));
        sqrt_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "sqrt", nullptr));
        add_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "+", nullptr));
        asin_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "asin", nullptr));
        acos_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "acos", nullptr));
        atan_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "atan", nullptr));
        ceil_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "ceil", nullptr));
        floor_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "floor", nullptr));
        sub_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "-", nullptr));
        sinh_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "sinh", nullptr));
        cosh_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "cosh", nullptr));
        tanh_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "tanh", nullptr));
        sqrtxy_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "x^y", nullptr));
        exp_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "exp", nullptr));
        mul_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "*", nullptr));
        v1v2_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "v1.v2", nullptr));
        mag_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "mag", nullptr));
        norm_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "norm", nullptr));
        ln_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "ln", nullptr));
        log10_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "log10", nullptr));
        div_pushButton->setText(QCoreApplication::translate("calFilterPropForm", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calFilterPropForm: public Ui_calFilterPropForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALFILTERPROPFORM_H
