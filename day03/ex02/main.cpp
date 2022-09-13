/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:57:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/13 17:27:46 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "ScavTrap.hpp"
#include <iostream>

int main(){
	ScavTrap moha("moha");
	ScavTrap nani("nani");

	moha.print();
	nani.print();
	moha.attack(nani.getName());
	nani.print();
	
	return (0);
}