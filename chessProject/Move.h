#pragma once
#include "Board.h"
#include "Piece.h"

class Move 
{
private:
    Piece* _movingPiece;    
    short _dest;   


public:

    bool static checkLocationValidity(short loc);

    // Constructor
    Move(char m[4], bool color, const Board& b);

    // Destructor
    ~Move();

	void setUp(char m[4], bool color, const Board& b);
    bool checkValidity(const Board& b);

    // Getters
    short getSource() const;
    short getDest() const;
    char getType() const;
    char getColor() const;

    // Setters
    void setDest(char m[4]);
    void setType(char t);
    void setColor(char c);

};

