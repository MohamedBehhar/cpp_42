/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:30 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 13:28:35 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal Default Constructor called\n";
}

WrongAnimal::WrongAnimal(const std::string &type){
	std::cout << "WrongAnimal  Parametrized Constructor called\n";
	_type = type;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &rhs){
	std::cout << "WrongAnimal  copy assignment operator called\n";
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

WrongAnimal::WrongAnimal(const WrongAnimal &other){
	std::cout << "WrongAnimal Copy constructor called" << '\n';
	*this = other;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal Destructor called" << '\n';
}

//functions
void WrongAnimal::makeSound()const{
	std::cout << "Wronganimal make sound \n";
}

// getters
std::string WrongAnimal::getType()const{
	return (_type);
}