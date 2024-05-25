#include "mainwindow.h"
#include "./ui_mainwindow.h"

// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , startingRoom(nullptr)
    , a(nullptr)
{
    ui->setupUi(this);  // Setup UI components

    createRooms();  // Call the function to create and link rooms

    player.moveTo(startingRoom);  // Start the player in the starting room
    appendOutput(player.lookAround());  // Display the initial room description
}

// Destructor
MainWindow::~MainWindow()
{
    delete ui;  // Clean up UI
    delete startingRoom;  // Clean up starting room
    delete a;  // Clean up northern room
}

// Method to append text to the QPlainTextEdit
void MainWindow::appendOutput(const QString &message)
{
    ui->plainTextEdit->appendPlainText(message);  // Append the provided message to the plainTextEdit widget
}

// Slot for south button click
void MainWindow::on_southButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* southRoom = currentRoom->getExit("south");
    if (southRoom != nullptr) {
        player.moveTo(southRoom);
        appendOutput(player.lookAround());
    } else {
        appendOutput("You can't go south from here.");
    }
}

// Slot for east button click
void MainWindow::on_eastButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* eastRoom = currentRoom->getExit("east");
    if (eastRoom != nullptr) {
        player.moveTo(eastRoom);
        appendOutput(player.lookAround());
    } else {
        appendOutput("You can't go east from here.");
    }
}
// Slot for west button click
void MainWindow::on_westButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* westRoom = currentRoom->getExit("west");
    if (westRoom != nullptr) {
        player.moveTo(westRoom);
        appendOutput(player.lookAround());
    } else {
        appendOutput("You can't go west from here.");
    }
}

// Slot for north button click
void MainWindow::on_northButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();

    // Get the room to the north
    room* northRoom = currentRoom->getExit("north");

    // Move the player to the north room if it exists
    if (northRoom != nullptr) {
        player.moveTo(northRoom);
        // Print the new room description
        appendOutput(player.lookAround());
    } else {
        appendOutput("You can't go north from here.");
    }
}

// Function to create and link rooms
void MainWindow::createRooms()
{
    startingRoom = new room("You are in the starting roomdfsf.");  // Initialize the starting room
    a = new room("You are in room a");
    b = new room("You are in room b");    // Initialize the northern room
    c = new room("You are in room c");
    d = new room("You are in room d");
    e = new room("You are in room e");


    // Set exits for the rooms n e s w
    startingRoom->setExits(a, nullptr,nullptr,nullptr);
    a->setExits(nullptr, b, startingRoom, c);
    b->setExits(nullptr, nullptr, nullptr, a);
    c->setExits(nullptr, a, nullptr, nullptr);

}
