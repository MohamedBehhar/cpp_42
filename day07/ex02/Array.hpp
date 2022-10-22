/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:31:06 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 14:43:46 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdexcept>
#include <iostream>

template <class T>
class Array
{
private:
	T *ptr;
	unsigned int _n;

public:
	Array() : ptr(NULL), _n(0){}
	Array(unsigned int n) : ptr(new T[n]), _n(n){}
	Array(const Array &other)
	{
		_n = 0;
		*this = other;
	}
	Array &operator=(const Array &rhs)
	{
		if (_n != 0)
			delete ptr;
		this->_n = rhs._n;
		ptr = new T[_n];
		memcpy(this->ptr, rhs.ptr, rhs._n * sizeof(T));
		return *this;
	}
	~Array()
	{
		delete ptr;
	}

	size_t size(void)
	{
		return _n;
	}
	T &operator[](unsigned int index)
	{
		if (index >= _n)
			throw std::runtime_error("Error: Out of band");
		return ptr[index];
	}
};

#endif