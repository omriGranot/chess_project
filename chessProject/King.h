#pragma once
#include "Piece.h"

class King : public Piece
{
public:
    // Constructors
    King(bool c, short loc);
    King();        // loc

    // Destructor
    ~King();
	std::vector<short> getLegalMoves(const Board& b) const override;
};
