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
    
	// Returns all legal moves for this piece
	std::vector<short> getLegalMoves(const Board& b) const override;
};
