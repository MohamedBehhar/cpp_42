/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 18:34:53 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/14 18:59:50 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap(){
	std::cout << "FragTrap Default constructor called" << std::endl;
	_hitPoints 		= 100;
	_energyPoints 	= 100;
	_attackDamage 	= 30;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
	std::cout << "FragTrap Parameterized constructor called" << std::endl;
	_hitPoints 		= 100;
	_energyPoints 	= 100;
	_attackDamage 	= 30;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs){
	std::cout << "FragTrap copy assignement operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_name 		= rhs._name;
	this->_hitPoints	= rhs._hitPoints;
	this->_energyPoints	= rhs._energyPoints;
	this->_attackDamage	= rhs._attackDamage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap &other):ClapTrap(){
	std::cout << "FragTrap copy-constructor called" << std::endl;
	*this = other;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap Destructor called" << std::endl;
}

//functions
void FragTrap::highFivesGuys(void){
	std::cout << "- - - - -HIGH-FIVES- - - - -" << "\n";
	std::cout << "FragTrap " << _name << " Give me a high fives" << std::endl;	
}

