/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:51:24 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/09 14:18:49 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					_fixedPoint;
	static const int	_fractional;
public:
	Fixed();
	Fixed(const Fixed& other);
	Fixed &operator=(const Fixed &rhs);
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};



#endif