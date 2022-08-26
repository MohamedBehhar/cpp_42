/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:16 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:33:27 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class Weapon;
class HumanB
{
private:
	std::string _name;
	Weapon *_WeaponB;
public:
	HumanB(/* args */);
	~HumanB();
	HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();
};



#endif