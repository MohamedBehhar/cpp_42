/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:50:02 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 14:05:24 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"


Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}



Intern::Intern(Intern const &other)
{
	*this = other;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern &Intern::operator=(Intern const &rhs)
{
	std::cout << "Intern copy assignement operator called" << std::endl;
	(void)rhs;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Form *makeShrubbery(std::string target){
	return new ShrubberyCreationForm(target);
}
Form *makeRobotomyRequest(std::string target){
	return new RobotomyRequestForm(target);
}
Form *makePresidentialPardon(std::string target){
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string name, std::string target){
	std::string  arr[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	Form *(*funcAarr[3])(std::string target);
	funcAarr[0] = makeShrubbery;
	funcAarr[1] = makeRobotomyRequest;
	funcAarr[2] = makePresidentialPardon;
	for (int i = 0; i < 3 ; i++){
		if (arr[i] == name)
			return funcAarr[i](target);
	}
	return NULL;
}