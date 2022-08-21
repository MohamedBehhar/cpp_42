
#include "replace.h"

int main(int ac, char *av[])
{
	std::fstream file;
	if (ac != 4)
	{
		LOG << "Invalid number of parametres" << N;
		return (1);
	}
	if(parseArg(av) == false)
	{
		LOG << "Invalid parametres" << N;
		return (1);

	}
	file.open(av[1], std::ios::in);
	if (!file)
	{
		LOG << "file error" << N;
		return (1);
	}
	std::string buf;
	std::string line;
	while (getline(file, buf, '\n'))
	{
		line += buf;
		line += "\n";
	}
	file.close();
	LOG << line << N;
	
	return 0;
}
