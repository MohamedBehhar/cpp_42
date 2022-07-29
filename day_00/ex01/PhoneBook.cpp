/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:30:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/29 14:16:14 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"
#include <sstream>

PhoneBook::PhoneBook()
{
	std::cout << "default constracted called" << std::endl;
}

void PhoneBook::ADD(std::string info[5], int id)
{
	contacts[id] = Contact(info[0], info[1], info[2], info[3], info[4]);
	std::cout << "==>CONTACT ADDED SUCCESSFULLY<==" << '\n';
}

void displayTableHeader(void)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout << "|" << std::right << std::setw(10) << "index"
			  << "|" << std::right << std::setw(10) << "firstName"
			  << "|" << std::right << std::setw(10) << "lastName"
			  << "|" << std::right << std::setw(10) << "nickName"
			  << "|" << '\n';
	std::cout << "*-------------------------------------------*" << '\n';
}

void PhoneBook::SEARCH(int id)
{
	int i;
	int entredId;
	std::string userId;

	i = 0;
	if (id == 0)
	{
		std::cout << "THE PHONE BOOKE IS EMPTY" << '\n';
		return ;
	}
	displayTableHeader();
	id > 8 ? id = 8 : id;
	while (i < id)
	{
		contacts[i].displayColumns(i);
		i++;
	}
	std::cout << "*-------------------------------------------*" << '\n';
	while (true)
	{
		std::cout << "Please enter a valid Contact ID: >= 1 && <=" << id << '\n';
		if (getline(std::cin, userId, '\n').eof() == true)
			exit(1);
		std::stringstream(userId) >> entredId;
		if (entredId >= 1 && entredId <= id)
		{
			contacts[entredId - 1].displaySingleContact(entredId - 1);
			break;
		}
	}
}

void PhoneBook::EXIT()
{
	exit(0);
}