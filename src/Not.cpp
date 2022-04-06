#include "Not.h"

Not::Not()
{

}

Not::Not(std::string arg1, std::string arg2, std::string rString)
{
    Not::rString = rString;
    arg1 = arg1;
    arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string Not::execute()
{

    uint32_t result = ~ iArg1;

    return intToHex(result);

}

