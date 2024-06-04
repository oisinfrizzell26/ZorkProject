#ifndef ITEM_H
#define ITEM_H //item is a bit structure that contains one or more bit feilds

#include <string>
#include <iostream>
#include "abstractitem.h"

union ValueUnion { //union for future development
    int intValue;
    char charValue;
};


class item : public AbstractItem
{
public:
    item(std::string inDescription, int inWeightGrams);
    void setWeight(int inWeightGrams);
    std::string getDescription() const { return description; }
    int getWeight() const { return weightGrams; }
    void use() const override; // this overrides the pure virtual function

    bool operator<(const item& other) const; //operator overloading


    // Accessor methods for the union
    int getIntValue() const { return valueUnion.intValue; }
    char getCharValue() const { return valueUnion.charValue; }

private:
    std::string description;
    unsigned int weightGrams : 12;// bit field
    ValueUnion valueUnion; // Adding the union to the item class
};





#endif
