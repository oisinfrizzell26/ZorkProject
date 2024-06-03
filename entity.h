#ifndef ENTITY_H
#define ENTITY_H

#include <QString>

class Entity {
public:
    Entity(const QString& name);
    QString getName() const;

protected:
    QString name;
};

#endif // ENTITY_H
