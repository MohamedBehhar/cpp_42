#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <iterator>
template<typename T>
std::string easyfind(T &container, int toFind)
{
	typename T::const_iterator it;
	for (it = container.begin(); it != container.end(); it++)
		if (*it == toFind)
			return ("Element found");
	return ("Element not found");

}

#endif