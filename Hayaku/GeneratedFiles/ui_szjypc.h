/********************************************************************************
** Form generated from reading UI file 'szjypc.ui'
**
** Created: Mon Jul 27 16:14:59 2020
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SZJYPC_H
#define UI_SZJYPC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SzJyPc
{
public:

    void setupUi(QWidget *SzJyPc)
    {
        if (SzJyPc->objectName().isEmpty())
            SzJyPc->setObjectName(QString::fromUtf8("SzJyPc"));
        SzJyPc->resize(400, 300);

        retranslateUi(SzJyPc);

        QMetaObject::connectSlotsByName(SzJyPc);
    } // setupUi

    void retranslateUi(QWidget *SzJyPc)
    {
        SzJyPc->setWindowTitle(QApplication::translate("SzJyPc", "SzJyPc", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SzJyPc: public Ui_SzJyPc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SZJYPC_H
