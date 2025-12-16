#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:
    // Constructors
    Rook(char c, short pos);
    Rook();        // Default

    // Destructor
    ~Rook();
};
