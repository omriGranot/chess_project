#include "Pawn.h"

// Constructor
Pawn::Pawn(bool c, short loc) : Piece('P', c, loc) 
{
}

// Default constructor
Pawn::Pawn() : Piece('P', true, 0) 
{
}

bool Pawn::getHasMoved() const
{
	return _hasMoved;
}


void Pawn::setHasMoved(bool moved)
{
	_hasMoved = moved;
}

// Destructor
Pawn::~Pawn() 
{
}



