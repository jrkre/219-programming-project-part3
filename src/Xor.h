#ifndef XOR_H
#define XOR_H
#include "Command.h"

/**
 * @brief impliments the "XOR" operation using the Command design pattern
 * 
 */
class Xor : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    Xor();
    Xor(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif