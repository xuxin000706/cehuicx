/********************************************************************************
** Form generated from reading UI file 'cebianjh.ui'
**
** Created: Mon Jul 27 16:14:59 2020
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CEBIANJH_H
#define UI_CEBIANJH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CeBianJH
{
public:

    void setupUi(QWidget *CeBianJH)
    {
        if (CeBianJH->objectName().isEmpty())
            CeBianJH->setObjectName(QString::fromUtf8("CeBianJH"));
        CeBianJH->resize(400, 300);

        retranslateUi(CeBianJH);

        QMetaObject::connectSlotsByName(CeBianJH);
    } // setupUi

    void retranslateUi(QWidget *CeBianJH)
    {
        CeBianJH->setWindowTitle(QApplication::translate("CeBianJH", "CeBianJH", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CeBianJH: public Ui_CeBianJH {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CEBIANJH_H
