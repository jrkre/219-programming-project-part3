#ifndef NOT_H
#define NOT_H
#include "Command.h"

/**
 * @brief impliments the "NOT" operation using the Command design pattern
 * 
 */
class Not : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    Not();
    Not(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif