#include "ArithShiftRight.h"

ArithShiftRight::ArithShiftRight()
{

}

ArithShiftRight::ArithShiftRight(std::string arg1, std::string arg2)
{
    arg1 = arg1;
    arg2 = arg2;
    iArg1 = hexToInt(arg1);
    iArg2 = hexToInt(arg2);
}


std::string ArithShiftRight::execute()
{

    //todo: make this correct IT IS WRONG RIGHT NOW
    u_int32_t result = iArg1 >> 1;

    return intToHex(result);

}

