/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:10:56 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:11:35 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>

class Span
{
private:
	std::vector<int> data;
	unsigned int N;

public:
	Span(/* args */);
	Span(unsigned int n);
	Span(const Span &other);
	Span &operator=(const Span &rhs);
	~Span();

	void addNumber(int num);
	void addManyNumber(std::vector<int>::iterator bg, std::vector<int>::iterator end);
	int shortestSpan(void) const;
	int longestSpan(void) const;

	class FullException : public std::exception
	{
		char const *what(void) const throw();
	};
	class NoSpanFound : public std::exception
	{
		char const *what(void) const throw();
	};
};

#endif
