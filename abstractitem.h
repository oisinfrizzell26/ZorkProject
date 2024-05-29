#ifndef ABSTRACTITEM_H
#define ABSTRACTITEM_H

#include <string>
#include <iostream>

class AbstractItem {
public:
    virtual ~AbstractItem() = default; // Virtual destructor
    virtual void use() const = 0; // Pure virtual function
};

#endif // ABSTRACTITEM_H
