#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "Command.h"

/**
 * @brief impliments the "SUB" operation using the Command design pattern
 * 
 */
class Subtract : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    Subtract();
    Subtract(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif