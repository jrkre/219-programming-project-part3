#ifndef ARITH_SHIFT_RIGHT_H
#define ARITH_SHIFT_RIGHT_H
#include "Command.h"

class ArithShiftRight : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    ArithShiftRight();
    ArithShiftRight(std::string arg1, std::string arg2);

    std::string execute();
};

#endif