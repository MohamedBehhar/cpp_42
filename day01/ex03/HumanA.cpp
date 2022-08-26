/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:07 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:19:12 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::~HumanA()
{
}

HumanA::HumanA(std::string name, Weapon &weaponA):_name(name), _WeaponA(weaponA)
{
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _WeaponA.getType() << std::endl;
}