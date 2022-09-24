/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 16:45:06 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/24 11:44:10 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap Default constructor called" << std::endl;
	_hitPoints 		= 100;
	_energyPoints 	= 50;
	_attackDamage 	= 20;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
	std::cout << "ScavTrap Parameterized constructor called" << std::endl;
	_hitPoints 		= 100;
	_energyPoints 	= 50;
	_attackDamage 	= 20;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs){
	std::cout << "ScavTrap copy assignement operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name 		= rhs._name;
	this->_hitPoints	= rhs._hitPoints;
	this->_energyPoints	= rhs._energyPoints;
	this->_attackDamage	= rhs._attackDamage;
	return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &other){
	std::cout << "ScavTrap copy-constructor called" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap Destructor called" << std::endl;
}

//functions
void ScavTrap::guardGate(){
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;	
}

void ScavTrap::attack(const std::string& target){
	if (_hitPoints == 0 || _energyPoints == 0){
		std::cout << "no hit or energy Points left" << "\n";
		return ;
	}
	_energyPoints -= 1;
	std::cout << "***ATTACKING***" << "\n";
	std::cout << "ScavTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << "\n";
}