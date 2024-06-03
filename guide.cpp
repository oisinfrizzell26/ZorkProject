#include "guide.h"

Guide::Guide(const QString& name) : NPC(name) {}

QString Guide::interact() const {
    return "Guide: Welcome to the game! Your goal is to unlock the treasure chest.";
}
