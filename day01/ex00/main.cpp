/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:51:59 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/25 14:05:03 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie zombie("MOHAMED");
	zombie.annouce();
	Zombie *ptrZombie;
	ptrZombie = newZombie("NEW_ZOMBIE");
	ptrZombie->annouce();
	randomChump("RANDOM_CHUMP");
	delete ptrZombie;
	return (0);
}