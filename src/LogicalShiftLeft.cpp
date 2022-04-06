#include "LogicalShiftLeft.h"

LogicalShiftLeft::LogicalShiftLeft()
{
    
}

LogicalShiftLeft::LogicalShiftLeft(std::string arg1, std::string arg2, std::string rString)
{
    arg1 = arg1;
    arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
    LogicalShiftLeft::rString = rString;
}

std::string LogicalShiftLeft::execute()
{

    uint32_t result = iArg1 << 1;

    return intToHex(result);

}

