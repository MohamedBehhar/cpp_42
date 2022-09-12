/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:41 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/12 18:54:58 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default constructor called" << std::endl;
	_name = "";
	_hitPoints 		= 10;
	_energyPoints 	= 10;
	_attackDamage 	= 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Parameterized constructor called" << std::endl;
	_hitPoints 		= 10;
	_energyPoints 	= 10;
	_attackDamage 	= 0;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "Copy constructor called" << '\n';
	*this = other;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &rhs){
	std::cout << "Copy assignement operator called" << '\n';
	if (this == &rhs)
		return(*this);
	this->_name 		= rhs._name;
	this->_hitPoints	= rhs._hitPoints;
	this->_energyPoints	= rhs._energyPoints;
	this->_attackDamage	= rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << '\n';	
}

//member functions
void ClapTrap::attack(const std::string& target){
	if (_hitPoints == 0 || _energyPoints == 0){
		std::cout << "no hitPoints or energyPoints left" << "\n";
		return ;
	}
	_energyPoints -= 10;
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << "\n";
}


void ClapTrap::takeDamage(unsigned int amount){
	_hitPoints -= amount;
}

unsigned int ClapTrap::getAttackDamage(void){
	return (_attackDamage);
}
void ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints == 0 || _energyPoints == 0){
		std::cout << "no hit or energy Points" << "\n";
		return ;
	}
	_hitPoints += amount;
	_energyPoints--;
}

void ClapTrap::print(){
	std::cout << "name :" << _name << "\n";
	std::cout << "_hitPoints :" << _hitPoints << "\n";
	std::cout << "energyPoints :" << _energyPoints << "\n";
	std::cout << "attackDamage :" << _attackDamage << "\n";
}