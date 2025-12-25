#pragma once
#include "Rook.h"
#include "Bishop.h"

class Queen : public virtual Rook, public virtual Bishop
{
public:
    // Constructors
    Queen(bool c, short loc);
    Queen();        // Default

    // Destructor
    ~Queen();
};
