#include "guide.h"

Guide::Guide(const QString& name) : NPC(name) {}

QString Guide::interact() const {
    QString map = generateMap();

    return "Guide: Welcome to the game!\n" + map + "\nYou are currently in spawn.";
}
