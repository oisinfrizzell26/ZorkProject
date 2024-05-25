#include "mainwindow.h"
#include <QApplication>
#include <QTimer>
#include <QString>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    // Create a QTimer to delay the output
    QTimer::singleShot(5000, [&w]() {
        w.appendOutput("Testing");
    });

    return a.exec();
}
