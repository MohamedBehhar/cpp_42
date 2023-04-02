#include "RPN.hpp"

int main(int ac, char *av[])
{
	if (ac != 2)
	{
		std::cerr << "Invalid number of arguments\n";
		return (1);
	}
	RPN RPN(av[1]);
}

