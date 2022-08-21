/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:13 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/21 18:54:52 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(/* args */)
{
	std::cout << "HUMAN_B Default constructor has been called" << std::endl;
}

HumanB::~HumanB()
{	
	std::cout << "HUMAN_B Destructor constructor has been called" << std::endl;
}

HumanB::HumanB(std::string name){
	_name = name;
	std::cout << "HUMAN_B Parametrized constructor has been called" << std::endl;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their" << _WeaponB.getType() << std::endl; 
}

void HumanB::setWeapon(Weapon weapon){
	_WeaponB = weapon;
}