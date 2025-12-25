#pragma once
#include "Piece.h"

class Pawn : public Piece
{
private:
    bool _hasMoved;

public:
    // Constructors
    Pawn(bool c, short loc);
    Pawn();        // Default

    bool getHasMoved() const;
    void setHasMoved(bool moved);

	std::vector<short> getLegalMoves(const Board& b) const override;

    // Destructor
    ~Pawn();
};
