#ifndef ARITH_SHIFT_RIGHT_H
#define ARITH_SHIFT_RIGHT_H
#include "Command.h"


/**
 * @brief impliments the "ASR" operation using the Command design pattern
 * 
 */
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