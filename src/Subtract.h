#ifndef SUBTRACT_H
#define SUBTRACT_H
#include "Command.h"

class Subtract : public Command
{
    std::string arg1;
    std::string arg2;
    u_int32_t iArg1;
    u_int32_t iArg2;

public:
    Subtract();
    Subtract(std::string arg1, std::string arg2);

    std::string execute();
};

#endif