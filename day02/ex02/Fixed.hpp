/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 13:11:44 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/11 16:58:19 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractional = 8;
public:
	Fixed();
	Fixed(const int intVal);
	Fixed(const float floatVal);
	Fixed(const Fixed& other);
	Fixed &operator = (const Fixed &rhs);
	Fixed &operator + (const Fixed &rhs);
	Fixed &operator - (const Fixed &rhs);
	Fixed &operator * (const Fixed &rhs);
	Fixed &operator / (const Fixed &rhs);
	bool  operator < (const Fixed &rhs);
	bool  operator <= (const Fixed &rhs);
	bool  operator > (const Fixed &rhs);
	bool  operator >= (const Fixed &rhs);
	bool  operator == (const Fixed &rhs);
	bool  operator != (const Fixed &rhs);
	Fixed&  operator ++ (void);
	Fixed  operator ++ (int);
	Fixed&  operator --(void);
	Fixed  operator --(int);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int		toInt( void ) const;
	static	Fixed& min(Fixed& ref1, Fixed& ref2);
	static	const Fixed& min(const Fixed& ref1, const Fixed& ref2);
	static	Fixed& max(Fixed& ref1, Fixed& ref2);
	static	const Fixed& max(const Fixed& ref1, const Fixed& ref2);
};

std::ostream& operator << (std::ostream& output, const Fixed &fixed);


#endif