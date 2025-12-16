#include "Queen.h" 

// Constructor
Queen::Queen(char c, short pos) : Rook(c, pos), Bishop(c, pos) 
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
