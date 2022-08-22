
#include "replace.h"

void findAndReplace(std::string big, std::string little)
{
	int i;
	int j;

	i = 0;
	while (big[i])
	{
		j = 0;
		while (big[i + j] == little[j] && little[j] && big[i + j])
		{
		}
	}
}

int main(int ac, char *av[])
{
	std::fstream file;
	// checking for errors
	if (ac != 4)
	{
		LOG << "Invalid number of parametres" << N;
		return (1);
	}
	if (parseArg(av) == false)
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

	// reading the file
	std::string buf;
	getline(file, buf, (char)EOF);
	file.close();
	LOG << buf << N;

	// find and replace
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string fileName = av[1];
	std::ofstream newFile(fileName + ".replace");
	size_t i;
	bool flag = true;

	i = buf.find(av[2], 0, std::string(av[3]).length());
	i == std::string::npos ? flag = false : flag = true;
	flag == true ? newFile << buf.substr(0, i) : 0 ;
	LOG << buf.substr(0, i) << N;
	while (flag)
	{
		std::string temp = 
		newFile << buf.substr(i, i) 
		LOG << buf.substr(i, s1.length()) << N;
		i = buf.find(av[2], (int)i + 1, s2.length());
		i == std::string::npos ? flag = false : flag = true;
	}
	return 0;
}
