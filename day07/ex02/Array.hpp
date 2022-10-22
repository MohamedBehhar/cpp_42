/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 11:31:06 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 11:53:12 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdexcept>
#include <iostream>

template <typename T>
class Array
{
private:
	T *ptr;
	unsigned int _n;

public:
	Array():ptr(NULL), _n(0){};
	Array(unsigned int n):ptr(new T[n]), _n(n){};
	Array(const Array &other):ptr(new T[other._n]), _n(other._n){
		memcopy(T, other.ptr, other._n * sizeof(T));
	}
	Array &operator = (const Array &rhs){
		this->_n = rhs._n;
		this->ptr = rhs.ptr;
		this->ptr = [rhs._n];
		memccpy(this->ptr, rhs.ptr, rhs._n * sizeof(T));
	}
	~Array();
};

#endif