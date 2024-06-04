#ifndef MAPGENERATOR_H
#define MAPGENERATOR_H

#pragma once // advanced preproccesor ensure the file is included only once

#include <QString>

class MapGenerator {
public:
    MapGenerator() noexcept = default;
    virtual ~MapGenerator() noexcept = default;
    virtual QString generateMap() const = 0; // Pure virtual function
};

#endif // MAPGENERATOR_H
//this was only made to show of virtual functions and abstract classes in reality i could have just put map in string in mainwindow.cpp
