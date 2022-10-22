/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:30:57 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 14:51:44 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void plusOne(int &arr)
{
	arr += 1;
}

void power(int &arr)
{
	arr *= arr;
}

void toUpper(char &c)
{
	c -= 32;
}

template <typename T>
void print(T a)
{
	std::cout << a << " ";
}

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};

	iter(&arr[2], 3, power);
	iter(arr, 5, print);
	std::cout << std::endl;

	char str[6] = "water";
	iter(&str[2], 3, toUpper);
	iter(str, 5, print);
	std::cout << std::endl;
	return 0;
}