/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:07 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/10 18:19:18 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//default const
Fixed::Fixed(){
	std::cout << "Default constructor called" << '\n';
	_fixedPoint = 0;
}

// int const
Fixed::Fixed(const int intVal){
	std::cout << "Int constructor called" << '\n';
	_fixedPoint = intVal  << _fractional;
}

// float const
Fixed::Fixed(const float floatVal){
	std::cout << "Float constructor called" << '\n';
	_fixedPoint =  roundf(floatVal * (1 << _fractional));
}

//copy const
Fixed::Fixed(const Fixed& other ){
	std::cout << "Copy constructor called" << '\n';
	*this = other;
}

//copy ass operator
// Fixed &Fixed::operator= (const Fixed &rhs){
// 	std::cout << "Copy assignment operator called" << '\n';
// 	if (this == &rhs)
// 		return (*this);
// 	this->_fixedPoint = rhs.getRawBits();
// 	return(*this);
// }

//<< overload
std::ostream& operator << (std::ostream& output, const Fixed &fixed){
	output << fixed.toFloat() ;
	return output;
}

//destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << '\n';	
}

//functions
int Fixed::getRawBits(void)const {
	// std::cout << "getRawBits member function called" << '\n';
	return _fixedPoint;
}

void Fixed::setRawBits( int const raw ){
	_fixedPoint = raw;
}

int	Fixed::toInt( void ) const{
	return (_fixedPoint >> _fractional);
}

float Fixed::toFloat( void ) const
{
	return ((float) _fixedPoint / (1 << _fractional));
}
