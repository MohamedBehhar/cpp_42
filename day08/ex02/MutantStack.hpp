#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP
#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack(void) : std::stack<T>(){}
	MutantStack(const MutantStack &other)
	{
		*this = other;
	}
	MutantStack &operator=(const MutantStack &rhs)
	{
		std::stack<T>::operator=(rhs);
	}
	~MutantStack(void){}
	iterator begin()
	{
		return this->c.begin();
	}
	iterator end()
	{
		return this->c.end();
	}
};

#endif