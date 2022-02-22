#include "LogicalShiftLeft.h"

LogicalShiftLeft::LogicalShiftLeft()
{
    
}

LogicalShiftLeft::LogicalShiftLeft(std::string arg1, std::string arg2)
{
    arg1 = arg1;
    arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string LogicalShiftLeft::execute()
{

    u_int32_t result = iArg1 << 1;

    return intToHex(result);

}

