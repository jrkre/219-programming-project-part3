#ifndef ORR_H
#define ORR_H
#include "Command.h"

/**
 * @brief impliments the "ORR" operation using the Command design pattern
 * 
 */
class Orr : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    Orr();
    Orr(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif