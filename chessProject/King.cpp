#include "King.h"

// Constructor
King::King(char c, short loc) : Piece('K', c, loc) 
{
}

// Default constructor
King::King() : Piece('K', ' ', 0) 
{
}

// Destructor
King::~King() 
{
}

std::vector<short> King::getLegalMoves(const Board& b) const
{
	short loc = this->getLocation();
	short locToCheck = 0;
	std::vector<short> legalMoves;
	for (int i = -1; i < 2; i++)
	{
		for (int j = -1; j < 2; j++)
		{
			locToCheck = loc + i * 10 + j;
			if(Move::checkLocationValidity(locToCheck))
			{
				Piece* pieceAtDest = b.getPieceAt(locToCheck / 10, locToCheck % 10);
				if (!pieceAtDest || pieceAtDest->getColor() != this->getColor())
				{
					legalMoves.push_back(locToCheck);
				}
			} 
		}
	}
	return legalMoves;
}
