#include "Board.h"

Board::Board()
{
}

Board::~Board()
{
	for(int i = 0;i < 8; ++i)
	{
		for(int j = 0; j < 8; ++j)
		{
			if (board[i][j])
			{
				delete board[i][j];
			}
		}
	}
}

Piece* Board::getPieceAt(int row, int col) const
{
	return board[row][col];
}

void Board::movePiece(const Move& move)
{
	short srcRow = move.getSource() / 10;
	short dstRow = move.getDest() / 10;
	short srcCol = move.getSource() % 10;
	short dstCol = move.getDest() % 10;
	Piece* piece = getPieceAt(srcRow, srcCol);
	if (board[dstCol][dstCol])
	{
		delete board[dstRow][dstCol];
	}
	board[dstRow][dstCol] = piece;
}
