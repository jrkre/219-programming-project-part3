#include "Add.h"


Add::Add(std::string arg1, std::string arg2)
{
    Add::arg1 = arg1;
    Add::arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}

std::string Add::addParams() 
{
    if ((long)iArg1 + iArg2 > 4294967295)
    {
        return Command::intToHex(0);
    }
    else
    {
        return Command::intToHex(iArg1 + iArg2);
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


std::string Add::execute()
{
    return addParams();
}
