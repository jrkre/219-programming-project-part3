#ifndef LOGICAL_SHIFT_LEFT_H
#define LOGICAL_SHIFT_LEFT_H
#include "Command.h"

class LogicalShiftLeft : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    LogicalShiftLeft();
    LogicalShiftLeft(std::string arg1, std::string arg2);

    std::string execute();
};

#endif