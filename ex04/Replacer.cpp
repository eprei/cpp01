#include "Replacer.hpp"
#include <iostream>
#include <fstream>

Replacer::Replacer(void){}

Replacer::~Replacer(void){}

bool	Replacer::getArgs(char **argv)
{
	this->_inputFileName = argv[1];
	this->_stringToReplace = argv[2];
	this->_newString = argv[3];

	this->_ifs.open(this->_inputFileName.data());
	return (this->_ifs.is_open());
}

void	Replacer::execReplacement(void)
{
	this->_outputFileName = this->_inputFileName;
	this->_outputFileName += ".replace";

	std::cout << "input fileName = " << this->_inputFileName << std::endl;
	std::cout << "output fileName = " << this->_outputFileName << std::endl;
	std::cout << "string to replace = " << this->_stringToReplace << std::endl;
	std::cout << "new string = " << this->_newString << std::endl;
	this->_ifs.close();
	return ;
}
