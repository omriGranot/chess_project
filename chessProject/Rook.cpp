#include "Rook.h" 

// Constructor
Rook::Rook(char c, short pos) : Piece('R', c, pos) 
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
