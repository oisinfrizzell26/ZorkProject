#include "Room.h"

// Constructor: Initializes the room with a description
room::room(const QString &description) : description(description) {}

// Returns the description of the room
QString room::getDescription() const {
    return description;
}

// Sets an exit in a specified direction to a neighboring room
void room::setExit(const QString &direction, room *neighbor) {
    exits[direction] = neighbor;
}




void room::setExits(room *north, room *east, room *south, room *west) {
    if (north != nullptr) {
        setExit("north", north);
        north->setExit("south", this); // Automatically set reciprocal exit
    }
    if (east != nullptr) {
        setExit("east", east);
        east->setExit("west", this); // Automatically set reciprocal exit
    }
    if (south != nullptr) {
        setExit("south", south);
        south->setExit("north", this); // Automatically set reciprocal exit
    }
    if (west != nullptr) {
        setExit("west", west);
        west->setExit("east", this); // Automatically set reciprocal exit
    }


}

room* room::getExit(const QString &direction) const {
    return exits.value(direction, nullptr);
}

void room::addItem(const item &item){
    items.push_back(item);
}

QString room::listItems()const{
    QString itemList;
    for(const item &it : items){
        itemList += QString::fromStdString(it.getDescription()) + "\n";
    }//&it refers to each it in items class one by one
    return itemList;
}
