#pragma once

#include <string>

class MoveException 
{
private:
    std::string message;

public:
    // Constructor
    explicit MoveException(const std::string& msg);

    // Get error message
    const char* what() const;

    virtual ~MoveException();
};

