/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:30:41 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/13 17:45:35 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "ClapTrap Default constructor called" << std::endl;
	_name = "";
	_hitPoints 		= 10;
	_energyPoints 	= 10;
	_attackDamage 	= 0;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "ClapTrap Parameterized constructor called" << std::endl;
	_hitPoints 		= 10;
	_energyPoints 	= 10;
	_attackDamage 	= 0;
	_name = name;
}

ClapTrap::ClapTrap(const ClapTrap& other){
	std::cout << "ClapTrap Copy constructor called" << '\n';
	*this = other;
}

ClapTrap &ClapTrap::operator = (const ClapTrap &rhs){
	std::cout << "ClapTrap Copy assignement operator called" << '\n';
	if (this == &rhs)
		return(*this);
	this->_name 		= rhs._name;
	this->_hitPoints	= rhs._hitPoints;
	this->_energyPoints	= rhs._energyPoints;
	this->_attackDamage	= rhs._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap Destructor called" << '\n';	
}

// getters 
std::string ClapTrap::getName(){
	return (_name);
}
unsigned int ClapTrap::getAttackDamage(void){
	return (_attackDamage);
}
unsigned int ClapTrap::getHitPoints(void){
	return (_hitPoints);
}


//member functions
void ClapTrap::attack(const std::string& target){
	if (_hitPoints == 0 || _energyPoints == 0){
		std::cout << "no hit or energy Points left" << "\n";
		return ;
	}
	_energyPoints -= 1;
	std::cout << "***ATTACKING***" << "\n";
	std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _attackDamage << " points of damage!" << "\n";
}


void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints <=0 || amount > _hitPoints)
	{
		std::cout << "ClapTrap " << _name << " can't gets this attack " <<  "\n";
		return ;
		
	}
	std::cout << "***TACKING ATTACK***" << "\n";
	std::cout << "Claptrap " << _name << " getting attacked" << "\n";
	_hitPoints -= amount;
}


void ClapTrap::beRepaired(unsigned int amount){
	if (_hitPoints == 0 || _energyPoints == 0){
		std::cout << "no hit or energy Points left" << "\n";
		return ;
	}
	std::cout << "***REPAIRING***" << "\n";
	std::cout << "Claptrap " << _name << " getting repaired" << "\n";
	_hitPoints += amount;
	_energyPoints--;
}

void ClapTrap::print(){
	std::cout << "-----------------" << std::endl;
	std::cout << "name:		" << _name << "\n";
	std::cout << "_hitPoints:	" << _hitPoints << "\n";
	std::cout << "energyPoints:	" << _energyPoints << "\n";
	std::cout << "attackDamage:	" << _attackDamage << "\n";
	std::cout << "-----------------" << std::endl;
}