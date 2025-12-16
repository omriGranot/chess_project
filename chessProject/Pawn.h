#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
    // Constructors
    Pawn(char c, short pos);
    Pawn();        // Default

    // Destructor
    ~Pawn();
};
