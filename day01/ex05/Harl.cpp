/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:19:50 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/26 15:50:31 by mbehhar          ###   ########.fr       */
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
	if (level == "DEBUG")
		(harl.*funcAarr[0])();
	else if (level == "INFO")
		(harl.*funcAarr[1])();
	else if (level == "WARNING")
		(harl.*funcAarr[2])();
	else if (level == "ERROR")
		(harl.*funcAarr[3])();
}