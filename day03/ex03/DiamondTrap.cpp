/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 19:03:03 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/24 17:35:16 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp" 

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap()
{
	std::cout << "DiamondTrap Default constructor called" << std::endl;
	_name = "";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Parameterized constructor called" << std::endl;
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs)
{
	std::cout << "DiamondTrap copy assignement operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name = rhs._name;
	this->_hitPoints = rhs._hitPoints;
	this->_energyPoints = rhs._energyPoints;
	this->_attackDamage = rhs._attackDamage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
	std::cout << "DiamondTrap copy-constructor called" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

// functions
void DiamondTrap::whoAmI()
{
	std::cout << "- - - - - - - - - - who am I - - - - - - - -\n";
	std::cout << "DiamondTrap name is: " << _name <<  "\n" << "ClapTrap name is :" << ClapTrap::_name << std::endl;
	std::cout << "- - - - - - - - - - -  - - - - - - - - - - -\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}