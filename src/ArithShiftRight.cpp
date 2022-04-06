#include "ArithShiftRight.h"

ArithShiftRight::ArithShiftRight()
{

}

ArithShiftRight::ArithShiftRight(std::string arg1, std::string arg2, std::string rString)
{
    ArithShiftRight::rString = rString;
    ArithShiftRight::arg1 = arg1;
    ArithShiftRight::arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string ArithShiftRight::execute()
{

    //todo: make this correct IT IS WRONG RIGHT NOW
    uint32_t result = iArg1 >> 1;

    return intToHex(result);

}

