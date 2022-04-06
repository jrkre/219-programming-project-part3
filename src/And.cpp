#include "And.h"

And::And()
{

}

And::And(std::string arg1, std::string arg2, std::string rString)
{
    And::rString = rString;
    And::arg1 = arg1;
    And::arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string And::execute()
{

    uint32_t result = iArg1 & iArg2;

    return intToHex(result);

}

