#include "Piece.h"

// Constructor
Piece::Piece(char t, char c, int loc)
	: type(t), color(c), location(loc)
{
}

// Default constructor
Piece::Piece() : type(' '), color(' '), location(0)
{
}

// Destructor
Piece::~Piece() 
{
}

// Getters
char Piece::getType() const 
{
	return type;
}

char Piece::getColor() const 
{
	return color;
}

short Piece::getLocation() const
{
	return location;
}



// Setters
void Piece::setType(char t) 
{
	type = t;
}

void Piece::setColor(char c) 
{
	color = c;
}

void Piece::setLocation(int loc)
{
	location = loc;
}


