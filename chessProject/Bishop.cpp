#include "Bishop.h"

// Constructor
Bishop::Bishop(char c, short pos) : Piece('B', c, pos) 
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
