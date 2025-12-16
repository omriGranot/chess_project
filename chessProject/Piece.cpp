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

// Setters
void Piece::setType(char t) 
{
	type = t;
}

void Piece::setColor(char c) 
{
	color = c;
}
