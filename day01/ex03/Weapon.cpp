/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/21 18:45:31 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	// std::cout << "WEAPON Default constructor has been called" << std::endl;
}

Weapon::Weapon(std::string type){
	_type = type;
	// std::cout << "WEAPON Parametrized constructor has been called" << std::endl;
};


Weapon::~Weapon()
{
	// std::cout << "WEAPON Destructor has been called" << std::endl;
}

void Weapon::setType(std::string type){
	_type = type;
}

const std::string& Weapon::getType()
{
	return (_type);
}