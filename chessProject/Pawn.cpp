#include "Pawn.h"

// Constructor
Pawn::Pawn(char c, short loc) : Piece('P', c, loc) 
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


