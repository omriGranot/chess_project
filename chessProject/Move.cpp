#include "Move.h"

// Constructor
Move::Move(int src, int dst, char t, char c)
    : source(src), dest(dst), type(t), color(c) 
{
}

// Default constructor
Move::Move() : source(-1), dest(-1), type(' '), color(' ') 
{
}

// Destructor
Move::~Move() 
{
}

// Getters
int Move::getSource() const 
{
    return source;
}

int Move::getDest() const 
{
    return dest;
}

char Move::getType() const 
{
    return type;
}

char Move::getColor() const 
{
    return color;
}

// Setters
void Move::setSource(int src) 
{
    source = src;
}

void Move::setDest(int dst) 
{
    dest = dst;
}

void Move::setType(char t) 
{
    type = t;
}

void Move::setColor(char c) 
{
    color = c;
}