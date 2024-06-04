#ifndef STANDARD_MAP_GENERATOR_H
#define STANDARD_MAP_GENERATOR_H

#include "MapGenerator.h"

class StandardMapGenerator : public MapGenerator {
public:
    StandardMapGenerator() noexcept = default;
    ~StandardMapGenerator() noexcept override = default;
    QString generateMap() const override; // Override the pure virtual function
};

#endif
