#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <sstream>

/**
 * @brief Interface to impliment a psuedo "command" design pattern
 * 
 */
class Command {


public:

    /**
     * @brief pure virtual function that defines execution behavior
     * for future potential command subclasses
     * 
     */
    virtual std::string execute() = 0;

};


#endif