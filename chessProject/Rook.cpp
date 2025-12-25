#include "Rook.h" 

// Constructor
Rook::Rook(bool c, short loc) : Piece('R', c, loc) 
{
}	

// Default constructor
Rook::Rook() : Piece('R', true, 0) 
{
}

// Destructor
Rook::~Rook() 
{
}
