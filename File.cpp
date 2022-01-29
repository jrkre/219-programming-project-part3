#include "File.h"


File::File()
{
    
}

File::File(std::string filename)
{
    File::totalCommands = 0;
    File::filename = filename;
    std::ifstream file(filename, std::ios::in);
    std::string line;
    if (file.is_open())
    {
        while(getline(file, line))
        {
            File::buffer += line;
            File::buffer += "\n";
            totalCommands ++;
        }
        std::cout << "File Contents:" << std::endl;
	    std::cout << "---------------------------" << std::endl;
        std::cout << buffer;
	    std::cout << "---------------------------" << std::endl;
        file.close();
    }
}

int File::getTotalCommands()
{
    return totalCommands;
}

std::string * File::splitCommands()
{   
    //Command counter
    int cCount = 0;
    for(int i = 0; i < buffer.length(); i++)
    {
        //every time theres a \n caracter incriment
        if (buffer[i] == '\n')
        {
            cCount++;
        }
    }

    //Array containing all of the individual lines as seperate strings
    std::string * rString = new std::string[totalCommands];

    int newLineCount = 0;

    //loop finds each line and puts it into array
    for(int i = 0; i < cCount; i++)
    {
        //this is jank but it works
        std::string insertionString = "";
        for (int j = newLineCount; j < buffer.length(); j++)
        {
            if (buffer[j] != '\n')
            {
                insertionString += buffer[j];
            }
            else
            {
                newLineCount = j + 1;
                break;
            }
        }
        rString[i] = insertionString;
    }
    return rString;
}

Command * chooseCommand(std::string commandString, std::string arg1, std::string arg2)
{
    if (commandString == "ADD")
    {
        Add * add = new Add(commandString, arg1, arg2);
        return add;
    }
    else 
    {
        //idk what to return here yet 
        // - when theres more operations later hopefully it will make sense
    }
}

std::vector<Command*> File::parseToCommands(std::string * input)
{
    std::string * newInput = input;

    //vector with Command* objects - since Command is technically abstract and cannot be instantiated
    std::vector<Command*> commands [totalCommands];

    //loop gets the data in each line by a delimiter and passes it to the chooseCommand() function
    for (int i = 0; i < totalCommands; i++)
    {
        std::string search = newInput[i];
        //std::cout << search << std::endl;
        std::string delimiter = " ";
        size_t pos = 0;
        std::string token;
        int tokenCounter = 0;

        std::string buildCommand [3];
        while ((pos = search.find(delimiter)) != std::string::npos)
        {
            token = search.substr(0, pos);
            if (token != "")
            {
                buildCommand[tokenCounter] = token;
                tokenCounter ++;
            }
            search.erase(0, pos + delimiter.length());
        }

        buildCommand[2] = search;

        Command *thing = chooseCommand(buildCommand[0], buildCommand[1], buildCommand[2]);
        commands->push_back(thing);

    }
    return *commands;
}
