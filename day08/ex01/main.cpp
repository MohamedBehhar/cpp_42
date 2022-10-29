/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:09:05 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:09:06 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <list>
int main()
{
	Span s(4);
	s.addNumber(11);
	s.addNumber(12);
	s.addNumber(147);
	s.addNumber(-17);

	std::cout << "shortestSpan: " << s.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << s.longestSpan() << std::endl;
	try
	{
		s.addNumber(9);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Span span;
		std::cout << span.shortestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---- adding many numbers ----" << std::endl;
	Span manyNumbers(10);
	int arr[10] = {9, 28, 3, 46, -9, 33, 77, 21, 4, 11};
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(arr[i]);
	manyNumbers.addManyNumber(vec.begin(), vec.end());
	std::cout << "sortestSpan: " << manyNumbers.shortestSpan() << std::endl;
	std::cout << "longestSpan: " << manyNumbers.longestSpan() << std::endl;

	std::cout << "---- subject test ----" << std::endl;
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
	return 0;
}