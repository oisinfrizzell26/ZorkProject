#include "player.h"
#include "global.h"


void incrementMoves(){
    totalMoves++;
}


// Constructor: Initializes the player with no current room
Player::Player(const QString& name) : Entity(name), currentRoom(nullptr) {}




// Moves the player to a new room
void Player::moveTo(room* newRoom)
{
    if (newRoom != nullptr)
    {
        currentRoom = newRoom;
        incrementMoves();  // Increment the move count each time the player moves
    }
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

QString Player::pickUpItem() {
    if (currentRoom && !currentRoom->items.empty()) {
        item currentItem = currentRoom->items.back();
        if (currentItem.getDescription() == "Treasure Chest" && !hasItem("Key")) {
            return "You need a key to open the chest";
        }
        inventory.push_back(currentItem);
        currentRoom->items.pop_back();

        // Check if the item is "Treasure Chest" and return "Game Over"
        if (currentItem.getDescription() == "Treasure Chest") {
            return "Game Over. Total Moves: "+ QString::number(totalMoves);
        }

        return "Item picked up successfully";
    }
    return "No items to pick up";
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

bool Player::hasItem(const std::string &itemName) const {
    for (const item &it : inventory) {
        if (it.getDescription() == itemName) {
            return true;
        }
    }
    return false;
}

bool Player::hasDoorkey() const{
    return hasItem("doorKey");
}


void Player::useItem(const std::string &itemName) const {
    for (const item &it : inventory) {
        if (it.getDescription() == itemName) {
            it.use(); // Call the virtual function
            return;
        }
    }
    std::cout << "Item not found in inventory" << std::endl;
}
