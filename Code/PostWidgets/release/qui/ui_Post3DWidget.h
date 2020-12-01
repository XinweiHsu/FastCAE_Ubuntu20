/********************************************************************************
** Form generated from reading UI file 'Post3DWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST3DWIDGET_H
#define UI_POST3DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post3DWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *layout;

    void setupUi(QWidget *Post3DWidget)
    {
        if (Post3DWidget->objectName().isEmpty())
            Post3DWidget->setObjectName(QString::fromUtf8("Post3DWidget"));
        Post3DWidget->resize(858, 504);
        gridLayout = new QGridLayout(Post3DWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        layout = new QHBoxLayout();
        layout->setObjectName(QString::fromUtf8("layout"));

        gridLayout->addLayout(layout, 0, 0, 1, 1);


        retranslateUi(Post3DWidget);

        QMetaObject::connectSlotsByName(Post3DWidget);
    } // setupUi

    void retranslateUi(QWidget *Post3DWidget)
    {
        Post3DWidget->setWindowTitle(QCoreApplication::translate("Post3DWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Post3DWidget: public Ui_Post3DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST3DWIDGET_H
