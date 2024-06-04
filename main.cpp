#include "mainwindow.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  // Create the application object
    MainWindow w;  // Create the main window object
    w.show();  // Show the main window


    return a.exec();  // Start the application event loop
}
