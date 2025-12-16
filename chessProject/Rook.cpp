#include "Rook.h" 

// Constructor
Rook::Rook(char c, short loc) : Piece('R', c, loc) 
{
}	

// Default constructor
Rook::Rook() : Piece('R', ' ', 0) 
{
}

// Destructor
Rook::~Rook() 
{
}
