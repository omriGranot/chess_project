#include "Bishop.h"

// Constructor
Bishop::Bishop(bool c, short loc) : Piece('B', c, loc) 
{
}

// Default constructor
Bishop::Bishop() : Piece('B', true, 0) 
{
}

// Destructor
Bishop::~Bishop() 
{
}
