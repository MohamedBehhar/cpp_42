/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:29:56 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/28 18:52:00 by mbehhar          ###   ########.fr       */
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

void Contact::displayColumns(int id)
{
	std::cout << "|" << std::right << std::setw(10) << id + 1
			  << "|" << std::right << std::setw(10) << _firstName.substr(0, 9).append(".")
			  << "|" << std::right << std::setw(10) << _lastName.substr(0, 9).append(".")
			  << "|" << std::right << std::setw(10) << _nickname.substr(0, 9).append(".") << "|" << '\n';
}

void Contact::displayAllColumns(int id)
{
	std::cout << "*___________________________________________*" << '\n';
	std::cout 	<< std::right << std::setw(10) << "index        :" << id + 1 << '\n'
				<< std::right << std::setw(10) << "firstName    :" << _firstName << '\n'
				<< std::right << std::setw(10) << "lastName     :" << _lastName<< '\n'
				<< std::right << std::setw(10) << "nickName     :" << _nickname<< '\n'
				<< std::right << std::setw(10) << "phoneNumber  :" << _phoneNumber<< '\n';
}
