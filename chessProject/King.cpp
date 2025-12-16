#include "King.h"

// Constructor
King::King(char c, short pos) : Piece('K', c, pos) 
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
