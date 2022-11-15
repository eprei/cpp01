#include "Replacer.hpp"
#include <iostream>

Replacer::Replacer(void){}

Replacer::~Replacer(void){}

void	Replacer::getArgs(char **argv)
{
	this->_inputFileName = argv[1];
	this->_stringToReplace = argv[2];
	this->_newString = argv[3];
	return ;
}

bool	Replacer::checkArgs(void) const
{
	return true;
}

void	Replacer::set_outputFileName(void)
{
	this->_outputFileName = this->_inputFileName;
	this->_outputFileName += ".replace";
	return ;
}

void	Replacer::execReplacement(void)
{
	set_outputFileName();
	std::cout << "input fileName = " << this->_inputFileName << std::endl;
	std::cout << "output fileName = " << this->_outputFileName << std::endl;
	std::cout << "string to replace = " << this->_stringToReplace << std::endl;
	std::cout << "new string = " << this->_newString << std::endl;
	return ;
}
