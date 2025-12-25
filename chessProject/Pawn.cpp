#include "Pawn.h"

// Constructor
Pawn::Pawn(bool c, short loc) : Piece('P', c, loc) 
{
}

// Default constructor
Pawn::Pawn() : Piece('P', true, 0) 
{
}

// Destructor
Pawn::~Pawn() 
{
}


