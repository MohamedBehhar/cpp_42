#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
	(void)av;
	if (ac != 2)
	{
		std::cout << "Missing file" << std::endl;
		return 1;
	}
	const char *db = "data.csv";
	BitcoinExchange obj(av[1], db);

	/////////// reading the input file //////////////////
	std::string givingFile = av[1];
	std::ifstream file(av[1]);
	if (file.is_open() == false)
	{
		print("input file error");
		return (1);
	}
	// checking if the file is empty
	if (file.peek() == EOF)
	{
		print("input file is empty");
		return (1);
	}
	// reading the file
	std::string buf;
	getline(file, buf, (char)EOF);
	file.close();
	/////////// db file //////////////////
	std::string dbFile = "data.csv";
	std::ifstream fileDb(dbFile.c_str());
	if (fileDb.is_open() == false)
	{
		print("db file error");
		return (1);
	}
	// checking if the file is empty
	if (fileDb.peek() == EOF)
	{
		print("db file is empty");
		return (1);
	}
	// reading the file
	std::string bufdb;
	getline(fileDb, bufdb, (char)EOF);
	fileDb.close();

	return 0;
}