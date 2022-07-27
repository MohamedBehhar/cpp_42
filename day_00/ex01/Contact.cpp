/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:29:56 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/27 18:56:56 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(/* args */){
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

void Contact::display()
{
	std::cout << "firstName     :" << _firstName << std::endl;
	std::cout << "lastName      :" << _lastName << std::endl;
	std::cout << "nickname      :" << _nickname << std::endl;
	std::cout << "darkestSecret :" << _darkestSecret << std::endl;
	std::cout << "phoneNumber   :" << _phoneNumber << std::endl;
}

void Contact::displayColumns(int id){
	
	std::cout 	<< "|" << std::right << std::setw(10) << id++
				<< "|" << std::right << std::setw(10) << _firstName.substr(0,9) << "." 
				<< "|" << std::right << std::setw(10) << _lastName.substr(0,9) << "."
				<< "|" << std::right << std::setw(10) << _nickname.substr(0,9) << "." 
				<< "|" << '\n';	
}
