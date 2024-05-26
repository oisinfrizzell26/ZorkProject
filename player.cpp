#include "player.h"


// Constructor: Initializes the player with no current room
Player::Player() : currentRoom(nullptr) {}

// Moves the player to a new room
void Player::moveTo(room *newRoom) {
    currentRoom = newRoom;

}

// Returns the description of the current room, or a default message if the player is not in a room
QString Player::lookAround() const {
 if (currentRoom) {
        QString description = currentRoom->getDescription();
        QString itemsList = currentRoom->listItems();
        if (!itemsList.isEmpty()) {
            description += "\nItems in the room: " + itemsList;
        } else {
            description += "\nThere are no items in the room.";
        }
        return description;
    } else {
        return "You are nowhere.";
    }







}

room* Player::getCurrentRoom() const {
    return currentRoom;
}

void Player::pickUpItem(){
    if(currentRoom && !currentRoom->items.empty()){
        inventory.push_back(currentRoom->items.back());
        currentRoom->items.pop_back();

    }

}

QString Player::listInventory() const {
    QString inventoryList;
    if(inventory.empty()){
        inventoryList = "Your inventory is empty";
    }else{
        for(const item &it : inventory){
            inventoryList += QString::fromStdString(it.getDescription()) + "\n";
        }
    }
    return inventoryList;

}
