/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:53:33 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/13 18:01:17 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){
	ClapTrap moha("moha");
	ClapTrap nani("nani");

	moha.print();
	nani.print();
	moha.attack(nani.getName());
	nani.takeDamage(moha.getAttackDamage());
	nani.beRepaired(10);
	moha.print();
	nani.print();
	return (0);
}