#include "Queen.h" 

// Constructor
Queen::Queen(bool c, short loc) : Rook(c, loc), Bishop(c, loc) 
{
}

// Default constructor
Queen::Queen() : Rook(true, 0), Bishop(true, 0) 
{
}

// Destructor
Queen::~Queen() 
{
}
