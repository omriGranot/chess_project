#pragma once
#include <vector>

class Piece
{
private:
    char type;
    char color;
    short position;

public:
    // Constructors
    Piece(char t, char c, int pos);
    Piece();  // Default

    // Virtual destructor (required for polymorphism)
    virtual ~Piece();

    // Getters
    char getType() const;
    char getColor() const;
    short getPosition() const;

    // Setters
    void setType(char t);
    void setColor(char c);
    void setPosition(int pos);

    // Returns all legal moves for this piece
    virtual std::vector<short> getLegalMoves() const = 0;
};
