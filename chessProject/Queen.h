#pragma once
#include "Rook.h"
#include "Bishop.h"

class Queen : public virtual Rook, public virtual Bishop
{
public:
    // Constructors
    Queen(char c, short pos);
    Queen();        // Default

    // Destructor
    ~Queen();
};
