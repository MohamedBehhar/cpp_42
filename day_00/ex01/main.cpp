/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:48:47 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/26 18:48:50 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	fields_assignement(std::string *fields)
{
	fields[0] = "First name    :"; 
	fields[1] = "Last name     :"; 
	fields[2] = "Nickname      :"; 
	fields[3] = "Phone number  :"; 
	fields[4] = "Darkest secre :"; 
}

int main()
{
	int i = 0;
	int id = 0;
	PhoneBook contact;
	std::string info[5];
	std::string fields[5];

	fields_assignement(fields);

	std::string buf;
	while (true)
	{
		if (getline(std::cin, buf).eof() == true)
		{	
			return (1);
		}
		if (buf == "ADD")
		{
			while (i < 5)
			{
				std::cout << fields[i] ;
				getline(std::cin, info[i], '\n');
				i++;
			}
			contact.Add(info, id);
			id++;
			// exit(0);
		}
		else if (buf == "SEARCH")
		{
			contact.SEARCH();
		}
		
	}
	return (0);
}