#include "entity.h"

Entity::Entity(const QString& name) : name(name) {} //constructor

QString Entity::getName() const { //getter
    return name;
}
