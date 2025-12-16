#include "Bishop.h"

// Constructor
Bishop::Bishop(char c, short loc) : Piece('B', c, loc) 
{
}

// Default constructor
Bishop::Bishop() : Piece('B', ' ', 0) 
{
}

// Destructor
Bishop::~Bishop() 
{
}
