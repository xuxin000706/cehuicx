/********************************************************************************
** Form generated from reading UI file 'hayaku.ui'
**
** Created: Mon Jul 27 16:14:58 2020
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HAYAKU_H
#define UI_HAYAKU_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HayakuClass
{
public:
    QAction *DXJY;
    QAction *DXJJ;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_6;
    QAction *action_7;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *HayakuClass)
    {
        if (HayakuClass->objectName().isEmpty())
            HayakuClass->setObjectName(QString::fromUtf8("HayakuClass"));
        HayakuClass->resize(600, 400);
        DXJY = new QAction(HayakuClass);
        DXJY->setObjectName(QString::fromUtf8("DXJY"));
        DXJJ = new QAction(HayakuClass);
        DXJJ->setObjectName(QString::fromUtf8("DXJJ"));
        action_3 = new QAction(HayakuClass);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(HayakuClass);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(HayakuClass);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_6 = new QAction(HayakuClass);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(HayakuClass);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        centralWidget = new QWidget(HayakuClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(190, 100, 104, 87));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(160, 240, 93, 28));
        HayakuClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(HayakuClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 26));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        HayakuClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(HayakuClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        HayakuClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(HayakuClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        HayakuClass->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menu->addAction(DXJY);
        menu->addAction(DXJJ);
        menu_2->addAction(action_3);
        menu_2->addAction(action_4);
        menu_3->addAction(action_5);
        menu_3->addAction(action_6);
        menu_3->addAction(action_7);

        retranslateUi(HayakuClass);

        QMetaObject::connectSlotsByName(HayakuClass);
    } // setupUi

    void retranslateUi(QMainWindow *HayakuClass)
    {
        HayakuClass->setWindowTitle(QApplication::translate("HayakuClass", "Hayaku", 0, QApplication::UnicodeUTF8));
        DXJY->setText(QApplication::translate("HayakuClass", "\347\256\200\346\230\223\345\271\263\345\267\256", 0, QApplication::UnicodeUTF8));
        DXJJ->setText(QApplication::translate("HayakuClass", "\351\227\264\346\216\245\345\271\263\345\267\256", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("HayakuClass", "\347\256\200\346\230\223\345\271\263\345\267\256", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("HayakuClass", "\351\227\264\346\216\245\345\271\263\345\267\256", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("HayakuClass", "\345\211\215\346\226\271\344\272\244\344\274\232", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("HayakuClass", "\345\220\216\346\226\271\344\272\244\344\274\232", 0, QApplication::UnicodeUTF8));
        action_7->setText(QApplication::translate("HayakuClass", "\346\265\213\350\276\271\344\272\244\344\274\232", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("HayakuClass", "PushButton", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("HayakuClass", "\345\257\274\347\272\277\346\265\213\351\207\217", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("HayakuClass", "\346\260\264\345\207\206\346\265\213\351\207\217", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("HayakuClass", "\344\272\244\344\274\232\346\265\213\351\207\217", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("HayakuClass", "\345\235\220\346\240\207\345\217\215\347\256\227", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class HayakuClass: public Ui_HayakuClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HAYAKU_H
