/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:49:42 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 12:49:43 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default target")
{
	std::cout << "default constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "parametrized constructor RobotomyRequestForm called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : Form(other), _target(other._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "RobotomyRequestForm copy assignement operator called" << std::endl;
	(void)rhs;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
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
		for (int i = 0; i < 10 ; i++)
		{

			if (rand() % 2 == 0)
				std::cout << this->_target << " has been robotomized successfully\n";
			else
				std::cout << "robotomy failed\n";
		}
	}
}