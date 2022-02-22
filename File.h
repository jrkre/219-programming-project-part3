#ifndef FILE_H
#define FILE_H
#include <iostream>
#include <fstream>
#include <vector>
#include "src/Add.h"
#include "src/And.h"
#include "src/ArithShiftRight.h"
#include "src/LogicalShiftRight.h"
#include "src/LogicalShiftLeft.h"
#include "src/Not.h"
#include "src/Orr.h"
#include "src/Subtract.h"
#include "src/Xor.h"


/**
 * @brief This file acts as an in-between between the driver and the
 * code of this project. It handles the parsing of the file into 
 * commands that are then computed for a result.
 * 
 */
class File
{
private:

    /**
     * @brief file containing instructions
     * 
     */
    std::string filename;

    /**
     * @brief total lines counted in the file
     * 
     */
    int totalCommands;

    /**
     * @brief string representation of the file
     * 
     */
    std::string buffer;

public:
    /**
     * @brief Construct a new File object
     * 
     */
    File();

    /**
     * @brief Construct a new File object and load the buffer
     * 
     * @param filename 
     */
    File (std::string filename);

    /**
     * @brief Get the totalCommands member variable
     * 
     * @return int totalCommands
     */
    int getTotalCommands();

    /**
     * @brief Parses an array of commands and turns them into 
     * their respective "Command types"
     * 
     * @param input 
     * @return std::vector<Command*> 
     */
    std::vector<Command*> parseToCommands(std::string * input);

    /**
     * @brief Parses the buffer into individual lines
     * 
     * @return std::string* array of lines in string format
     */
    std::string * splitCommands();

};


#endif