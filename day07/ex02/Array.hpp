#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <stdexecpt>
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
		memcop
	}
	~Array();
};

#endif