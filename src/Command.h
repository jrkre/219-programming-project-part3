#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <sstream>
#include <iomanip>

/**
 * @brief Interface to impliment a psuedo "command" design pattern
 * 
 */
class Command {


protected:
    /**
     * @brief Converts a hex string into an integer
     * 
     * @param hex string in hexadecimal format - preceded by "0x"
     * @return int hex nuber in integer format
     */
    /*int hexToInt(std::string hex)
    {
        long long num = stoll(hex,0,16);
        return num;
    }*/
    /**
     * @brief convert an integer to a hex string
     * 
     * @param in integer to be converted
     * @return std::string hex representation of integer
     */
    /*std::string intToHex(u_int32_t in)
    {
        std::stringstream stream;
        stream << "0x" << std::setfill('0') << std::uppercase << std::setw(sizeof(u_int32_t)*2) << std::hex << in;
        return stream.str();
    }*/

public:

    static uint32_t hexToInt(std::string hex)
    {
        if (hex != "")
        {
            long long num = stoll(hex,0,16);
            return num;
        }
        return 0;
    }

    static std::string intToHex(u_int32_t in)
    {
        std::stringstream stream;
        stream << "0x" << std::setfill('0') << std::uppercase << std::setw(sizeof(u_int32_t)*2) << std::hex << in;
        return stream.str();
    }

    /**
     * @brief pure virtual function that defines execution behavior
     * for future potential command subclasses
     * 
     */
    virtual std::string execute() = 0;
    ~Command(){}
};


#endif