#include "StandardMapGenerator.h"

QString StandardMapGenerator::generateMap() const {
    return " [Map]\n\n             "
           "   [Treasure room]        \n"
           "            |         \n"
           "            |         \n"
           "   [Courtyard] --- [Armory] --- [Library]\n"
           "                                     |         \n"
           "                                     |         \n"
           "    [Bedroom] --- [Great hall] --- [Balcony]\n"
           "                                     |         \n"
           "                                     |         \n"
           "     [Outside] --- [Hallway] --- [Deadend]\n"
           "                                     |         \n"
           "                                     |         \n"
           "                              [Spawn]        \n";
}

