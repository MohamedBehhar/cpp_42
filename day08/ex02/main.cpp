/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 12:13:31 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/29 12:13:32 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <iostream>
int main()
{
	std::cout << "---- my test ----" << std::endl;
	MutantStack<std::string> strStack;
	strStack.push("hello");
	strStack.push("from");
	strStack.push("the");
	strStack.push("other");
	strStack.push("side");

	MutantStack<std::string>::iterator itr;
	for (itr = strStack.begin(); itr != strStack.end(); itr++)
		std::cout << *itr << std::endl;

	std::cout << "---- subject test ----" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}