/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:11 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:18:20 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class Weapon;
class HumanA
{
private:
	std::string _name;
	Weapon& _WeaponA;

public:
	HumanA(std::string name, Weapon &weaponA);
	~HumanA();
	void attack();
};

#endif
