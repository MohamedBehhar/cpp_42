/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 17:56:57 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/07 18:10:50 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(){
	Fixed test;
	Fixed test1(test);
	std::cout << test.getRawBits() << std::endl;
	std::cout << test1.getRawBits() << std::endl;
}