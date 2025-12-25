#pragma once
#include <vector>
#include "Board.h"


template<typename T>
std::vector<T>& operator+=(std::vector<T>& a, const std::vector<T>& b)
{
    a.insert(a.end(), b.begin(), b.end());
    return a;
}
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
	std::vector<short> getSquares(const Board& b, const short startLoc,const short change) const;
    // Returns all legal moves for this piece
    virtual std::vector<short> getLegalMoves(const Board& b) const = 0;
    
};
