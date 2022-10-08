/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:51:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 12:44:08 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form():_name("moha"),_isSigned(false), _gradeToSignedIt(0), _gradeToExecuteIt(0)
{
	std::cout << "Form Default Constructor called\n";
}

Form::Form(const std::string name, const int gradeToSignedIt, const int gradeToExecuteIt):_name(name), _isSigned(false), _gradeToSignedIt(gradeToSignedIt), _gradeToExecuteIt(gradeToExecuteIt){
	std::cout << "Form parametrized Constructor called\n";

}

Form::Form(Form const& other):_name(other._name), _isSigned(other._isSigned), _gradeToSignedIt(other._gradeToSignedIt), _gradeToExecuteIt(other._gradeToExecuteIt)
{
	std::cout << "Form copy Constructor called\n";

}


Form &Form::operator = (Form const& rhs){
	std::cout << "Form copy assignement operator called\n";
	if (this != &rhs)
		this->_isSigned = rhs._isSigned;
	return (*this);
}

Form::~Form(){
	std::cout << "Form destructor called\n";
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "==> FormException: Grade too High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("==> FormException: Grade too Low");
}

// throw is not signed
const char *Form::FormIsNotSignedException::what() const throw(){
	return "==> FormException: Form is not signed\n";
}
//getters

std::string const &Form::getName(void) const
{
	return _name;
}

int Form::getSignGrade(void) const
{
	return _gradeToSignedIt;
}
int Form::getExecuteGrade(void) const
{
	return _gradeToExecuteIt;
}

bool Form::isSigned(void) const
{
	return (this->_isSigned);
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSignedIt)
		throw Form::GradeTooLowException();
	_isSigned = true;
}