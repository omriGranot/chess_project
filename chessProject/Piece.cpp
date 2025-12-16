#include "Piece.h"

// Constructor
Piece::Piece(char t, char c, int loc)
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

char Piece::getColor() const 
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

void Piece::setColor(char c) 
{
	_color = c;
}

void Piece::setLocation(int loc)
{
	_location = loc;
}


