/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *action_2;
    QAction *action_4;
    QAction *action_3;
    QAction *action_5;
    QAction *action_7;
    QAction *action_6;
    QAction *action_10;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/factorial.png"), QSize(), QIcon::Normal, QIcon::Off);
        action->setIcon(icon1);
        action_2 = new QAction(MainWindow);
        action_2->setObjectName(QStringLiteral("action_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/fibonacci.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_2->setIcon(icon2);
        action_4 = new QAction(MainWindow);
        action_4->setObjectName(QStringLiteral("action_4"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/close.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_4->setIcon(icon3);
        action_3 = new QAction(MainWindow);
        action_3->setObjectName(QStringLiteral("action_3"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QStringLiteral("action_5"));
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/Information.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon4);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/binary.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon5);
        action_10 = new QAction(MainWindow);
        action_10->setObjectName(QStringLiteral("action_10"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(action);
        menu->addAction(action_2);
        menu->addAction(action_6);
        menu->addSeparator();
        menu_2->addAction(action_3);
        menu_2->addAction(action_5);
        menu_2->addAction(action_10);
        mainToolBar->addAction(action);
        mainToolBar->addAction(action_2);
        mainToolBar->addAction(action_6);
        mainToolBar->addAction(action_7);
        mainToolBar->addAction(action_4);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\320\244\320\260\320\272\321\202\320\276\321\200\320\270\320\260\320\273...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_2->setText(QApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\260 \320\244\320\270\320\261\320\276\320\275\320\260\321\207\321\207\320\270...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_2->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_4->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_4->setShortcut(QApplication::translate("MainWindow", "Alt+X", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_3->setText(QApplication::translate("MainWindow", "\320\236 \321\204\320\260\320\272\321\202\320\276\321\200\320\270\320\260\320\273\320\265...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_3->setShortcut(QApplication::translate("MainWindow", "Alt+N", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_5->setText(QApplication::translate("MainWindow", "\320\236 \321\207\320\270\321\201\320\273\320\260\321\205 \320\244\320\270\320\261\320\276\320\275\320\260\321\207\321\207\320\270", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_5->setShortcut(QApplication::translate("MainWindow", "Alt+F", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_7->setText(QApplication::translate("MainWindow", "\320\236\320\261 \320\260\320\262\321\202\320\276\321\200\320\265...", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "\320\241\320\270\321\201\321\202\320\265\320\274\321\213 \321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217...", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        action_6->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        action_10->setText(QApplication::translate("MainWindow", "\320\236 \321\201\320\270\321\201\321\202\320\265\320\274\320\260\321\205 \321\201\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217...", Q_NULLPTR));
        menu->setTitle(QApplication::translate("MainWindow", "\320\224\320\265\320\274\320\276", Q_NULLPTR));
        menu_2->setTitle(QApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
