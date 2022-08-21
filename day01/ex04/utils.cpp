#include "replace.h"


bool	isAllSpaces(std::string str)
{
	int i = 0;
	int j = 0;
	int len = str.length();
	while (i < len)
	{
		if (isspace(str[i]) != 0)
			j++;
		i++;
	}
	return (i == j);
}


bool parseArg(char *av[])
{
	std::string str;
	int i = 1;
	while(av[i])
	{
		str = av[i];
		if (str.empty() || isAllSpaces(str))
			return (false);
		i++;
	}
	return (true);
}