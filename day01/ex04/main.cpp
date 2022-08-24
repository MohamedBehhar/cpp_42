/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:17:27 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/24 15:33:52 by mbehhar          ###   ########.fr       */
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

	// find and replace
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string fileName = av[1];
	std::fstream newFile;
	newFile.open(fileName + ".replace", std::ios::out);
	if (!file)
	{
		LOG << "file error" << N;
		return (1);
	}

	newFile.close();
	return 0;
}
