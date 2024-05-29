#ifndef PLAYER_H
#define PLAYER_H

#include"abstractitem.h"
#include "room.h"


class Player
{
public:

    Player();
    // Constructor: Initializes the player with no current room

    void moveTo(room *newRoom);
    // Moves the player to a new room

    QString lookAround() const;
     // Returns the description of the current room, or a default message if the player is not in a room

    room* getCurrentRoom() const;

    QString pickUpItem();
    // method for picking up an item

    QString listInventory() const;
    bool hasItem(const std::string &itemName) const; // checks if you have item for picking up item
    bool hasDoorkey() const;
    void useItem(const std::string &itemName) const;


private:
    room *currentRoom;  // The current room the player is in
    std::vector<item> inventory;


};

#endif // PLAYER_H
