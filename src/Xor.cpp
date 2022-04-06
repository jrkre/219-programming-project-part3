#include "Xor.h"

Xor::Xor()
{

}

Xor::Xor(std::string arg1, std::string arg2, std::string rString)
{
    Xor::rString = rString;
    arg1 = arg1;
    arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string Xor::execute()
{

    uint32_t result = iArg1 ^ iArg2;

    return intToHex(result);

}

