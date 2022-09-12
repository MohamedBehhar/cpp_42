/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 14:53:33 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/12 18:54:35 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main(){
	ClapTrap clap1("moha");
	ClapTrap clap2("nani");
	
	clap1.print();
	clap1.attack("nani");
	clap1.attack("nani");
	clap2.takeDamage(clap1.getAttackDamage());
	clap1.print();
	return (0);
}