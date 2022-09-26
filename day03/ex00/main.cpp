/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:53:33 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/24 14:42:48 by mbehhar          ###   ########.fr       */
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
	moha.print();
	nani.print();
	return (0);
}