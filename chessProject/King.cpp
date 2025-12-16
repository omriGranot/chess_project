#include "King.h"

// Constructor
King::King(char c, short loc) : Piece('K', c, loc) 
{
}

// Default constructor
King::King() : Piece('K', ' ', 0) 
{
}

// Destructor
King::~King() 
{
}
