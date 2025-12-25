#include "Piece.h"

// Constructor
Piece::Piece(char t, bool c, int loc)
	: _type(t), _color(c), _location(loc)
{
}

// Default constructor
Piece::Piece() : _type(' '), _color(true), _location(0)
{
}

// Destructor
Piece::~Piece() 
{
}

// Getters
char Piece::getType() const 
{
	return _type;
}

bool Piece::getColor() const 
{
	return _color;
}

short Piece::getLocation() const
{
	return _location;
}



// Setters
void Piece::setType(char t) 
{
	_type = t;
}

void Piece::setColor(bool c)
{
	_color = c;
}

void Piece::setLocation(int loc)
{
	_location = loc;
}

bool Piece::checkCheck(const Board& b) const
{
	bool pointsToKing = false;
	std::vector<short> legalMoves = this->getLegalMoves(b);
	for(int i = 0; i < legalMoves.size(); i++)
	{
		Piece* pieceAtDest = b.getPieceAt(legalMoves[i]);
		if(pieceAtDest && pieceAtDest->getType() == 'K' && pieceAtDest->getColor() != this->getColor())
		{
			pointsToKing = true;
			break;
		}
	}
	return pointsToKing;
}

std::vector<short> Piece::getSquares(const Board& b, const short startLoc, const short change) const
{
	int i = 0;
	std::vector<short> legalMoves;
	for (i = startLoc; Move::checkLocationValidity(i); i += change)
	{
		Piece* pieceAtDest = b.getPieceAt(i);
		if (!pieceAtDest)
		{
			legalMoves.push_back(i);
		}
		else
		{
			if (pieceAtDest->getColor() != this->getColor())
			{
				legalMoves.push_back(i);
			}
			break;
		}
	}
	return legalMoves;
}


