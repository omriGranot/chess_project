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

// Returns all legal moves for the Bishop
std::vector<short> Bishop::getLegalMoves(const Board& b) const 
{
	short loc = this->getLocation();
	std::vector<short> legalMoves;
	legalMoves += getSquares(b, loc, 11);
	legalMoves += getSquares(b, loc, -11);
	legalMoves += getSquares(b, loc, 9);
	legalMoves += getSquares(b, loc, -9);
	return legalMoves;
}
