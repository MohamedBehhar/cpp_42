/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:10:48 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:10:49 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

// orthodox form
Span::Span()
{
	N = 0;
};

Span::Span(unsigned int n)
{
	N = n;
};

Span::~Span(){};

Span::Span(const Span &other)
{
	*this = other;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->N = rhs.N;
		this->data = rhs.data;
	}
	return *this;
}

//  exceptions
char const *Span::FullException::what(void) const throw()
{
	return "Exception: Span is full!";
}
char const *Span::NoSpanFound::what(void) const throw()
{
	return "Exception: No Span Found!";
}

// functions
void Span::addNumber(int num)
{
	if (data.size() == N)
		throw FullException();
	data.push_back(num);
}

void Span::addManyNumber(std::vector<int>::iterator bg, std::vector<int>::iterator end)
{
    if(bg == end)
        return ;
    std::vector<int>::iterator i;
    for (i = bg ; i != end; i++)
        data.push_back(*i);
}

int Span::shortestSpan(void) const
{
	if (N <= 1)
		throw NoSpanFound();
	int shortest;
	size_t i;
	size_t j;
	shortest = INT32_MAX;
	for (i = 0; i < data.size(); i++)
	{
		for (j = i + 1; j < data.size(); j++)
		{
			if (shortest > abs(data[i] - data[j]))
				shortest = abs(data[i] - data[j]);
		}
	}
	return shortest;
}

int Span::longestSpan(void) const
{
	if (N <= 1)
		throw NoSpanFound();
	int longest;
	const int &min = *min_element(data.begin(),data.end() );
    const int &max = *max_element(data.begin(),data.end());
	longest = abs(max - min);
	return longest;
}