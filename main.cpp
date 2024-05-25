#include "mainwindow.h"
#include <QApplication>
#include <QTimer>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);  // Create the application object
    MainWindow w;  // Create the main window object
    w.show();  // Show the main window

    // Example: Create a QTimer to delay the output
    QTimer::singleShot(5000, [&w]() {
        w.appendOutput("Testing");  // Append the message "Testing" to the QPlainTextEdit after 5 seconds
    });

    return a.exec();  // Start the application event loop
}
