/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 18:44:22 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/25 14:01:52 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name ){
	_name = name;
}

Zombie::~Zombie(){
	std::cout <<  _name << ":	has been destroid" << std::endl;
}

void Zombie::annouce(void){
	std::cout <<  _name + ":	" << "BraiiiiiiinnnzzzZ..." << std::endl;
}