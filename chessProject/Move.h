#pragma once
#include "Board.h"

class Move 
{
private:
    short _src;    
    short _dest;       
    char _type;      
    char _color;     

public:
    // Constructor
    Move(char m[4], char t, char c);
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
    void setSource(int src);
    void setDest(int dst);
    void setType(char t);
    void setColor(char c);
};

