#pragma once
#include <vector>

class Piece
{
private:
    char type;
    char color;
    short location;

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
    virtual std::vector<short> getLegalMoves() const = 0;
};
