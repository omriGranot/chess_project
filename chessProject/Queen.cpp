#include "Queen.h" 

// Constructor
Queen::Queen(char c, short loc) : Rook(c, loc), Bishop(c, loc) 
{
}

// Default constructor
Queen::Queen() : Rook(' ', 0), Bishop(' ', 0) 
{
}

// Destructor
Queen::~Queen() 
{
}
