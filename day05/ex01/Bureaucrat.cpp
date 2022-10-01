/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:25:36 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/01 16:44:51 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("moha"), _grade(0)
{
	std::cout << "Bureaucrat Default Constructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat  Parametrized Constructor called\n";
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assignment operator called\n";
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor called\n";
	*this = other;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called\n";
}

//exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}


//getters
const std::string &Bureaucrat::getName()const{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

//setters
void Bureaucrat::setGrade(int grade)
{
	this->_grade = grade;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

// increment decrement
void Bureaucrat::incrementGrade(void)
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}
void Bureaucrat::decrementGrade(void)
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}



std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat {Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << "}";
	return (out);
}