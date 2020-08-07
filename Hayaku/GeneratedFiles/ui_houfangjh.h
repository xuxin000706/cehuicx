/********************************************************************************
** Form generated from reading UI file 'houfangjh.ui'
**
** Created: Mon Jul 27 16:14:59 2020
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOUFANGJH_H
#define UI_HOUFANGJH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HouFangJH
{
public:

    void setupUi(QWidget *HouFangJH)
    {
        if (HouFangJH->objectName().isEmpty())
            HouFangJH->setObjectName(QString::fromUtf8("HouFangJH"));
        HouFangJH->resize(400, 300);

        retranslateUi(HouFangJH);

        QMetaObject::connectSlotsByName(HouFangJH);
    } // setupUi

    void retranslateUi(QWidget *HouFangJH)
    {
        HouFangJH->setWindowTitle(QApplication::translate("HouFangJH", "HouFangJH", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HouFangJH: public Ui_HouFangJH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOUFANGJH_H
