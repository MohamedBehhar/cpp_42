/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:48:47 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/29 14:15:58 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	fields_assignement(std::string *fields)
{
	fields[0] = "First name     : "; 
	fields[1] = "Last name      : "; 
	fields[2] = "Nickname       : "; 
	fields[3] = "Phone number   : "; 
	fields[4] = "Darkest secret : "; 
}

bool	isAllSpaces(std::string str)
{
	int i = 0;
	int j = 0;
	int len = str.length();
	while (i < len)
	{
		if (isspace(str[i]) == true)
			j++;
		i++;
	}
	return (i == j);
}

bool	checkFields(std::string *fields)
{
	int i = 0;
	while (i < 5)
	{
		if (fields[i].empty() || isAllSpaces(fields[i]))
			return (false);
		i++;
	}
	return (true);
}

void displayCommands()
{
	std::cout << "*********************************************" << '\n';
	std::cout << "|" << std::setw(43) 
			  << "           <-ENTER A COMMAND->            " << "|" << '\n';
	std::cout << "|" << std::internal << std::setw(13) << "ADD     "
			  << "|" << std::internal << std::setw(15) << "SEARCH   "
			  << "|" << std::internal << std::setw(13) << "EXIT    "
			  << "|" << '\n';
	std::cout << "*********************************************" << '\n';
}

int main()
{
	int i = 0;
	int id = 0;
	PhoneBook contact;
	std::string info[5];
	std::string fields[5];
	std::string buf;

	fields_assignement(fields);
	while (true)
	{
		displayCommands();
		if (getline(std::cin, buf).eof() == true)
		{	
			return (0);
		}
		if (buf == "ADD")
		{
			i = 0;
			while (i < 5)
			{
				std::cout << fields[i] ;
				if (getline(std::cin, info[i], '\n').eof() == true)
					return (0);
				i++;
			}
			if (checkFields(info) == true)
			{
				contact.ADD(info, id % 8);
				id++;
			}
			else
			std::cout << "==>ERROR: A FIELD OR MORE IS EMPTY<==" << '\n';
		}
		else if (buf == "SEARCH")
			contact.SEARCH(id);
		else if (buf == "EXIT")
			contact.EXIT();
		
	}
	return (0);
}