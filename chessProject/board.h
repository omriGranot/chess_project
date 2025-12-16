#pragma once

#include "Piece.h"
#include "Move.h"
#include <vector>

class Board
{
public:
    Board();    // Constructor
    ~Board();  // Destructor

    Piece* getPieceAt(int row, int col) const; // Returns the piece at the given position- or nullptr if empty
    void movePiece(const Move& move);         // Moves a piece according to Move, could throw an exception if invalid

private:
    std::vector<std::vector<Piece*>> board;   // 8x8 board storing pointers to pieces, nullptr = empty square

};
