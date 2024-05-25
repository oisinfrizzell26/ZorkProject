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

// Returns the neighboring room in a specified direction, or nullptr if none
room* room::getExit(const QString &direction) const {
    return exits.value(direction, nullptr);
}
