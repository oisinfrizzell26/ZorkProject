#include "npc.h"

NPC::NPC(const QString& name) : Entity(name) {}


//method for interacting
QString NPC::interact() const {
    return QString("NPC interaction with %1").arg(name);
}
