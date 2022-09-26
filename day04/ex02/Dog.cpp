/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:08 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 16:49:20 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"


Dog::Dog():Animal("Dog"){
	std::cout << "Dog Default Constructor called\n";
	dogBrain = new Brain;
}

Dog::Dog(const std::string &type):Animal(type){
	std::cout << "Dog Parametrized Constructor called\n";
	dogBrain = new Brain;
}

Dog &Dog::operator= (const Dog &rhs){
	std::cout << "Dog  copy assignment operator called\n";
	if (this != &rhs)
	{
		// delete dogBrain;
		this->_type = rhs._type;
		// this->dogBrain = new Brain;
		// *dogBrain = *rhs.dogBrain;
	}
	return (*this);
}

Dog::Dog(const Dog &other):Animal(){
	std::cout << "Dog Copy constructor called" << '\n';
	*this = other;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << '\n';
	delete dogBrain;
}

//functions 
void Dog::makeSound()const{
	std::cout << "Dog Bark" << '\n';
}