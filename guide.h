#ifndef GUIDE_H
#define GUIDE_H

#include "npc.h"
#include "standardmapgenerator.h"

class Guide : public NPC, public StandardMapGenerator {
public:
    Guide(const QString& name);
    QString interact() const override;
};

#endif // GUIDE_H
