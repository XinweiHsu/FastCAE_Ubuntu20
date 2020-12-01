/********************************************************************************
** Form generated from reading UI file 'DialogMeshSetMerge.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMESHSETMERGE_H
#define UI_DIALOGMESHSETMERGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_MeshSetMergeDialog
{
public:
    QGridLayout *gridLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *NameLineEdit;
    QLabel *label_3;
    QComboBox *TypeComboBox;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *AvailableListWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_7;
    QPushButton *addButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *removeButton;
    QSpacerItem *verticalSpacer_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QListWidget *MergeListWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_4;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *verticalSpacer_8;
    QPushButton *btn_add;
    QSpacerItem *verticalSpacer_5;
    QPushButton *btn_del;
    QSpacerItem *verticalSpacer_6;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QListWidget *CutListWidget;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MeshSetMergeDialog)
    {
        if (MeshSetMergeDialog->objectName().isEmpty())
            MeshSetMergeDialog->setObjectName(QString::fromUtf8("MeshSetMergeDialog"));
        MeshSetMergeDialog->resize(350, 376);
        gridLayout = new QGridLayout(MeshSetMergeDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(MeshSetMergeDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        NameLineEdit = new QLineEdit(MeshSetMergeDialog);
        NameLineEdit->setObjectName(QString::fromUtf8("NameLineEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, NameLineEdit);

        label_3 = new QLabel(MeshSetMergeDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        TypeComboBox = new QComboBox(MeshSetMergeDialog);
        TypeComboBox->addItem(QString());
        TypeComboBox->addItem(QString());
        TypeComboBox->setObjectName(QString::fromUtf8("TypeComboBox"));

        formLayout->setWidget(1, QFormLayout::FieldRole, TypeComboBox);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(MeshSetMergeDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        AvailableListWidget = new QListWidget(MeshSetMergeDialog);
        AvailableListWidget->setObjectName(QString::fromUtf8("AvailableListWidget"));

        verticalLayout->addWidget(AvailableListWidget);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        addButton = new QPushButton(MeshSetMergeDialog);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout_5->addWidget(addButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);

        removeButton = new QPushButton(MeshSetMergeDialog);
        removeButton->setObjectName(QString::fromUtf8("removeButton"));

        verticalLayout_5->addWidget(removeButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        horizontalLayout->addLayout(verticalLayout_5);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_4 = new QLabel(MeshSetMergeDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        MergeListWidget = new QListWidget(MeshSetMergeDialog);
        MergeListWidget->setObjectName(QString::fromUtf8("MergeListWidget"));

        verticalLayout_2->addWidget(MergeListWidget);


        horizontalLayout->addLayout(verticalLayout_2);


        verticalLayout_6->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_4);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_8);

        btn_add = new QPushButton(MeshSetMergeDialog);
        btn_add->setObjectName(QString::fromUtf8("btn_add"));

        verticalLayout_4->addWidget(btn_add);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_5);

        btn_del = new QPushButton(MeshSetMergeDialog);
        btn_del->setObjectName(QString::fromUtf8("btn_del"));

        verticalLayout_4->addWidget(btn_del);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_6);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_5 = new QLabel(MeshSetMergeDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_3->addWidget(label_5);

        CutListWidget = new QListWidget(MeshSetMergeDialog);
        CutListWidget->setObjectName(QString::fromUtf8("CutListWidget"));

        verticalLayout_3->addWidget(CutListWidget);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout_6->addLayout(horizontalLayout_2);


        horizontalLayout_3->addLayout(verticalLayout_6);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(MeshSetMergeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(MeshSetMergeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), MeshSetMergeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MeshSetMergeDialog, SLOT(reject()));

        TypeComboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MeshSetMergeDialog);
    } // setupUi

    void retranslateUi(QDialog *MeshSetMergeDialog)
    {
        MeshSetMergeDialog->setWindowTitle(QCoreApplication::translate("MeshSetMergeDialog", "Merge", nullptr));
        label_2->setText(QCoreApplication::translate("MeshSetMergeDialog", "Name:", nullptr));
        label_3->setText(QCoreApplication::translate("MeshSetMergeDialog", "Type:", nullptr));
        TypeComboBox->setItemText(0, QCoreApplication::translate("MeshSetMergeDialog", "Node", nullptr));
        TypeComboBox->setItemText(1, QCoreApplication::translate("MeshSetMergeDialog", "Element", nullptr));

        label->setText(QCoreApplication::translate("MeshSetMergeDialog", "Available:", nullptr));
        addButton->setText(QCoreApplication::translate("MeshSetMergeDialog", ">>", nullptr));
        removeButton->setText(QCoreApplication::translate("MeshSetMergeDialog", "<<", nullptr));
        label_4->setText(QCoreApplication::translate("MeshSetMergeDialog", "Merge:", nullptr));
        btn_add->setText(QCoreApplication::translate("MeshSetMergeDialog", ">>", nullptr));
        btn_del->setText(QCoreApplication::translate("MeshSetMergeDialog", "<<", nullptr));
        label_5->setText(QCoreApplication::translate("MeshSetMergeDialog", "Cut:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MeshSetMergeDialog: public Ui_MeshSetMergeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMESHSETMERGE_H
