#ifndef NOT_H
#define NOT_H
#include "Command.h"

/**
 * @brief impliments the "NOT" operation using the Command design pattern
 * 
 */
class Not : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    Not();
    Not(std::string arg1, std::string arg2);

    std::string execute();
};

#endif