#ifndef XOR_H
#define XOR_H
#include "Command.h"

/**
 * @brief impliments the "XOR" operation using the Command design pattern
 * 
 */
class Xor : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    Xor();
    Xor(std::string arg1, std::string arg2);

    std::string execute();
};

#endif