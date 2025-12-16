#include "Pawn.h"

// Constructor
Pawn::Pawn(char c, short pos) : Piece('P', c, pos) 
{
}

// Default constructor
Pawn::Pawn() : Piece('P', ' ', 0) 
{
}

// Destructor
Pawn::~Pawn() 
{
}

