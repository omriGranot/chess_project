#include "Move.h"

// Constructor
Move::Move(char m[4], char t, char c)
    : _type(t), _color(c) 
{
    _src = (m[0] - '0') * 10 + (m[1] - '0'); // Convert first two chars to int, "a1" -> 11
	_dest = (m[2] - '0') * 10 + (m[3] - '0'); // Convert last two chars to int, "a2" -> 12
}

// Default constructor
Move::Move() : _src(-1), _dest(-1), _type(' '), _color(' ') 
{
}

// Destructor
Move::~Move() 
{
}

// Getters
int Move::getSource() const 
{
    return _src;
}

int Move::getDest() const 
{
    return _dest;
}

char Move::getType() const 
{
    return _type;
}

char Move::getColor() const 
{
    return _color;
}

// Setters
void Move::setSource(int src) 
{
    _src = src;
}

void Move::setDest(int dst) 
{
    _dest = dst;
}

void Move::setType(char t) 
{
    _type = t;
}

void Move::setColor(char c) 
{
    _color = c;
}