#include "Move.h"
#include "MoveException.h"

bool Move::checkLocationValidity(short loc)
{
    return !(loc % 10 < 1 || loc / 10 < 1 || loc % 10 > 8 || loc / 10 > 8);
}

// Constructor
Move::Move(char m[4],bool color, const Board& b)
{
    setUp(m, color, b);
}

Move::Move() :
	_movingPiece(nullptr), _dest(0)
{
}

void Move::setUp(char m[4], bool color, const Board& b)
{
    if(m[2] == m[0] && m[3] == m[1])
    {
        throw MoveException(7);
	}
        
    if (m[0] - 'a' - 1 < 0 || m[0] - 'a' - 1 > 7 || m[1] - '0' - 1 < 0 || m[1] - '0' - 1 > 7)
    {
        throw MoveException(5);
    }
    _movingPiece = b.getPieceAt(m[1] - '0', m[0] - 'a');
    if (!_movingPiece || !_movingPiece->getColor() == color)
    {
        throw MoveException(2);
    }

    setDest(m);
}
// Destructor
Move::~Move() 
{
}

bool Move::checkValidity(const Board& b)
{
    std::vector<short> legalMoves = _movingPiece->getLegalMoves(b);
    if (!std::count(legalMoves.begin(), legalMoves.end(), _dest))
    {
		throw MoveException(6);
    }
    return true;
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

bool Move::getColor() const 
{
    return _movingPiece->getColor();
}

void Move::setDest(char m[4])
{
    _dest = (m[3] - '0') * 10 + (m[2] - 'a'); // Convert last two chars to int, "a2" -> 21
}

void Move::setDest(short dest)
{
	_dest = dest;
}

void Move::setMovingPiece(Piece* p)
{
	_movingPiece = p;
}

