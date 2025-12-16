#include "MoveException.h"

// Constructor
MoveException::MoveException(const std::string& msg) : message(msg) 
{
}

// Get error message
const char* MoveException::what() const 
{
    return message.c_str();
}

// Destructor
MoveException::~MoveException() 
{
}