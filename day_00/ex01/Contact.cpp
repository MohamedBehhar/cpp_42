/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:29:56 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/29 14:01:41 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */)
{
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickname, std::string darkestSecret, std::string phoneNumber)
{
	_firstName = firstName;
	_lastName = lastName;
	_nickname = nickname;
	_darkestSecret = darkestSecret;
	_phoneNumber = phoneNumber;
}

Contact::~Contact()
{
}

std::string checkInfoLen(std::string str)
{
	return (str.length() < 10 ? str : str.substr(0, 9).append("."));
}

void Contact::displayColumns(int id)
{
	std::cout << "|" << std::right << std::setw(10) << id + 1
			  << "|" << std::right << std::setw(10) << checkInfoLen(_firstName)
			  << "|" << std::right << std::setw(10) << checkInfoLen(_lastName)
			  << "|" << std::right << std::setw(10) << checkInfoLen(_nickname) << "|" << '\n';
}

void Contact::displaySingleContact(int id)
{
	std::cout << "*-------------------------------------------*" << '\n';
	std::cout << "*               CONTACT INFO                *" << '\n';
	std::cout << "*___________________________________________*" << '\n';
	std::cout << std::right << std::setw(10) << "index        :" << id + 1 << '\n'
			  << std::right << std::setw(10) << "firstName    :" << _firstName << '\n'
			  << std::right << std::setw(10) << "lastName     :" << _lastName << '\n'
			  << std::right << std::setw(10) << "nickName     :" << _nickname << '\n'
			  << std::right << std::setw(10) << "phoneNumber  :" << _phoneNumber << '\n';
}
