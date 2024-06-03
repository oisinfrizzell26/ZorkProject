#include "item.h"

item::item (std::string inDescription, int inWeightGrams) {
    description = inDescription;
    setWeight(inWeightGrams);

}

void item::setWeight(int inWeightGrams)
{

        weightGrams = inWeightGrams;
}
void item::use() const{
    std::cout<< "Using item: " << description << std::endl;
}

bool item::operator<(const item& other) const {
    return this->weightGrams < other.weightGrams;
}
