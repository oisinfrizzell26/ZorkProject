#ifndef PLAYER_H
#define PLAYER_H


#include "Room.h"

class Player
{
public:
    // Constructor: Initializes the player with no current room
    Player();

    // Moves the player to a new room
    void moveTo(room *newRoom);

    // Returns the description of the current room, or a default message if the player is not in a room
    QString lookAround() const;
    room* getCurrentRoom() const;

private:
    room *currentRoom;  // The current room the player is in
};

#endif // PLAYER_H
