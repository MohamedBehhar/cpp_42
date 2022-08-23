/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:19:50 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/23 18:37:45 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(/* args */)
{
}

Harl::~Harl()
{
}

void Harl::debug()
{
	LOG << "I love having extra bacon for my XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << N;
}

void Harl::info()
{
	LOG << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << N;
}

void Harl::warning()
{
	LOG << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << N;
}

void Harl::error()
{
	LOG << "This is unacceptable! I want to speak to the manager now." << N;
}

void Harl::complain(std::string level)
{
	void *arr[4];

	void (Harl::*debugPtr)(void) = &Harl::debug;
	void (Harl::*infoPtr)(void) = &Harl::info;
	void (Harl::*warningPtr)(void) = &Harl::warning;
	void (Harl::*errorPtr)(void) = &Harl::error;

	arr[0] = &debugPtr;
	arr[1] = &infoPtr;
	arr[2] = &warningPtr;
	arr[3] = &errorPtr;
	char flag;
	if (level == "DEBUG")
		flag = 'D';
	else if (level == "INFO")
		flag = 'I';
	if (level == "WARNING")
		flag = 'W';
	if (level == "ERROR")
		flag = 'E';

	switch (flag)
	{
		case 'D':
			LOG << "hhhh" << N;
			break;
		case 'I':
			infoPtr;
			break;
		case 'W':
			warningPtr;
			break;
		case 'E':
			errorPtr;
			break;

		default:
			break;
	}
}