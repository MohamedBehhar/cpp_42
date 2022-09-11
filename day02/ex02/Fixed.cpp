/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:11:31 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/11 17:01:19 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// default const
Fixed::Fixed()
{
	// std::cout << "Default constructor called" << '\n';
	_fixedPoint = 0;
}

// int const
Fixed::Fixed(const int intVal)
{
	// std::cout << "Int constructor called" << '\n';
	_fixedPoint = intVal << _fractional;
}

// float const
Fixed::Fixed(const float floatVal)
{
	// std::cout << "Float constructor called" << '\n';
	_fixedPoint = roundf(floatVal * (1 << _fractional));
}

// copy const
Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << '\n';
	*this = other;
}

// copy ass operator
Fixed &Fixed::operator=(const Fixed &rhs)
{
	// std::cout << "Copy assignment operator called" << '\n';
	if (this == &rhs)
		return (*this);
	this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

//<< overload
std::ostream &operator<<(std::ostream &output, const Fixed &fixed)
{
	output << fixed.toFloat();
	return output;
}
bool Fixed::operator<(const Fixed &rhs)
{
	return (this->_fixedPoint < rhs.toInt());
}
bool Fixed::operator<=(const Fixed &rhs)
{
	return (this->_fixedPoint <= rhs.toInt());
}
bool Fixed::operator>(const Fixed &rhs)
{
	return (this->_fixedPoint > rhs.toInt());
}
bool Fixed::operator>=(const Fixed &rhs)
{
	return (this->_fixedPoint >= rhs.toInt());
}
bool Fixed::operator==(const Fixed &rhs)
{
	return (this->_fixedPoint == rhs.toInt());
}
bool Fixed::operator!=(const Fixed &rhs)
{
	return (this->_fixedPoint != rhs.toInt());
}

Fixed &Fixed::operator+(const Fixed &rhs)
{
	this->_fixedPoint += rhs.toInt();
	return (*this);
}
Fixed &Fixed::operator-(const Fixed &rhs)
{
	this->_fixedPoint = rhs.toInt();
	return (*this);
}
Fixed &Fixed::operator*(const Fixed &rhs)
{
	this->_fixedPoint *= rhs.toInt();
	return (*this);
}
Fixed &Fixed::operator/(const Fixed &rhs)
{
	this->_fixedPoint /= rhs.toInt();
	return (*this);
}

Fixed &Fixed::operator++()
{
	++_fixedPoint;
	return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);

	_fixedPoint++;
	return (tmp);
}
Fixed &Fixed::operator--()
{
	--_fixedPoint;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);

	_fixedPoint--;
	return (tmp);
}

// destructor
Fixed::~Fixed()
{
	// std::cout << "Destructor called" << '\n';
}

// functions
int Fixed::getRawBits(void) const
{
	return _fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
	_fixedPoint = raw;
}

int Fixed::toInt(void) const
{
	return (_fixedPoint >> _fractional);
}

float Fixed::toFloat(void) const
{
	return ((float)_fixedPoint / (1 << _fractional));
}

// static func
Fixed &Fixed::min(Fixed &ref1, Fixed &ref2)
{
	if (ref1._fixedPoint < ref2._fixedPoint)
		return (ref1);
	return (ref2);
}

Fixed const &Fixed::min(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1._fixedPoint < ref2._fixedPoint)
		return (ref1);
	return (ref2);
}

Fixed &Fixed::max(Fixed &ref1, Fixed &ref2)
{
	if (ref1._fixedPoint > ref2._fixedPoint)
		return (ref1);
	return (ref2);
}


Fixed const &Fixed::max(const Fixed &ref1, const Fixed &ref2)
{
	if (ref1._fixedPoint > ref2._fixedPoint)
		return (ref1);
	return (ref2);
}
