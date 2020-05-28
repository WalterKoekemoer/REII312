/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionWire;
    QAction *actionComponents;
    QAction *actionSimulate;
    QAction *actionExit;
    QAction *actionOpen;
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *Components;
    QPushButton *Wire;
    QPushButton *Simulate;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(400, 300);
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/icons8-add-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionWire = new QAction(MainWindow);
        actionWire->setObjectName(QStringLiteral("actionWire"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/icons8-wire-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionWire->setIcon(icon1);
        actionComponents = new QAction(MainWindow);
        actionComponents->setObjectName(QStringLiteral("actionComponents"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/icons8-heater-resistor-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionComponents->setIcon(icon2);
        actionSimulate = new QAction(MainWindow);
        actionSimulate->setObjectName(QStringLiteral("actionSimulate"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/icons8-electronics-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSimulate->setIcon(icon3);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/icons8-folder-50.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(10, 10, 311, 81));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Components = new QPushButton(frame);
        Components->setObjectName(QStringLiteral("Components"));
        Components->setGeometry(QRect(162, 10, 61, 61));
        Wire = new QPushButton(frame);
        Wire->setObjectName(QStringLiteral("Wire"));
        Wire->setGeometry(QRect(86, 10, 61, 61));
        Simulate = new QPushButton(frame);
        Simulate->setObjectName(QStringLiteral("Simulate"));
        Simulate->setGeometry(QRect(10, 10, 61, 61));
        Components->raise();
        Wire->raise();
        Simulate->raise();
        Components->raise();
        Wire->raise();
        Simulate->raise();
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 26));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionWire);
        menuFile->addAction(actionComponents);
        menuFile->addAction(actionSimulate);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionNew->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", Q_NULLPTR));
        actionWire->setText(QApplication::translate("MainWindow", "Wire", Q_NULLPTR));
        actionWire->setShortcut(QApplication::translate("MainWindow", "W", Q_NULLPTR));
        actionComponents->setText(QApplication::translate("MainWindow", "Components", Q_NULLPTR));
        actionComponents->setShortcut(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        actionSimulate->setText(QApplication::translate("MainWindow", "Simulate", Q_NULLPTR));
        actionSimulate->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", Q_NULLPTR));
        actionExit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        actionExit->setShortcut(QApplication::translate("MainWindow", "Esc", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionOpen->setShortcut(QApplication::translate("MainWindow", "Ctrl+O, Return", Q_NULLPTR));
        Components->setText(QString());
        Wire->setText(QString());
        Simulate->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
