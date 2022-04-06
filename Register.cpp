#include "Register.h"

Register::Register()
{
    

}

uint32_t Register::ir0;
uint32_t Register::ir1;
uint32_t Register::ir2;
uint32_t Register::ir3;
uint32_t Register::ir4;
uint32_t Register::ir5;
uint32_t Register::ir6;
uint32_t Register::ir7;

int Register::getRegisterNum(std::string registerString)
{
    if (registerString == "r0")
    {
        return 0;
    }
    else if (registerString == "r1")
    {
        return 1;
    }
    else if (registerString == "r2")
    {
        return 2;
    }
    else if (registerString == "r3")
    {
        return 3;
    }
    else if (registerString == "r4")
    {
        return 4;
    }
    else if (registerString == "r5")
    {
        return 5;
    }
    else if (registerString == "r6")
    {
        return 6;
    }
    else if (registerString == "r7")
    {
        return 7;
    }
    else
    {
        return -1;
    }

}

bool Register::loadRegister(std::string registerString, uint32_t value)
{
    int rNum = getRegisterNum(registerString);
    switch (rNum)
    {
        case 0:
            std::cout << "Register r0 was changed to: " << value << std::endl;
            ir0 = value;
            break;
        case 1:
            std::cout << "Register r1 was changed to: " << value << std::endl;
            ir1 = value;
            break;
        case 2:
            std::cout << "Register r2 was changed to: " << value << std::endl;
            ir2 = value;
            break;
        case 3:
            std::cout << "Register r3 was changed to: " << value << std::endl;
            ir3 = value;
            break;
        case 4:
            std::cout << "Register r4 was changed to: " << value << std::endl;
            ir4 = value;
            break;
        case 5:
            std::cout << "Register r5 was changed to: " << value << std::endl;
            ir5 = value;
            break;
        case 6:
            std::cout << "Register r6 was changed to: " << value << std::endl;
            ir6 = value;
            break;
        case 7:
            std::cout << "Register r7 was changed to: " << value << std::endl;
            ir7 = value;
            break;
        default:
            break;
    }
}

uint32_t Register::getRegister(std::string rString)
{
    int rNum = getRegisterNum(rString);

    switch (rNum)
    {
        case 0:
            return ir0;
            break;
        case 1:
            return ir1;
            break;
        case 2:
            return ir2;
            break;
        case 3:
            return ir3;
            break;
        case 4:
            return ir4;
            break;
        case 5:
            return ir5;
            break;
        case 6:
            return ir6;
            break;
        case 7:
            return ir7;
            break;
        default:
            break;
    }
}