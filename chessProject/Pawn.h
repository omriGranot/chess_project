#pragma once
#include "Piece.h"

class Pawn : public Piece
{
public:
    // Constructors
    Pawn(char c);  
    Pawn();        // Default

    // Destructor
    ~Pawn();
};
