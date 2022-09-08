/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:56:57 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/08 18:04:18 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
	Fixed test;
	std::cout << test.getRawBits() << std::endl;
	test.setRawBits(10);
	Fixed test1(test);
	std::cout << test1.getRawBits() << std::endl;
	std::cout << test.getRawBits() << std::endl;
	std::cout << test1.getRawBits() << std::endl;
}