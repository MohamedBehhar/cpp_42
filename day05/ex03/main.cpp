/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 12:28:22 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/08 14:08:28 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat superQaid("superQaid", 1);
	PresidentialPardonForm chahada("chahada");
	Intern test;
	Form *koko= test.makeForm("hfhf", "skj");
	if(koko == NULL)
		std::cout << "hahah" << std::endl;
	
	try
	{
		// superQaid.signForm(chahada);
		chahada.beSigned(superQaid);
		// std::cout << chahada.getSignGrade() << std::endl;
		// std::cout << chahada.isSigned() << std::endl;
		chahada.execute(superQaid);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
}