/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue Sep 6 08:23:29 2016
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_2;
    QAction *action_version;
    QAction *action;
    QAction *action_3;
    QAction *action_4;
    QAction *action_5;
    QAction *action_get_set;
    QAction *action_6;
    QAction *action_7;
    QAction *action_ifndef;
    QAction *action_define;
    QAction *action_ifdef;
    QAction *action_if_0;
    QAction *actionExtern_C;
    QAction *action_define_2;
    QAction *action_ifndef_2;
    QAction *action_ifdef_2;
    QAction *action_if_1;
    QAction *actionExtern_C_2;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menuC;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(400, 300);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QString::fromUtf8("action_2"));
        action_version = new QAction(MainWindow);
        action_version->setObjectName(QString::fromUtf8("action_version"));
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QString::fromUtf8("action_4"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        action_get_set = new QAction(MainWindow);
        action_get_set->setObjectName(QString::fromUtf8("action_get_set"));
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QString::fromUtf8("action_6"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QString::fromUtf8("action_7"));
        action_ifndef = new QAction(MainWindow);
        action_ifndef->setObjectName(QString::fromUtf8("action_ifndef"));
        action_define = new QAction(MainWindow);
        action_define->setObjectName(QString::fromUtf8("action_define"));
        action_ifdef = new QAction(MainWindow);
        action_ifdef->setObjectName(QString::fromUtf8("action_ifdef"));
        action_if_0 = new QAction(MainWindow);
        action_if_0->setObjectName(QString::fromUtf8("action_if_0"));
        actionExtern_C = new QAction(MainWindow);
        actionExtern_C->setObjectName(QString::fromUtf8("actionExtern_C"));
        action_define_2 = new QAction(MainWindow);
        action_define_2->setObjectName(QString::fromUtf8("action_define_2"));
        action_ifndef_2 = new QAction(MainWindow);
        action_ifndef_2->setObjectName(QString::fromUtf8("action_ifndef_2"));
        action_ifdef_2 = new QAction(MainWindow);
        action_ifdef_2->setObjectName(QString::fromUtf8("action_ifdef_2"));
        action_if_1 = new QAction(MainWindow);
        action_if_1->setObjectName(QString::fromUtf8("action_if_1"));
        actionExtern_C_2 = new QAction(MainWindow);
        actionExtern_C_2->setObjectName(QString::fromUtf8("actionExtern_C_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menu_3 = new QMenu(menuBar);
        menu_3->setObjectName(QString::fromUtf8("menu_3"));
        menu_4 = new QMenu(menuBar);
        menu_4->setObjectName(QString::fromUtf8("menu_4"));
        menuC = new QMenu(menu_4);
        menuC->setObjectName(QString::fromUtf8("menuC"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_3->menuAction());
        menuBar->addAction(menu_4->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu_2->addAction(action_2);
        menu_2->addSeparator();
        menu_2->addAction(action_version);
        menu_3->addAction(action_3);
        menu_3->addAction(action_4);
        menu_3->addAction(action_5);
        menu_3->addAction(action_get_set);
        menu_3->addAction(action_6);
        menu_3->addAction(action_7);
        menu_4->addAction(menuC->menuAction());
        menuC->addAction(action_define_2);
        menuC->addAction(action_ifndef_2);
        menuC->addAction(action_ifdef_2);
        menuC->addAction(action_if_1);
        menuC->addAction(actionExtern_C_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        action_2->setText(QApplication::translate("MainWindow", "\347\254\254\344\270\200\344\270\252", 0, QApplication::UnicodeUTF8));
        action_version->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        action->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\225\260\346\215\256\345\272\223", 0, QApplication::UnicodeUTF8));
        action_3->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\346\211\223\345\215\260\350\257\255\345\217\245", 0, QApplication::UnicodeUTF8));
        action_4->setText(QApplication::translate("MainWindow", "\345\207\275\346\225\260\357\274\210\351\235\231\346\200\201\357\274\211", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\345\207\275\346\225\260\357\274\210\346\231\256\351\200\232\357\274\211", 0, QApplication::UnicodeUTF8));
        action_get_set->setText(QApplication::translate("MainWindow", "\345\207\275\346\225\260 get set", 0, QApplication::UnicodeUTF8));
        action_6->setText(QApplication::translate("MainWindow", "\345\217\230\351\207\217\357\274\210\351\235\231\346\200\201\357\274\211 + set get", 0, QApplication::UnicodeUTF8));
        action_7->setText(QApplication::translate("MainWindow", "\345\217\230\351\207\217", 0, QApplication::UnicodeUTF8));
        action_ifndef->setText(QApplication::translate("MainWindow", "#define", 0, QApplication::UnicodeUTF8));
        action_define->setText(QApplication::translate("MainWindow", "#ifndef", 0, QApplication::UnicodeUTF8));
        action_ifdef->setText(QApplication::translate("MainWindow", "#ifdef", 0, QApplication::UnicodeUTF8));
        action_if_0->setText(QApplication::translate("MainWindow", "#if 0", 0, QApplication::UnicodeUTF8));
        actionExtern_C->setText(QApplication::translate("MainWindow", "extern \"C\"", 0, QApplication::UnicodeUTF8));
        action_define_2->setText(QApplication::translate("MainWindow", "#define", 0, QApplication::UnicodeUTF8));
        action_ifndef_2->setText(QApplication::translate("MainWindow", "#ifndef", 0, QApplication::UnicodeUTF8));
        action_ifdef_2->setText(QApplication::translate("MainWindow", "#ifdef", 0, QApplication::UnicodeUTF8));
        action_if_1->setText(QApplication::translate("MainWindow", "#if 0", 0, QApplication::UnicodeUTF8));
        actionExtern_C_2->setText(QApplication::translate("MainWindow", "extern \"C\"", 0, QApplication::UnicodeUTF8));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        menu_2->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        menu_3->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221", 0, QApplication::UnicodeUTF8));
        menu_4->setTitle(QApplication::translate("MainWindow", "\351\242\204\345\256\232\344\271\211", 0, QApplication::UnicodeUTF8));
        menuC->setTitle(QApplication::translate("MainWindow", "C", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
