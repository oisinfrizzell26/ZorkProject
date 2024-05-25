#include "player.h"

// Constructor: Initializes the player with no current room
Player::Player() : currentRoom(nullptr) {}

// Moves the player to a new room
void Player::moveTo(room *newRoom) {
    currentRoom = newRoom;

}

// Returns the description of the current room, or a default message if the player is not in a room
QString Player::lookAround() const {
    return currentRoom ? currentRoom->getDescription() : "You are nowhere.";
}

room* Player::getCurrentRoom() const {
    return currentRoom;
}
