/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:45:34 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 14:27:38 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Brain Default constructor called\n";
	_ideas[0] = "\0";
}

Brain::Brain(std::string &ideas){
	std::cout << "Brain Parametrized constructor called\n";
	for (int i = 0; i < 100; i++)
		_ideas[i] = ideas;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain Copy constructor called" << '\n';
	*this = other;
}

Brain &Brain::operator = (const Brain &rhs){
	std::cout << "Brain copy assignment operator called\n";
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

Brain::~Brain(){
	std::cout << "Brain Destructor called" << std::endl;
}

//functions
const std::string Brain::getIdea(int i){
	if (i < 100)
		return (_ideas[i]);
	std::cout << "enter a valid index: >= 0 && <= 99" << std::endl;
	return (NULL);
}