/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:08:55 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:08:56 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <array>
#include <list>
int main()
{
	std::cout << "---- vector test ----" << std::endl;
	std::vector<int> v;
	v.push_back(12);
	v.push_back(78);
	v.push_back(1);
	v.push_back(128);
	std::cout << easyfind(v, 2888) << std::endl;

	std::cout << "---- array test ----" << std::endl;
	std::array<int, 5> arr;
	arr[0] = 278;
	arr[1] = 8;
	arr[2] = 28;
	arr[3] = 0;
	arr[4] = 77;
	std::cout << easyfind(arr, 0) << std::endl;

	std::cout << "---- list test ----" << std::endl;
	std::list<int> testList;
	for (int i = 0; i < 5; ++i)
		testList.push_back(i * 2);
	std::cout << easyfind(testList, 2) << std::endl;

	return (0);
}