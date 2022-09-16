/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 13:20:01 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"


Cat::Cat():Animal("Cat"){
	std::cout << "Cat Default Constructor called\n";
}

Cat::Cat(const std::string &type):Animal(type){
	std::cout << "Cat Parametrized Constructor called\n";
}

Cat::Cat(const Cat &other){
	std::cout << "Cat Copy constructor called" << '\n';
	*this = other;
}

Cat &Cat::operator= (const Cat &rhs){
	std::cout << "Cat copy assignment operator called\n";
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


Cat::~Cat(){
	std::cout << "Cat Destructor called" << '\n';
}

//functions 
void Cat::makeSound()const {
	std::cout << "Cat Mewos" << '\n';
}