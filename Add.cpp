#include "Add.h"


Add::Add(std::string commandString, std::string arg1, std::string arg2)
{
    Add::commandString = commandString;
    Add::arg1 = arg1;
    Add::arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}

std::string Add::addParams() 
{
    if ((long)iArg1 + iArg2 > 4294967295)
    {
        return intToHex(0);
    }
    else
    {
        return intToHex(iArg1 + iArg2);
    }
}

std::string Add::reverseString(std::string input)
{
    std::string out;
    for (int i = 0; i < input.length(); i++)
    {
        out += input[i];
    }
    return out;
}

int Add::hexToInt(std::string hex)
{
    return stol(hex,0,16);
}

std::string Add::intToHex(u_int32_t in)
{
    std::stringstream stream;
    stream << "0x" << std::setfill('0') << std::setw(sizeof(u_int32_t)*2) << std::hex << in;
    return stream.str();
}

std::string Add::execute()
{
    return addParams();
}
