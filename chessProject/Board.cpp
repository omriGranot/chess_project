#include "Board.h"

Board::Board()
{
}

//  Destructor- delete all pieces on the board to free memory
Board::~Board()
{
	for(int i = 0;i < 8; ++i)
	{
		for(int j = 0; j < 8; ++j)
		{
			if (_board[i][j])
			{
				delete _board[i][j];
			}
		}
	}
}

// Returns the pointer to the piece at the specified row and column
// Returns nullptr if the square is empty
Piece* Board::getPieceAt(int row, int col) const
{
	return _board[row][col];
}

Piece* Board::getPieceAt(int loc) const
{
	return getPieceAt(loc / 10, loc % 10);
}

// Convert the source and destination from Move's integer format to row and column
void Board::movePiece(const Move& move)
{
	short srcRow = move.getSource() / 10;
	short dstRow = move.getDest() / 10;
	short srcCol = move.getSource() % 10;
	short dstCol = move.getDest() % 10;

	// Get the piece at the source square
	Piece* piece = getPieceAt(srcRow, srcCol);
	if (_board[dstRow][dstCol])
	{
		delete _board[dstRow][dstCol];
	}
	// Move the piece to the destination square
	_board[dstRow][dstCol] = piece;
	
	// Clear the source square
	_board[srcRow][srcCol] = nullptr;
}
