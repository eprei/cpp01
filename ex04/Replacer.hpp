#ifndef REPLACE_HPP
# define REPLACE_HPP
#include <string>
#include <fstream>

class Replacer
{
	public:
		Replacer(void);
		~Replacer(void);

		void	getArgs(char **argv);
		bool	checkArgs(void) const;
		void	set_outputFileName(void);
		void	execReplacement(void);

	private:
		std::string 	_inputFileName;
		std::string 	_outputFileName;
		std::string		_stringToReplace;
		std::string		_newString;
		std::ifstream	_ifs;
		std::ofstream	_ofs;
};

#endif
