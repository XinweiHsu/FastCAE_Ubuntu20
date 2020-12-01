/********************************************************************************
** Form generated from reading UI file 'EditorEnumListValue.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITORENUMLISTVALUE_H
#define UI_EDITORENUMLISTVALUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditorEnumListValue
{
public:
    QGridLayout *gridLayout_2;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btnAdd;
    QPushButton *btnInsert;
    QPushButton *btnDel;
    QPushButton *btnClearAll;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_7;
    QLabel *lbl_info;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOk;
    QPushButton *btnCancel;

    void setupUi(QDialog *EditorEnumListValue)
    {
        if (EditorEnumListValue->objectName().isEmpty())
            EditorEnumListValue->setObjectName(QString::fromUtf8("EditorEnumListValue"));
        EditorEnumListValue->resize(473, 325);
        gridLayout_2 = new QGridLayout(EditorEnumListValue);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame = new QFrame(EditorEnumListValue);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        listWidget = new QListWidget(frame);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(6, 6, 6, 6);
        btnAdd = new QPushButton(frame);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        verticalLayout_2->addWidget(btnAdd);

        btnInsert = new QPushButton(frame);
        btnInsert->setObjectName(QString::fromUtf8("btnInsert"));

        verticalLayout_2->addWidget(btnInsert);

        btnDel = new QPushButton(frame);
        btnDel->setObjectName(QString::fromUtf8("btnDel"));

        verticalLayout_2->addWidget(btnDel);

        btnClearAll = new QPushButton(frame);
        btnClearAll->setObjectName(QString::fromUtf8("btnClearAll"));

        verticalLayout_2->addWidget(btnClearAll);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout_3, 0, 0, 1, 1);


        gridLayout_2->addWidget(frame, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(6, 6, 6, 6);
        lbl_info = new QLabel(EditorEnumListValue);
        lbl_info->setObjectName(QString::fromUtf8("lbl_info"));
        lbl_info->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);"));

        horizontalLayout_7->addWidget(lbl_info);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        btnOk = new QPushButton(EditorEnumListValue);
        btnOk->setObjectName(QString::fromUtf8("btnOk"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnOk->sizePolicy().hasHeightForWidth());
        btnOk->setSizePolicy(sizePolicy);
        btnOk->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnOk);

        btnCancel = new QPushButton(EditorEnumListValue);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        sizePolicy.setHeightForWidth(btnCancel->sizePolicy().hasHeightForWidth());
        btnCancel->setSizePolicy(sizePolicy);
        btnCancel->setMaximumSize(QSize(16777215, 16777215));

        horizontalLayout_7->addWidget(btnCancel);


        gridLayout_2->addLayout(horizontalLayout_7, 1, 0, 1, 1);


        retranslateUi(EditorEnumListValue);

        QMetaObject::connectSlotsByName(EditorEnumListValue);
    } // setupUi

    void retranslateUi(QDialog *EditorEnumListValue)
    {
        EditorEnumListValue->setWindowTitle(QCoreApplication::translate("EditorEnumListValue", "Enum Parameter", nullptr));
        btnAdd->setText(QCoreApplication::translate("EditorEnumListValue", "Add", nullptr));
        btnInsert->setText(QCoreApplication::translate("EditorEnumListValue", "Insert", nullptr));
        btnDel->setText(QCoreApplication::translate("EditorEnumListValue", "Del", nullptr));
        btnClearAll->setText(QCoreApplication::translate("EditorEnumListValue", "Clear all", nullptr));
        lbl_info->setText(QString());
        btnOk->setText(QCoreApplication::translate("EditorEnumListValue", "Ok", nullptr));
        btnCancel->setText(QCoreApplication::translate("EditorEnumListValue", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditorEnumListValue: public Ui_EditorEnumListValue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITORENUMLISTVALUE_H
