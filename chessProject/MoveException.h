#pragma once

#include <string>
#include <exception>

class MoveException : std::exception
{
public:
    // Constructor
    MoveException();

    // Get error message
    const char* what() const;
};

