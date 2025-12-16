#pragma once

class Move 
{
private:
    int source;    
    int dest;       
    char type;      
    char color;     

public:
    // Constructor
    Move(int src, int dst, char t, char c);
    Move();

    // Destructor
    ~Move();

    bool checkValidity(const board b&);

    // Getters
    int getSource() const;
    int getDest() const;
    char getType() const;
    char getColor() const;

    // Setters
    void setSource(int src);
    void setDest(int dst);
    void setType(char t);
    void setColor(char c);
};

