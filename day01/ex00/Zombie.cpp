/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:44:22 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/19 18:55:33 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << "default constructor called" << std::endl;
}

Zombie::~Zombie(){
	std::cout << name << ": has ben destroid" << std::endl;
}

void Zombie::annouce(void){
	std::cout << name + ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}