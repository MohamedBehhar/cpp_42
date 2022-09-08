/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:48:14 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/08 18:03:48 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "default constructor called" << '\n';
	_left = 0;
}

Fixed::Fixed(const Fixed& other ){
	std::cout << "copy constructor called" << '\n';
	_left = other._left;
}

Fixed::~Fixed(){
	std::cout << "desstructor called" << '\n';	
}

int Fixed::getRawBits(void)const {
	return _left;
}

void Fixed::setRawBits( int const raw ){
	_left = raw;
}