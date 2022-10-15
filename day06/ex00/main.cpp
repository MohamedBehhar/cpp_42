#include "Converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: Wrong number of arguments" << std::endl;
		return 1;
	}
	Converter c(argv[1]);
	c.convert();
	return 0;
}