/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:17 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/12 13:04:54 by mbehhar          ###   ########.fr       */
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
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float 	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator << (std::ostream& output, const Fixed &fixed);


#endif