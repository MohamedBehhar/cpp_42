/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:48:14 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/09 17:35:42 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << '\n';
	_fixedPoint = 0;
}

Fixed::Fixed(const Fixed& other ){
	std::cout << "Copy constructor called" << '\n';
	_fixedPoint = other.getRawBits();
}
Fixed &Fixed::operator= (const Fixed &rhs){
	std::cout << "Copy assignment operator called" << '\n';
	if (this == &rhs)
		return (*this);
	this->_fixedPoint = rhs.getRawBits();
	return(*this);
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << '\n';	
}

int Fixed::getRawBits(void)const {
	std::cout << "getRawBits member function called" << '\n';
	return _fixedPoint;
}

void Fixed::setRawBits( int const raw ){
	_fixedPoint = raw;
}