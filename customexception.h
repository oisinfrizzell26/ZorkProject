#ifndef CUSTOMEXCEPTION_H
#define CUSTOMEXCEPTION_H

#include <exception>
#include <iostream>

class CustomException : public std::exception {
public:
    CustomException(const std::string& message) : message(message) {}

    virtual const char* what() const noexcept override {
        std::cerr << "Exception: " << message << std::endl;  // Print the message to the terminal
        return message.c_str();
    }

private:
    std::string message;
};

#endif // CUSTOMEXCEPTION_H
