#ifndef NPC_H
#define NPC_H

#include "entity.h"

class NPC : public Entity {
public:
    NPC(const QString& name);
    virtual QString interact() const;
};

#endif
