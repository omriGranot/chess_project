#pragma once

#include "Piece.h"
#include "Move.h"
#include <vector>


class Board
{
public:
	Board();
	~Board();
	Piece* getPieceAt(int row, int col) const;
	void movePiece(const Move& move);
private:
	std::vector<std::vector<Piece*>> board;
};