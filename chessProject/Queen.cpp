#include "Queen.h"

// Constructor
Queen::Queen(char c) : Rook(c), Bishop(c) 
{
}

// Default constructor
Queen::Queen() : Rook(' '), Bishop(' ') 
{
}

// Destructor
Queen::~Queen() 
{
}
