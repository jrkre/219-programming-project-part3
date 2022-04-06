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
    std::string rString;

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
    uint32_t iArg1;

    /**
     * @brief 32-bit integer representation of operand 2
     * 
     */
    uint32_t iArg2;

public:

    /**
     * @brief Construct a new Add object from parameters
     * 
     * @param arg1 
     * @param arg2 
     */
    Add(std::string arg1, std::string arg2, std::string rString);

    /**
     * @brief adds the two arguments arg1 and arg2 with a safety check 
     * for overflow case
     * 
     * @return std::string resulting number in hexadecimal form
     */
    std::string addParams();

    /**
     * @brief DEPRICATED - reverses a string passed in
     * 
     * @param input 
     * @return std::string reversed string
     */
    std::string reverseString(std::string input);
    


    /**
     * @brief invokes the addParams() function
     * 
     * @return std::string added hex values
     */
    std::string execute();
    
};


#endif