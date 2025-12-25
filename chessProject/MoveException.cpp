#include "MoveException.h"

// Constructor
MoveException::MoveException(int code)
{
    _code = code;
}

int MoveException::getCode() const
{
    return _code;
}

// Get error message
const char* MoveException::what() const 
{
    switch (_code)
    {
        case 2:
		    return "Invalid move: No piece of this color at source location.";
            break;

        case 3:
			return "Invalid move: Piece at destination is of the same color.";
            break;

        case 4:
			return "Invalid move: Move puts or leaves own king in check.";
            break;

        case 5:
			return "Invalid move: coordination out of bounds.";
            break;
        
        case 6:
			return "Invalid move: Piece cannot move that way.";
            break;
        
        case 7:
			return "Invalid move: src and dest are the same.";
            break;
        default:
            return "Unknown move exception.";
			break;

    }
}

