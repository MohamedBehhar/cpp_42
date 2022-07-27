/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:30:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/27 18:57:14 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook():id(0){
	std::cout << "default constracted called" << std::endl;
}

void PhoneBook::ADD(std::string info[5], int id)
{
	contacts[id] = Contact(info[0], info[1],info[2], info[3], info[4]);
}

void PhoneBook::SEARCH(int id){
	int i;

	i = 0;
	std::cout << "*___________________________________________*" << '\n';
	std::cout 	<< "|" << std::right << std::setw(10) <<"index" 
				<< "|" << std::right << std::setw(10) <<"firstName" 
				<< "|" << std::right << std::setw(10) <<"lastName" 
				<< "|" << std::right << std::setw(10) <<"nickName" << "|" << '\n';
	std::cout << "*-------------------------------------------*" << '\n';
	id > 8 ? id = 8: id ;
	while (i < id)
	{
		contacts[i].displayColumns(i);
		i++;
	}
	std::cout << "*-------------------------------------------*" << '\n';
}

void PhoneBook::EXIT(){
	exit(0);
}