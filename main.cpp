#include "File.h"
#include "Command.h"
#include "Add.h"

int main(int argc, char *argv[])
{

    std::string input;
	if (argc > 1) 
	{
		input = argv[1];
	}
	else 
	{
		input = "";
	}
	// Make a new file
    File file = File(input);

	//split the file into an array of string "operations"
	std::string * array = file.splitCommands();

	//take the operations and parse them to objects
	std::vector<Command*> commands = file.parseToCommands(array);

	std::cout << "Results of the operation:" << std::endl;
	std::cout << "---------------------------" << std::endl;
	//execute operations
	for (int i = 0; i < file.getTotalCommands(); i++)
	{
		std::cout << array[i] << " = ";
		std::cout << commands[i]->execute() << std::endl;
	}
	std::cout << "---------------------------" << std::endl;
}