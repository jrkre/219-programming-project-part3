#ifndef MOVE_H
#define MOVE_H
#include "Command.h"


/**
 * @brief impliments the "LSL" operation using the Command design pattern
 * 
 */
class Move : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    Move();
    Move(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif