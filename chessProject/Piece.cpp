#include "Piece.h"

// Constructor
Piece::Piece(char t, bool c, int loc)
	: _type(t), _color(c), _location(loc)
{
}

// Default constructor
Piece::Piece() : _type(' '), _color(' '), _location(0)
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

bool Piece::setColor(bool c) 
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
		Piece* pieceAtDest = b.getPieceAt(legalMoves[i] / 10, legalMoves[i] % 10);
		if(pieceAtDest && pieceAtDest->getType() == 'K' && pieceAtDest->getColor() != this->getColor())
		{
			pointsToKing = true;
			break;
		}
	}
}


