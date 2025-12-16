#include "MoveException.h"

// Constructor
MoveException::MoveException()
{
}

// Get error message
const char* MoveException::what() const 
{
    return "This move is ileagal!";
}

