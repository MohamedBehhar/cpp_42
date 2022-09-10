/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:34:22 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/10 18:34:57 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( 10 );
// 	Fixed const c( 42.42f );
// 	Fixed const d( b );
// 	a = Fixed( 1234.4321f );
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	// float a = 42.42;
// 	// float b = roundf(a * ( 1 << 8));
// 	// std::cout << b << "\n";
// 	// std::cout << b / ( 1 << 8) << "\n";
// 	return 0;
// }

class moha
{
private:
	char *_ptr;

public:
	moha();
	moha(const char *ptr);
	void print()
	{
		std::cout << _ptr << std::endl;
	}
	void set(const char *str)
	{
		// delete _ptr;
		_ptr = strdup(str);
	}
	~moha();
};

moha::moha(/* args */)
{
	_ptr = NULL;
}

moha::moha(const char *ptr)
{
	_ptr = strdup(ptr);
}


moha::~moha()
{
	delete _ptr;
}

int main(void)
{

	moha obj3;
	{
		moha obj("koko");

		obj.print();
		obj3 = obj;
	}
	obj3.print();

	return 0;
}
