/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:53:43 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 18:57:42 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>

class Bureaucrat
{
private:
	const std::string _name;
	int _range;
public:
	Bureaucrat(/* args */);
	Bureaucrat(const std::string& name, int range);
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat &operator +(const Bureaucrat& rhs);
	~Bureaucrat();
};




#endif