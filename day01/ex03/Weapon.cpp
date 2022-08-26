/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:27:19 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type){
	_type = type;
};


Weapon::~Weapon()
{
}

void Weapon::setType(std::string type){
	_type = type;
}

const std::string& Weapon::getType()
{
	return (_type);
}