/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:13 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/22 13:38:53 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
}

HumanB::~HumanB()
{	
}

HumanB::HumanB(std::string name){
	_name = name;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _WeaponB->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon &weapon){
	_WeaponB = &weapon;
}
