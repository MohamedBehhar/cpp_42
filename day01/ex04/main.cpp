/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:17:27 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/24 18:24:53 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <unistd.h>
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
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (ac != 4)
	{
		LOG << "Invalid number of parametres" << N;
		return (1);
	}
	if (s1.empty())
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
	// checking if the file is empty
	if (file.peek() == EOF)
	{
		LOG << "empty file" << N;
		return (1);
	}

	// reading the file
	std::string buf;
	getline(file, buf, (char)EOF);
	file.close();

	// find and replace
	std::fstream newFile;
	newFile.open(fileName + ".replace", std::ios::out);
	if (!file)
	{
		LOG << "file error 2" << N;
		return (1);
	}
	size_t i;
	size_t j;
	std::string tmp;
	while (true)
	{
		i = buf.find(s1, 0);
		j = buf.find(s1, i + 1);
		tmp = buf.substr(0, i);
		newFile << tmp;
		if (i == std::string::npos && j == std::string::npos)
			break;
		newFile << s2;
		buf = buf.substr(i + s1.length(), buf.length());
		LOG << "buf=>" << buf << N;
	}
	return 0;
}
