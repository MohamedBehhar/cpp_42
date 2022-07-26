/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 13:30:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/07/26 18:47:54 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook():id(0){
	std::cout << "default constracted called" << std::endl;
}

void PhoneBook::Add(std::string info[5], int id)
{
	contacts[id] = Contact(info[0], info[1],info[2], info[3], info[4]);
	contacts[id].display();
}

void PhoneBook::SEARCH(){
	contacts[0].display();
}

