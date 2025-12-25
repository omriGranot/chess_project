#pragma once
#include "Piece.h"

class Rook : public Piece
{
public:
    // Constructors
    Rook(bool c, short pos);
    Rook();        // Default

    // Destructor
    ~Rook();
};
