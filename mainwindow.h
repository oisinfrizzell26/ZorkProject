#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPlainTextEdit>
#include <QTimer>
#include "player.h"
#include "Room.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    // Constructor: Initializes the main window
    MainWindow(QWidget *parent = nullptr);
    // Destructor: Cleans up resources used by the main window
    ~MainWindow();

    // Method to append text to the QPlainTextEdit
    void appendOutput(const QString &message);

private slots:
    // Slots for handling button click events
    void on_southButton_clicked();
    void on_eastButton_clicked();
    void on_westButton_clicked();
    void on_northButton_clicked();

private:
    Ui::MainWindow *ui;  // Pointer to the UI elements defined in the .ui file
    Player player;  // The player object
    room *startingRoom;  // Pointer to the starting room
    room *a,*b,*c,*d,*e,*f,*g,*h,*i,*j;  // Pointer to the northern room

    // Function to create and link rooms
    void createRooms();
};

#endif // MAINWINDOW_H

