/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:19:51 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 17:58:50 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor called\n";
}

Animal::Animal(const std::string &type){
	std::cout << "Animal  Parametrized Constructor called\n";
	_type = type;
}

Animal &Animal::operator= (const Animal &rhs){
	std::cout << "Animal  copy assignment operator called\n";
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Animal::Animal(const Animal &other){
	std::cout << "Animal Copy constructor called" << '\n';
	*this = other;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << '\n';
}

//functions
// void Animal::makeSound()const{
// 	std::cout << "Animal make sound \n";
// }

// getters
std::string Animal::getType()const{
	return (_type);
}