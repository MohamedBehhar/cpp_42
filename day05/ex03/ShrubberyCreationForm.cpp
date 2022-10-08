/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:49:33 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 12:49:34 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137), _target("default target")
{
	std::cout << "default constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : Form("shrubbery", 145, 137), _target(target)
{
	std::cout << "parametrized constructor ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : Form(other), _target(other._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "ShrubberyCreationForm copy assignement operator called" << std::endl;
	(void)rhs;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned() == false)
	{
		throw Form::FormIsNotSignedException();
	}
	if (executor.getGrade() > this->getExecuteGrade())
	{
		throw Form::GradeTooLowException();
	}
	else
	{
		std::ofstream outFile(this->_target + "_shrubbery");
		if (outFile.is_open())
		{
			outFile << "       _-_" << std::endl; 
			outFile << "    /~~   ~~\\" << std::endl; 
			outFile << " /~~         ~~\\" << std::endl; 
			outFile << "{               }" << std::endl; 
			outFile << " \\  _-     -_  /" << std::endl; 
			outFile << "   ~  \\ //  ~" << std::endl; 
			outFile << "_- -   | | _- _" << std::endl; 
			outFile << "  _ -  | |   -_" << std::endl; 
			outFile << "      // \\\\" << std::endl; 
		}
	}
}






