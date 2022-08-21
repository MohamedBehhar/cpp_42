/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:07 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/21 18:50:12 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::~HumanA()
{
	// std::cout << "HUMAN_A Destructor has been called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weaponA): _WeaponA(weaponA)
{
	_name = name;
	// std::cout << "HUMAN_A Parametrized constructor has been called" << std::endl;
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _WeaponA.getType() << std::endl;
}