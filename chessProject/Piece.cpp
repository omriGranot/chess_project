#include "Piece.h"

// Constructor
Piece::Piece(char t, char c, int pos)
	: type(t), color(c) 
{
}

// Default constructor		
Piece::Piece() : type(' '), color(' ') 
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

short Piece::getPosition() const
{
	return position;
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

void Piece::setPosition(int pos)
{
	position = pos;
}


