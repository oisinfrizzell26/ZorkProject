#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <exception>
#include <iostream>
#include <string>

using std::exception;
using std::cerr;
using std::string;

class CustomException : public exception {
public:
    CustomException(const string& message) : message(message) {} // Takes a string as an argument to initialize the error message

    virtual const char* what() const noexcept override {
        cerr << "Exception: " << message << std::endl;  // Print the message to the terminal
        return message.c_str();
    }

private:
    string message;
};

#endif // CUSTOMEXCEPTION_H
