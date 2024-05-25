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
