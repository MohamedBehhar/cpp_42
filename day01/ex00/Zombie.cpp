/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:44:22 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/20 13:09:12 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name ){
	_name = name;
	std::cout << "Parametrized constructor for: " << name << " has been called" << std::endl;
}

Zombie::~Zombie(){
	std::cout <<  _name << ": has been destroid" << std::endl;
}

void Zombie::annouce(void){
	std::cout <<  _name + ":	" << "BraiiiiiiinnnzzzZ..." << std::endl;
}