#include "npc.h"

NPC::NPC(const QString& name) : Entity(name) {}

QString NPC::interact() const {
    return QString("NPC interaction with %1").arg(name);
}
