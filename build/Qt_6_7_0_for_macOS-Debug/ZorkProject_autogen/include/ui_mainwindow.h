/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *northButton;
    QPushButton *eastButton;
    QPushButton *westButton;
    QPushButton *southButton;
    QPlainTextEdit *plainTextEdit;
    QPushButton *mapButton;
    QPushButton *pickButton;
    QPushButton *inventoryButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        northButton = new QPushButton(centralwidget);
        northButton->setObjectName("northButton");
        northButton->setGeometry(QRect(330, 20, 100, 32));
        eastButton = new QPushButton(centralwidget);
        eastButton->setObjectName("eastButton");
        eastButton->setGeometry(QRect(440, 50, 100, 32));
        westButton = new QPushButton(centralwidget);
        westButton->setObjectName("westButton");
        westButton->setGeometry(QRect(220, 50, 100, 32));
        southButton = new QPushButton(centralwidget);
        southButton->setObjectName("southButton");
        southButton->setGeometry(QRect(330, 90, 100, 32));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(60, 240, 631, 291));
        mapButton = new QPushButton(centralwidget);
        mapButton->setObjectName("mapButton");
        mapButton->setGeometry(QRect(190, 130, 100, 32));
        pickButton = new QPushButton(centralwidget);
        pickButton->setObjectName("pickButton");
        pickButton->setGeometry(QRect(440, 130, 100, 32));
        inventoryButton = new QPushButton(centralwidget);
        inventoryButton->setObjectName("inventoryButton");
        inventoryButton->setGeometry(QRect(320, 130, 100, 32));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 37));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        northButton->setText(QCoreApplication::translate("MainWindow", "Go North", nullptr));
        eastButton->setText(QCoreApplication::translate("MainWindow", "Go East", nullptr));
        westButton->setText(QCoreApplication::translate("MainWindow", "Go West", nullptr));
        southButton->setText(QCoreApplication::translate("MainWindow", "Go South", nullptr));
        mapButton->setText(QCoreApplication::translate("MainWindow", "Map", nullptr));
        pickButton->setText(QCoreApplication::translate("MainWindow", "Pick Up Item", nullptr));
        inventoryButton->setText(QCoreApplication::translate("MainWindow", "Inventory", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
