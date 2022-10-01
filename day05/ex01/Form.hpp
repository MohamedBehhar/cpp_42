/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:51:07 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/01 16:56:46 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>

class Form
{
private:
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSignedIt;
	const int			_gradeToExecuteIt;
public:
	Form(/* args */);
	Form(	const std::string name,	 const int gradeToSignedIt, const int gradeToExecuteIt);
	~Form();
};
#endif