#include "item.h"

item::item (std::string inDescription, int inWeightGrams) {
    description = inDescription;
    setWeight(inWeightGrams);

}

void item::setWeight(int inWeightGrams) //setter
{

        weightGrams = inWeightGrams;
}


void item::use() const{ //method to use item
    std::cout<< "Using item: " << description << std::endl;
}


//overload less-than operator for comparison
bool item::operator<(const item& other) const {
    return this->weightGrams < other.weightGrams;
}
