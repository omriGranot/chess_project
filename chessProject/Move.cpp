#include "Move.h"
#include "MoveException.h"

bool Move::checkLocationValidity(short loc)
{
    return !(loc % 10 < 1 || loc / 10 < 1 || loc % 10 > 8 || loc / 10 > 8);
}

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

	setDest(m);
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

void Move::setDest(char m[4])
{
    _dest = (m[3] - '0') * 10 + (m[2] - 'a'); // Convert last two chars to int, "a2" -> 12
}

