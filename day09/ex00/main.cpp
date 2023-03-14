#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
	std::string givingFile;
	if (ac != 2)
	{
		perror("insufisant arguments");
		return(EXIT_FAILURE);
	}
	givingFile = av[1];
	std::ifstream file(givingFile);
	if (file.is_open() == false)
	{
		perror("file error");
		return(EXIT_FAILURE);
	}
	// checking if the file is empty
	if (file.peek() == EOF)
	{
		perror("file is empty");
		return(EXIT_FAILURE);
	}
	// reading the file
	std::string buf;
	getline(file, buf, (char)EOF);
	file.close();
	std::cout << buf << std::endl;
	return 0;
}