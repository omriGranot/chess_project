#pragma once
#include "Piece.h"

class King : public Piece
{
public:
    // Constructors
    King(char c, short pos);
    King();        // loc

    // Destructor
    ~King();

};
