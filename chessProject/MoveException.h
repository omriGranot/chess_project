#pragma once

#include <string>
#include <exception>

class MoveException : std::exception
{
private:
	int _code;
public:
    // Constructor
    MoveException(int code);

    //get code
    int getCode() const;

    // Get error message
    const char* what() const;
};

