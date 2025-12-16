#pragma once
#include <string>

class Piece 
{
private:
    char type;     
    char color;   


public:
    // Constructors
    Piece(char t, char c, int pos);
    Piece();  // Default

    // Destructor
    ~Piece();

    // Getters
    char getType() const;
    char getColor() const;


    // Setters
    void setType(char t);
    void setColor(char c);
  
};
