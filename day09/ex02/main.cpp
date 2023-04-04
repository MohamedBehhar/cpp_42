#include "PmergeMe.hpp"

int main(int ac, char *av[])
{
	if (ac < 3)
	{
		std::cout << "Invalid number of arguments" << std::endl;
		return 1;
	}
	PmergeMe pmergeMe;
	for (int i = 1; i < ac; i++)
	{
		if (isDigit(av[i]) != true)
		{
			std::cout << "Invalid argument" << std::endl;
			return 1;
		}
		if (atoi(av[i]) < 0)
		{
			std::cout << "Invalid argument" << std::endl;
			return 1;
		}
		pmergeMe.addNumber(atoi(av[i]));
	}
	pmergeMe.mergeSort();
	pmergeMe.printOutput();
	return 0;
}