#ifndef AND_H
#define AND_H
#include "Command.h"
#include <iostream>

class And : public Command
{

    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    And();
    And(std::string arg1, std::string arg2);

    std::string execute();
};

#endif