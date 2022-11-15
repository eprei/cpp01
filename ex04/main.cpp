#include "Replacer.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	Replacer	rep;
	if (argc != 4)
	{
		std::cout << "Error: invalid number of arguments" << std::endl;
		std::cout << "Correct usage: ./replacer <filename> <string to replace> <new string>" << std::endl;
		return 1;
	}
	rep.getArgs(argv);
	if (rep.checkArgs() == true)
		rep.execReplacement();
	else
	{
		std::cout << "Error: invalid arguments" << std::endl;
		return 1;
	}
	return 0;
}
