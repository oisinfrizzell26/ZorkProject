#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QApplication>
#include <QTimer>
#include <iostream>
#include "global.h"

int totalMoves = 0;


// Constructor
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , guide("Guide")
    , player("Player")  // Initialize Player with a name
        // Initialize Guide with a name
    , startingRoom(nullptr)
    , a(nullptr)
    , b(nullptr)
    , c(nullptr)
    , d(nullptr)
    , e(nullptr)
    , f(nullptr)
    , g(nullptr)
    , h(nullptr)
    , i(nullptr)
    , j(nullptr)

{
    ui->setupUi(this);  // Setup UI components
    QString welcomeMessage = guide.interact();  // Get welcome message
    appendOutput(welcomeMessage);

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
    delete b;
    delete c;
    delete d;
    delete e;
    delete f;
    delete g;
    delete h;
    delete i;
    delete j;
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
        if (southRoom->getDescription().contains("Balcony") && !player.hasDoorkey()) {
            appendOutput("You need the doorkey to enter the balcony.\n\n");
        } else {
            player.moveTo(southRoom);
            appendOutput(player.lookAround());
        }
    } else {
        appendOutput("You can't go south from here.\n\n");
    }
}

// Slot for east button click
void MainWindow::on_eastButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* eastRoom = currentRoom->getExit("east");
    if (eastRoom != nullptr) {
        if (eastRoom->getDescription().contains("Balcony") && !player.hasDoorkey()) {
            appendOutput("You need the doorkey to enter the balcony.\n\n");
        } else {
            player.moveTo(eastRoom);
            appendOutput(player.lookAround());
        }
    } else {
        appendOutput("You can't go east from here.\n\n");
    }
}
// Slot for west button click
void MainWindow::on_westButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* westRoom = currentRoom->getExit("west");
    if (westRoom != nullptr) {
        if (westRoom->getDescription().contains("Balcony") && !player.hasDoorkey()) {
            appendOutput("You need the doorkey to enter the balcony.\n\n");
        } else {
            player.moveTo(westRoom);
            appendOutput(player.lookAround());
        }
    } else {
        appendOutput("You can't go west from here.\n\n");
    }
}
// Slot for north button click
void MainWindow::on_northButton_clicked()
{
    room* currentRoom = player.getCurrentRoom();
    room* northRoom = currentRoom->getExit("north");
    if (northRoom != nullptr) {
        if (northRoom->getDescription().contains("Balcony") && !player.hasDoorkey()) {
            appendOutput("You need the doorkey to enter the balcony.\n\n");
        } else {
            player.moveTo(northRoom);
            appendOutput(player.lookAround());
        }
    } else {
        appendOutput("You can't go north from here.\n\n");
    }
}


void MainWindow::on_pickButton_clicked()
{
    if (player.getCurrentRoom()) {
        QString result = player.pickUpItem();
        appendOutput(result + "\n");
        appendOutput(player.lookAround());

        if (result == "Game Over") {
            // Additional logic for game over scenario, if needed
            appendOutput("Game Over\n");
        }
    }
}


void MainWindow::on_inventoryButton_clicked()
{
    appendOutput("Your inventory:\n"+ player.listInventory());

}




void MainWindow::on_mapButton_clicked()
{
     appendOutput(mapGenerator.generateMap());
}









// Function to create and link rooms
void MainWindow::createRooms()
{
    startingRoom = new room("Spawn \nYou are in a small dark room. There is barely any light and the room appears to be empty\n");  // Initialize the starting room

    a = new room("Great hall\nYou walk through the door and are amazed by what you see. It is a Great Hall you can't believe your eyes. You look around there is long rows of tables all leading to a Throne. You think to yourself... This must be where the king sat....\n");
    b = new room("Balcony\nYou enter a balcony. The view is great from here\n");
    c = new room("Bedroom\n You enter what appears to be the kings bedroom you see a shiny sword in the corner\n");
    d = new room("Hallway\n You have walked through the wooden door and are now in a long hallway.\n");
    e = new room("Deadend\nYou walk through the door there is nothing there.\n");
    f = new room("Armory\n You enter an armory. There is alot of weapons and armor lying around....\n");
    g = new room("Libary\n You enter the libary. Maybe there will be import information in one of these books...\n");
    h = new room("Courtyard\n You enter the courtyard. You see what appears to be a hidden door to your north\n");
    i = new room("Outside\n You walk through the door and appear to be outside. You turn around and look at the building you just came from it seems to be an old castle. You think to yourself.... Maybe theres some old treasure in here... You think about running away but your curious to see whats inside...\n");
    j = new room("Treasure Room\nYou see a tresure box ahead of you. You need a key to open it\n");


    // Set exits for the rooms n e s w
    startingRoom->setExits(d, nullptr,nullptr,nullptr);
    a->setExits(f, b, d, c);
    b->setExits(nullptr, nullptr, nullptr, a);
    c->setExits(nullptr, a, nullptr, nullptr);
    d->setExits(a, e, startingRoom, i);
    e->setExits(nullptr, nullptr, nullptr, d);
    f->setExits(nullptr, g, a, h);
    g->setExits(nullptr, nullptr, nullptr, f);
    h->setExits(j, f, nullptr, nullptr);
    i->setExits(nullptr, d, nullptr, nullptr);
    j->setExits(nullptr, nullptr, h, nullptr);







    b->addItem(item("Key", 2000));
    j ->addItem(item("Treasure Chest", 2000));

    i->addItem(item("doorKey",1000));
}















