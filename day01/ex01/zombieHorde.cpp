/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 12:58:00 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/20 15:54:12 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
	Zombie *arrOfZombie = new Zombie[N];
	
	if (arrOfZombie == NULL)
		return (NULL);
	for (int i = 0; i < N; i++)
		arrOfZombie[i].setName(name);
	return (arrOfZombie);
}

