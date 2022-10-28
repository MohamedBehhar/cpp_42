#include "Span.hpp"

// orthodox form
Span::Span(){
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

size_t Span::shortestSpan(void) const
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

size_t Span::longestSpan(void) const {
	if (N <= 1)
		throw NoSpanFound();
	int longest;
	size_t i ;
	size_t j;
	longest = INT32_MIN;
		for (i = 0; i < data.size(); i++)
	{
		for (j = i + 1; j < data.size(); j++)
		{
			if (longest < abs(data[i] - data[j]))
				longest = abs(data[i] - data[j]);
		}
	}
	return longest;
}