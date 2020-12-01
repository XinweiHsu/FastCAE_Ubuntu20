/********************************************************************************
** Form generated from reading UI file 'Post2DWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST2DWIDGET_H
#define UI_POST2DWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post2DWidget
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *layout;

    void setupUi(QWidget *Post2DWidget)
    {
        if (Post2DWidget->objectName().isEmpty())
            Post2DWidget->setObjectName(QString::fromUtf8("Post2DWidget"));
        Post2DWidget->resize(400, 300);
        gridLayout = new QGridLayout(Post2DWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        layout = new QHBoxLayout();
        layout->setObjectName(QString::fromUtf8("layout"));

        gridLayout->addLayout(layout, 0, 0, 1, 1);


        retranslateUi(Post2DWidget);

        QMetaObject::connectSlotsByName(Post2DWidget);
    } // setupUi

    void retranslateUi(QWidget *Post2DWidget)
    {
        Post2DWidget->setWindowTitle(QCoreApplication::translate("Post2DWidget", "Post2DWidget", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Post2DWidget: public Ui_Post2DWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST2DWIDGET_H
