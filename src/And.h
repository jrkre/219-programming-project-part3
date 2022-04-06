#ifndef AND_H
#define AND_H
#include "Command.h"
#include <iostream>

/**
 * @brief impliments the "AND" operation using the Command design pattern
 * 
 */
class And : public Command
{
    std::string rString;
    std::string arg1;
    std::string arg2;
    uint32_t iArg1;
    uint32_t iArg2;

public:
    And();
    And(std::string arg1, std::string arg2, std::string rString);

    std::string getRString();

    std::string execute();
};

#endif