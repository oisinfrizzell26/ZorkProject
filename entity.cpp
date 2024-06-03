#include "entity.h"

Entity::Entity(const QString& name) : name(name) {}

QString Entity::getName() const {
    return name;
}
