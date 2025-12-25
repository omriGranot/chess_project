#pragma once
#include "Piece.h"

class Bishop : public Piece
{
public:
    // Constructors
    Bishop(bool c, short loc);
    Bishop(); 
    
	std::vector<short> getLegalMoves(const Board& b) const override;

    // Destructor
    ~Bishop();
};
