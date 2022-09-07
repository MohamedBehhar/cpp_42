/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:51:24 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/07 18:09:15 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
private:
	int					_left;
	static const int	_right;
public:
	Fixed();
	Fixed(const Fixed& );
	~Fixed();
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};



#endif