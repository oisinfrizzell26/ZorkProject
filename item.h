#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <iostream>
#include "abstractitem.h"
class item : public AbstractItem
{
public:
    item(std::string inDescription, int inWeightGrams);
    void setWeight(int inWeightGrams);
    std::string getDescription() const { return description; }
    int getWeight() const { return weightGrams; }
    void use() const override; // this overrides the pure virtual function




private:
    std::string description;
    int weightGrams;
};

#endif // ITEM_H
