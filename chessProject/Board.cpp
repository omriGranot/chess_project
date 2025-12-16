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
			if (board[i][j])
			{
				delete board[i][j];
			}
		}
	}
}

// Returns the pointer to the piece at the specified row and column
// Returns nullptr if the square is empty
Piece* Board::getPieceAt(int row, int col) const
{
	return board[row][col];
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
	if (board[dstRow][dstCol])
	{
		delete board[dstRow][dstCol];
	}
	// Move the piece to the destination square
	board[dstRow][dstCol] = piece;
	
	// Clear the source square
	board[srcRow][srcCol] = nullptr;
}
