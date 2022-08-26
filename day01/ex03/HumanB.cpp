/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:13 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:37:37 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
	_name = "";
	_WeaponB = NULL;
}

HumanB::~HumanB()
{	
}

HumanB::HumanB(std::string name){
	_name = name;
	_WeaponB = NULL;
}

void HumanB::attack(){
	if (_WeaponB == NULL)
	{
		std::cerr << "weapon B is null" << std::endl;
		exit (1);
	}
	std::cout << _name << " attacks with their " << _WeaponB->getType() << std::endl; 
}

void HumanB::setWeapon(Weapon &weapon){
	_WeaponB = &weapon;
}
