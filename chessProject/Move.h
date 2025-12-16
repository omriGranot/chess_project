#pragma once
#include "Board.h"
#include "Piece.h"

class Move 
{
private:
    Piece* _movingPiece;    
    short _dest;            

public:
    // Constructor
    Move(char m[4], const Board& b);
    Move();

    // Destructor
    ~Move();

    bool checkValidity(const Board& b);

    // Getters
    short getSource() const;
    short getDest() const;
    char getType() const;
    char getColor() const;

    // Setters
    void setSourceAndDest(char m[4]);
    void setType(char t);
    void setColor(char c);

};

