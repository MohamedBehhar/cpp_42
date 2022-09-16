/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:23:46 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 13:29:21 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"


WrongCat::WrongCat():WrongAnimal("WrongCat"){
	std::cout << "WrongCat Default Constructor called\n";
}

WrongCat::WrongCat(const std::string &type):WrongAnimal(type){
	std::cout << "WrongCat Parametrized Constructor called\n";
}

WrongCat::WrongCat(const WrongCat &other){
	std::cout << "WrongCat Copy constructor called" << '\n';
	*this = other;
}

WrongCat &WrongCat::operator= (const WrongCat &rhs){
	std::cout << "WrongCat copy assignment operator called\n";
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}


WrongCat::~WrongCat(){
	std::cout << "WrongCat Destructor called" << '\n';
}

//functions 
void WrongCat::makeSound()const {
	std::cout << "WrongCat Barks" << '\n';
}