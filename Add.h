#ifndef ADD_H
#define ADD_H
#include "Command.h"
#include <iostream>
#include <iomanip>

/**
 * @brief impliments the "ADD" operation using the Command design pattern
 * 
 */
class Add : public Command {

private:

    /**
     * @brief plaintext string of the command 
     * - should never be anything besides "ADD"
     * 
     */
    std::string commandString;

    /**
     * @brief plaintext string of operand 1 in the command in hexadecimal format
     * 
     */
    std::string arg1;

    /**
     * @brief plaintext string of operand 2 in the command in hexadecimal format
     * 
     */
    std::string arg2;
    
    /**
     * @brief 32-bit integer representation of operand 1
     */
    u_int32_t iArg1;

    /**
     * @brief 32-bit integer representation of operand 2
     * 
     */
    u_int32_t iArg2;

public:

    /**
     * @brief Construct a new Add object from parameters
     * 
     * @param commandString 
     * @param arg1 
     * @param arg2 
     */
    Add(std::string commandString, std::string arg1, std::string arg2);

    /**
     * @brief adds the two arguments arg1 and arg2 with a safety check 
     * for overflow case
     * 
     * @return std::string resulting number in hexadecimal form
     */
    std::string addParams();

    /**
     * @brief convert an integer to a hex string
     * 
     * @param in integer to be converted
     * @return std::string hex representation of integer
     */
    std::string intToHex(u_int32_t in);

    /**
     * @brief DEPRICATED - reverses a string passed in
     * 
     * @param input 
     * @return std::string reversed string
     */
    std::string reverseString(std::string input);


    /**
     * @brief Converts a hex string into an integer
     * 
     * @param hex string in hexadecimal format - preceded by "0x"
     * @return int hex nuber in integer format
     */
    int hexToInt(std::string hex);


    /**
     * @brief invokes the addParams() function
     * 
     * @return std::string added hex values
     */
    std::string execute();
    
};


#endif