/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:41:34 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/24 14:02:05 by mbehhar          ###   ########.fr       */
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
	Harl harl;
	void (Harl::*funcAarr[4])();
	funcAarr[0] = &Harl::debug;
	funcAarr[1] = &Harl::info;
	funcAarr[2] = &Harl::warning;
	funcAarr[3] = &Harl::error;
	int l = -1;
	if (level == "DEBUG")
		l = 0;
	else if (level == "INFO")
		l = 1;
	else if (level == "WARNING")
		l = 2;
	else if (level == "ERROR")
		l = 3;

	switch (l)
	{
	case 0:
		LOG << "[DEBUG]" << N;
		(harl.*funcAarr[0])();
		LOG << N;
	case 1:
		LOG << "[INFO]" << N;
		(harl.*funcAarr[1])();
		LOG << N;
	case 2:
		LOG << "[WARNING]" << N;
		(harl.*funcAarr[2])();
		LOG << N;
	case 3:
		LOG << "[ERROR]" << N;
		(harl.*funcAarr[3])();
		LOG << N;
		break;
	default:
		LOG << "[ Probably complaining about insignificant problems ]" << N;
	}
}