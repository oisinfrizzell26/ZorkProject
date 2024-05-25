#include "mainwindow.h"
#include "./ui_mainwindow.h"

// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , startingRoom(nullptr)
    , northRoom(nullptr)
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
    delete northRoom;  // Clean up northern room
}

// Method to append text to the QPlainTextEdit
void MainWindow::appendOutput(const QString &message)
{
    ui->plainTextEdit->appendPlainText(message);  // Append the provided message to the plainTextEdit widget
}

// Slot for south button click
void MainWindow::on_southButton_clicked()
{
    appendOutput("South button clicked");  // Append message when the south button is clicked
}

// Slot for east button click
void MainWindow::on_eastButton_clicked()
{
    appendOutput("East button clicked");  // Append message when the east button is clicked
}

// Slot for west button click
void MainWindow::on_westButton_clicked()
{
    appendOutput("West button clicked");  // Append message when the west button is clicked
}

// Slot for north button click
void MainWindow::on_northButton_clicked()
{
    player.moveTo(northRoom);
    // Print the new room description
    appendOutput(player.lookAround());
}

// Function to create and link rooms
void MainWindow::createRooms()
{
    startingRoom = new room("You are in the starting room.");  // Initialize the starting room
    northRoom = new room("You are in the northern room.");  // Initialize the northern room

    // Set exits for the rooms
    startingRoom->setExit("north", northRoom);
    northRoom->setExit("south", startingRoom);
}
