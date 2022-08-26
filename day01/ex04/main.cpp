/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:17:27 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 18:50:03 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.h"
#include <unistd.h>

int main(int ac, char *av[])
{	
	// checking for errors
	if (ac != 4)
	{
		LOG << "Invalid number of parametres" << N;
		return (1);
	}
	std::string fileName = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	
	if (s1.empty())
	{
		LOG << "Invalid parametres" << N;
		return (1);
	}
	std::ifstream file(fileName);
	if (file.is_open() == false)
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
	std::ofstream newFile(fileName + ".replace");
	if (newFile.is_open() == false)
	{
		LOG << "file error" << N;
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
	}
	return 0;
}
