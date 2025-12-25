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
    int i;
	short loc = this->getLocation();
	std::vector<short> legalMoves;
	getSquares(b, loc, 10);
	getSquares(b, loc, -10);
	getSquares(b, loc, 1);
	getSquares(b, loc, -1);

}
