#ifndef TESTREMOVE_H
#define TESTREMOVE_H

#include <string>
#include <iostream>

class abstractItem {
public:
    virtual ~abstractItem() = default; // Virtual destructor
    virtual void use() const = 0; // Pure virtual function
};

#endif // TESTREMOVE_H
