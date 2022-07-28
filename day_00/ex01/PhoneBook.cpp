/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:30:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/28 18:52:39 by mbehhar          ###   ########.fr       */
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
}

// bool checkUserId(int userId)
// {
// 	int id;
// 	int i = 0;
// 	if (userId.length() == 1 && (userId - '0' < 0 || userId - '0' > 9))
// 		return true;
// 	else
// 		return false;
// 	while (isnumber(userId[i]) == true && userId[i] >= '0' && userId[i] <= '9')
// 		i++;
// 	if (userId[i] != '\0' && isnumber(userId[i]) == false)
// 		return false;
// 	id = atoi(userId);

// }

// void 	displaySingleContact(int entredId)
// {
// 	std::cout << "*___________________________________________*" << '\n';
// 	std::cout 	<< "|" << std::right << std::setw(10) <<"index"
// 				<< "|" << std::right << std::setw(10) <<"firstName"
// 				<< "|" << std::right << std::setw(10) <<"lastName"
// 				<< "|" << std::right << std::setw(10) <<"nickName" << "|" << '\n';
// 	std::cout << "*-------------------------------------------*" << '\n';
// 	contacts[entredId].displayColumns(entredId);
// 	std::cout << "*-------------------------------------------*" << '\n';
// }

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

void displayFullTableHeader(void)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout << "|" << std::right << std::setw(10) << "index"
			  << "|" << std::right << std::setw(10) << "firstName"
			  << "|" << std::right << std::setw(10) << "lastName"
			  << "|" << std::right << std::setw(10) << "nickName"
			  << "|" << std::right << std::setw(10) << "phoneNum"
			  << "|" << '\n';
	std::cout << "*-------------------------------------------*" << '\n';
}


void PhoneBook::SEARCH(int id)
{
	int i;
	int entredId;
	std::string userId;

	i = 0;
	displayTableHeader();
	id > 8 ? id = 8 : id;
	std::cout << "id=> " << id << '\n';
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
			exit (1);
		std::stringstream(userId) >> entredId;
		std::cout << "entredId" << entredId << "id" << id <<'\n';
		if (entredId >= 1 && entredId <= id)
		{
			contacts[entredId - 1].displayAllColumns(entredId - 1);
			std::cout << "*-------------------------------------------*" << '\n';
			break;
		}
	}
}

void PhoneBook::EXIT()
{
	exit(0);
}