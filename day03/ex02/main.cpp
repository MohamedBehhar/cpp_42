/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:57:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/24 17:49:26 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main(){
	FragTrap moha("moha");
	FragTrap nani("nani");

	moha.print();
	nani.print();
	moha.attack(nani.getName());
	nani.takeDamage(moha.getAttackDamage());
	moha.highFivesGuys();
	nani.print();
	
	return (0);
}