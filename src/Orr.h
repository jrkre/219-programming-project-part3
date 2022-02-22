#ifndef ORR_H
#define ORR_H
#include "Command.h"

/**
 * @brief impliments the "ORR" operation using the Command design pattern
 * 
 */
class Orr : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    Orr();
    Orr(std::string arg1, std::string arg2);

    std::string execute();
};

#endif