#ifndef ROOM_H
#define ROOM_H

#include <QString>
#include <QMap>
#include <vector>
#include "item.h"

class room
{
public:
    // Constructor: Initializes the room with a description
    room(const QString &description);

    // Returns the description of the room
    QString getDescription() const;

    // Sets an exit in a specified direction to a neighboring room
    void setExit(const QString &direction, room *neighbor);
    void setExits(room *north, room *east, room *south, room *west);

    // Returns the neighboring room in a specified direction, or nullptr if none
    room* getExit(const QString &direction) const;

    void addItem(const item &item);

    QString listItems() const;
    std::vector<item> items;

private:
    QString description;  // Description of the room
    QMap<QString, room*> exits;  // Maps directions to neighboring rooms

};

#endif // ROOM_H
