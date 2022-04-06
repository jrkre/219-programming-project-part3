#include "Move.h"

Move::Move()
{
    
}

Move::Move(std::string arg1, std::string arg2, std::string rString)
{
    Move::rString = rString;
    Move::arg1 = arg1;
    Move::arg2 = arg2;
    iArg2 = hexToInt(arg2);
}


std::string Move::execute()
{

    return arg2;

}
