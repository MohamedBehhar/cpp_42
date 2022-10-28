#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <stdexcept>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdint.h>

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
	size_t shortestSpan(void) const;
	size_t longestSpan(void) const;

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
