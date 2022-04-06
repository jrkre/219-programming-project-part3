#ifndef REGISTER_H
#define REGISTER_H
#include <iostream>

class Register
{
private:

    static uint32_t ir0,ir1,ir2,ir3,ir4,ir5,ir6,ir7;

protected:

    int getRegisterNum(std::string rString);

public:
    Register();

    uint32_t getRegister(std::string rString);

    std::string getRegisterString(std::string rString);

    bool loadRegister(std::string rString, uint32_t value);
    
    ~Register(){}
};


#endif
