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

std::vector<short> Rook::getLegalMoves(const Board& b) const
{
	short loc = this->getLocation();
	std::vector<short> legalMoves;
	legalMoves += getSquares(b, loc, 10);
	legalMoves += getSquares(b, loc, -10);
	legalMoves += getSquares(b, loc, 1);
	legalMoves += getSquares(b, loc, -1);
	return legalMoves;
}
