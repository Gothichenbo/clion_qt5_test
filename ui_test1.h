/********************************************************************************
** Form generated from reading UI file 'test1.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST1_H
#define UI_TEST1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test1
{
public:

    void setupUi(QWidget *test1)
    {
        if (test1->objectName().isEmpty())
            test1->setObjectName(QString::fromUtf8("test1"));
        test1->resize(400, 300);

        retranslateUi(test1);

        QMetaObject::connectSlotsByName(test1);
    } // setupUi

    void retranslateUi(QWidget *test1)
    {
        test1->setWindowTitle(QCoreApplication::translate("test1", "test1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test1: public Ui_test1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST1_H
