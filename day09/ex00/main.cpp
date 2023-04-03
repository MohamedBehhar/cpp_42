#include "BitcoinExchange.hpp"

int main(int ac, char *av[])
{
	(void)av;
	if (ac != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	const char *db = "data.csv";
	BitcoinExchange obj(av[1], db);
	return 0;
}