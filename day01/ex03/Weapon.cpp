/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/20 17:49:07 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(/* args */)
{
	std::cout << "Default constructor has been called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructor has been called" << std::endl;
}

void Weapon::setType(std::string type){
	_type = type;
}

const std::string& Weapon::getType(void){
	const std::string& typeRef = _type;
	return typeRef;
}