#pragma once

#include "Piece.h"
#include "Move.h"
#include <vector>

class Piece;
class Move; 

class Board
{
public:
    Board();    // Constructor
    ~Board();  // Destructor

    Piece* getPieceAt(int row, int col) const; // Returns the piece at the given position- or nullptr if empty
    Piece* getPieceAt(int loc) const; // Returns the piece at the given position- or nullptr if empty
    void movePiece(const Move& move);         // Moves a piece according to Move, could throw an exception if invalid
	bool isInCheck(bool color) const;        // Returns true if the given color is in check

private:
    std::vector<std::vector<Piece*>> _board;   // 8x8 board storing pointers to pieces, nullptr = empty square

};
