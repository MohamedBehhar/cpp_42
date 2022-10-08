/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:51:07 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 11:23:02 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSignedIt;
	const int _gradeToExecuteIt;

	Form(/* args */);

public:
	Form(const std::string name, const int gradeToSignedIt, const int gradeToExecuteIt);
	Form(Form const &other);
	Form &operator=(Form const &rhs);
	virtual ~Form();

	class GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class FormIsNotSignedException : public std::exception
	{
		virtual const char *what() const throw();
	};
	std::string const &getName(void) const;
	bool isSigned(void) const;
	int getSignGrade(void) const;
	int getExecuteGrade(void) const;

	void beSigned(Bureaucrat const &bureaucrat);
	virtual void execute(Bureaucrat const &bureaucrat) const = 0;
};

std::ostream &operator<<(std::ostream &out, Form const &form);

#endif