#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>

class item
{
public:
    item(std::string inDescription, int inWeightGrams);
    void setWeight(int inWeightGrams);
    std::string getDescription() const { return description; }
    int getWeight() const { return weightGrams; }




private:
    std::string description;
    int weightGrams;
};

#endif // ITEM_H
