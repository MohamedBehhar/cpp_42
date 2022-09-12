/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:36:12 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/12 18:50:33 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string 	_name;
	unsigned int	_hitPoints;
	unsigned int	_energyPoints;
	unsigned int	_attackDamage;
public:
	ClapTrap(/* args */);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &other);
	ClapTrap &operator = (const ClapTrap &rhs);
	~ClapTrap();
	void setName(std::string name){
		_name = name;
	}
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	unsigned int getAttackDamage(void);
	void beRepaired(unsigned int amount);
	
	void print();
};


#endif