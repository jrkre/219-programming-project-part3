#ifndef LOGICAL_SHIFT_RIGHT_H
#define LOGICAL_SHIFT_RIGHT_H
#include "Command.h"


/**
 * @brief impliments the "LSR" operation using the Command design pattern
 * 
 */
class LogicalShiftRight : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    LogicalShiftRight();
    LogicalShiftRight(std::string arg1, std::string arg2);

    std::string execute();
};

#endif