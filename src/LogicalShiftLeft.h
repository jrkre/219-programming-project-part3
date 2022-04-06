#ifndef LOGICAL_SHIFT_LEFT_H
#define LOGICAL_SHIFT_LEFT_H
#include "Command.h"


/**
 * @brief impliments the "LSL" operation using the Command design pattern
 * 
 */
class LogicalShiftLeft : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    LogicalShiftLeft();
    LogicalShiftLeft(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif