#pragma once
#include <vector>
#include "Board.h"

class Board;

class Piece
{
private:
    char _type;
    bool _color;
    short _location;

public:
    // Constructors
    Piece(char t, bool c, int loc);
    Piece();  // Default

    // Virtual destructor (required for polymorphism)
    ~Piece();

    // Getters
    char getType() const;
    bool getColor() const;
    short getLocation() const;

    // Setters
    void setType(char t);
    void setColor(bool c);
    void setLocation(int loc);
	bool checkCheck(const Board& b) const;
    // Returns all legal moves for this piece
    virtual std::vector<short> getLegalMoves(const Board& b) const = 0;
    
};
