/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:53:57 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/20 16:02:52 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Zombie.hpp"

int main()
{
	Zombie *ptrToZombieHorde;
	std::string str = "DaftPunk";
	ptrToZombieHorde = zombieHorde(3, str);
	if (ptrToZombieHorde == NULL)
	{
		std::cout << "Allocation failled" << std::endl;
		return (1);
	}
	for (int i = 0; i < 3; i++)
		ptrToZombieHorde[i].annouce();
	delete[] ptrToZombieHorde;
	return (0);
}