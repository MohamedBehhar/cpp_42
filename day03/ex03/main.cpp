/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 12:57:23 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/24 12:23:16 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "DiamondTrap.hpp"

int main(){
	DiamondTrap moha("moha");
	moha.whoAmI();
	moha.print();
	moha.attack("koko");
	moha.takeDamage(10);
	moha.print();
	return (0);
}