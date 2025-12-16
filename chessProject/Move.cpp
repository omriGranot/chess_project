#include "Move.h"
#include "MoveException.h"

// Constructor
Move::Move(char m[4], const Board& b)
{
    if (m[0] - 'a' - 1 < 0 || m[0] - 'a' - 1 > 7 || m[1] - '0' - 1 < 0 || m[1] - '0' - 1 > 7)
    {
        throw MoveException();
    }
	_movingPiece = b.getPieceAt(m[1] - '0', m[0] - 'a');
    if (!_movingPiece)
    {
		throw MoveException();
    }

	setSourceAndDest(m);
}

// Destructor
Move::~Move() 
{
}

// Getters
short Move::getSource() const 
{
    return _movingPiece->getLocation();
}

short Move::getDest() const 
{
    return _dest;
}

char Move::getType() const 
{
    return _movingPiece->getType();
}

char Move::getColor() const 
{
    return _movingPiece->getColor();
}

void Move::setSourceAndDest(char m[4])
{
    _src = (m[0] - '0') * 10 + (m[1] - '0'); // Convert first two chars to int, "a1" -> 11
    _dest = (m[2] - '0') * 10 + (m[3] - '0'); // Convert last two chars to int, "a2" -> 12
}

void Move::setType(char t)
{
    _type = t;
}

void Move::setColor(char c) 
{
    _color = c;
}

