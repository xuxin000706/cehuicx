/********************************************************************************
** Form generated from reading UI file 'dxjypc.ui'
**
** Created: Mon Jul 27 16:14:59 2020
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DXJYPC_H
#define UI_DXJYPC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DxJyPc
{
public:
    QTableView *tableView;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *DxJyPc)
    {
        if (DxJyPc->objectName().isEmpty())
            DxJyPc->setObjectName(QString::fromUtf8("DxJyPc"));
        DxJyPc->resize(1068, 755);
        tableView = new QTableView(DxJyPc);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 110, 1021, 581));
        lineEdit = new QLineEdit(DxJyPc);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 70, 113, 21));
        pushButton = new QPushButton(DxJyPc);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 60, 93, 28));
        pushButton_2 = new QPushButton(DxJyPc);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(290, 60, 93, 28));

        retranslateUi(DxJyPc);
        QObject::connect(pushButton, SIGNAL(clicked()), DxJyPc, SLOT(jisuan()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), DxJyPc, SLOT(result()));

        QMetaObject::connectSlotsByName(DxJyPc);
    } // setupUi

    void retranslateUi(QWidget *DxJyPc)
    {
        DxJyPc->setWindowTitle(QApplication::translate("DxJyPc", "DxJyPc", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("DxJyPc", "\346\211\213\345\212\250\350\276\223\345\205\245", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("DxJyPc", "\345\274\200\345\247\213\350\256\241\347\256\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DxJyPc: public Ui_DxJyPc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DXJYPC_H
