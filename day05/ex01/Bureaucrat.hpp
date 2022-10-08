/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:16:19 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/01 16:26:04 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string _name;
	int _grade;

public:
	Bureaucrat(/* args */);
	Bureaucrat(std::string name, int _grade);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	Bureaucrat(const Bureaucrat &other);

	~Bureaucrat();
	const std::string &getName() const;
	int getGrade(void) const;
	void setGrade(int grade);
	void incrementGrade(void);
	void decrementGrade(void);
	class GradeTooHighException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		const char *what() const throw();
	};
	void signForm(const Form& form);
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat);

#endif