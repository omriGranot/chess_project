#pragma once
#include <vector>
#include "Board.h"

class Piece
{
private:
    char _type;
    char _color;
    short _location;

public:
    // Constructors
    Piece(char t, char c, int loc);
    Piece();  // Default

    // Virtual destructor (required for polymorphism)
    ~Piece();

    // Getters
    char getType() const;
    char getColor() const;
    short getLocation() const;

    // Setters
    void setType(char t);
    void setColor(char c);
    void setLocation(int loc);

    // Returns all legal moves for this piece
    virtual std::vector<short> getLegalMoves(const Board& b) const = 0;
    
};
