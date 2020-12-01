/********************************************************************************
** Form generated from reading UI file 'EditorBoundaryModel.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORBOUNDARYMODEL_H
#define UI_EDITORBOUNDARYMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditorBoundaryModel
{
public:
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *txtChineseName;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *txtEnglishName;
    QHBoxLayout *horizontalLayout;
    QLineEdit *txtIcon;
    QPushButton *btnLoadIcon;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chk_commonCondition;
    QGridLayout *gridLayout_2;
    QCheckBox *chk_vt;
    QCheckBox *chk_fix_support;
    QCheckBox *chk_angle_vt;
    QCheckBox *chk_press;
    QCheckBox *chk_displacement;
    QCheckBox *chk_temp;
    QCheckBox *chk_rotation_angle;
    QCheckBox *chk_acc_angle;
    QCheckBox *chk_acc;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *chk_commonboundary;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *chk_inlet;
    QCheckBox *chk_outlet;
    QCheckBox *chk_symmetry;
    QCheckBox *chk_wall;

    void setupUi(QDialog *EditorBoundaryModel)
    {
        if (EditorBoundaryModel->objectName().isEmpty())
            EditorBoundaryModel->setObjectName(QString::fromUtf8("EditorBoundaryModel"));
        EditorBoundaryModel->resize(580, 401);
        gridLayout_4 = new QGridLayout(EditorBoundaryModel);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(EditorBoundaryModel);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(label_4);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorBoundaryModel);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorBoundaryModel);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout_4->addLayout(horizontalLayout_7, 2, 0, 1, 1);

        groupBox = new QGroupBox(EditorBoundaryModel);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);


        gridLayout->addLayout(verticalLayout, 0, 0, 3, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(5, 5, 5, 5);
        txtChineseName = new QLineEdit(groupBox);
        txtChineseName->setObjectName(QString::fromUtf8("txtChineseName"));

        horizontalLayout_3->addWidget(txtChineseName);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 5, 5, 5);
        txtEnglishName = new QLineEdit(groupBox);
        txtEnglishName->setObjectName(QString::fromUtf8("txtEnglishName"));

        horizontalLayout_2->addWidget(txtEnglishName);


        gridLayout->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        txtIcon = new QLineEdit(groupBox);
        txtIcon->setObjectName(QString::fromUtf8("txtIcon"));

        horizontalLayout->addWidget(txtIcon);

        btnLoadIcon = new QPushButton(groupBox);
        btnLoadIcon->setObjectName(QString::fromUtf8("btnLoadIcon"));

        horizontalLayout->addWidget(btnLoadIcon);

        horizontalLayout->setStretch(0, 10);

        gridLayout->addLayout(horizontalLayout, 2, 1, 1, 1);


        gridLayout_4->addWidget(groupBox, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(EditorBoundaryModel);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 5, 5, 5);
        chk_commonCondition = new QCheckBox(groupBox_2);
        chk_commonCondition->setObjectName(QString::fromUtf8("chk_commonCondition"));

        horizontalLayout_4->addWidget(chk_commonCondition);


        gridLayout_3->addLayout(horizontalLayout_4, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2->setContentsMargins(20, 5, 5, 5);
        chk_vt = new QCheckBox(groupBox_2);
        chk_vt->setObjectName(QString::fromUtf8("chk_vt"));

        gridLayout_2->addWidget(chk_vt, 0, 0, 1, 1);

        chk_fix_support = new QCheckBox(groupBox_2);
        chk_fix_support->setObjectName(QString::fromUtf8("chk_fix_support"));

        gridLayout_2->addWidget(chk_fix_support, 1, 0, 1, 1);

        chk_angle_vt = new QCheckBox(groupBox_2);
        chk_angle_vt->setObjectName(QString::fromUtf8("chk_angle_vt"));

        gridLayout_2->addWidget(chk_angle_vt, 1, 2, 1, 1);

        chk_press = new QCheckBox(groupBox_2);
        chk_press->setObjectName(QString::fromUtf8("chk_press"));

        gridLayout_2->addWidget(chk_press, 0, 1, 1, 1);

        chk_displacement = new QCheckBox(groupBox_2);
        chk_displacement->setObjectName(QString::fromUtf8("chk_displacement"));

        gridLayout_2->addWidget(chk_displacement, 1, 1, 1, 1);

        chk_temp = new QCheckBox(groupBox_2);
        chk_temp->setObjectName(QString::fromUtf8("chk_temp"));

        gridLayout_2->addWidget(chk_temp, 0, 2, 1, 1);

        chk_rotation_angle = new QCheckBox(groupBox_2);
        chk_rotation_angle->setObjectName(QString::fromUtf8("chk_rotation_angle"));

        gridLayout_2->addWidget(chk_rotation_angle, 2, 0, 1, 1);

        chk_acc_angle = new QCheckBox(groupBox_2);
        chk_acc_angle->setObjectName(QString::fromUtf8("chk_acc_angle"));

        gridLayout_2->addWidget(chk_acc_angle, 2, 2, 1, 1);

        chk_acc = new QCheckBox(groupBox_2);
        chk_acc->setObjectName(QString::fromUtf8("chk_acc"));

        gridLayout_2->addWidget(chk_acc, 2, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(5, 5, 5, 5);
        chk_commonboundary = new QCheckBox(groupBox_2);
        chk_commonboundary->setObjectName(QString::fromUtf8("chk_commonboundary"));

        horizontalLayout_5->addWidget(chk_commonboundary);


        gridLayout_3->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(5);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(20, 5, 5, 5);
        chk_inlet = new QCheckBox(groupBox_2);
        chk_inlet->setObjectName(QString::fromUtf8("chk_inlet"));

        horizontalLayout_6->addWidget(chk_inlet);

        chk_outlet = new QCheckBox(groupBox_2);
        chk_outlet->setObjectName(QString::fromUtf8("chk_outlet"));

        horizontalLayout_6->addWidget(chk_outlet);

        chk_symmetry = new QCheckBox(groupBox_2);
        chk_symmetry->setObjectName(QString::fromUtf8("chk_symmetry"));

        horizontalLayout_6->addWidget(chk_symmetry);

        chk_wall = new QCheckBox(groupBox_2);
        chk_wall->setObjectName(QString::fromUtf8("chk_wall"));

        horizontalLayout_6->addWidget(chk_wall);


        gridLayout_3->addLayout(horizontalLayout_6, 3, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 1, 0, 1, 1);


        retranslateUi(EditorBoundaryModel);

        QMetaObject::connectSlotsByName(EditorBoundaryModel);
    } // setupUi

    void retranslateUi(QDialog *EditorBoundaryModel)
    {
        EditorBoundaryModel->setWindowTitle(QCoreApplication::translate("EditorBoundaryModel", "Boundary setup", nullptr));
        label_4->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorBoundaryModel", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorBoundaryModel", "Cancel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EditorBoundaryModel", "Node info", nullptr));
        label->setText(QCoreApplication::translate("EditorBoundaryModel", "Chinese name", nullptr));
        label_2->setText(QCoreApplication::translate("EditorBoundaryModel", "English name", nullptr));
        label_3->setText(QCoreApplication::translate("EditorBoundaryModel", "Icon", nullptr));
        btnLoadIcon->setText(QCoreApplication::translate("EditorBoundaryModel", "Load icon", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EditorBoundaryModel", "Basi parameter info", nullptr));
        chk_commonCondition->setText(QCoreApplication::translate("EditorBoundaryModel", "Common condition", nullptr));
        chk_vt->setText(QCoreApplication::translate("EditorBoundaryModel", "Velocity", nullptr));
        chk_fix_support->setText(QCoreApplication::translate("EditorBoundaryModel", "Fix support", nullptr));
        chk_angle_vt->setText(QCoreApplication::translate("EditorBoundaryModel", "Angle velocity", nullptr));
        chk_press->setText(QCoreApplication::translate("EditorBoundaryModel", "Pressure", nullptr));
        chk_displacement->setText(QCoreApplication::translate("EditorBoundaryModel", "Displacement", nullptr));
        chk_temp->setText(QCoreApplication::translate("EditorBoundaryModel", "Temperature", nullptr));
        chk_rotation_angle->setText(QCoreApplication::translate("EditorBoundaryModel", "Rotation angle", nullptr));
        chk_acc_angle->setText(QCoreApplication::translate("EditorBoundaryModel", "Angle_accelaration", nullptr));
        chk_acc->setText(QCoreApplication::translate("EditorBoundaryModel", "Acceleration", nullptr));
        chk_commonboundary->setText(QCoreApplication::translate("EditorBoundaryModel", "Common boundary", nullptr));
        chk_inlet->setText(QCoreApplication::translate("EditorBoundaryModel", "In let", nullptr));
        chk_outlet->setText(QCoreApplication::translate("EditorBoundaryModel", "Out let", nullptr));
        chk_symmetry->setText(QCoreApplication::translate("EditorBoundaryModel", "symmetry", nullptr));
        chk_wall->setText(QCoreApplication::translate("EditorBoundaryModel", "Wall", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorBoundaryModel: public Ui_EditorBoundaryModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORBOUNDARYMODEL_H
