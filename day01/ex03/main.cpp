/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 17:04:18 by mbehhar           #+#    #+#             */
/*   Updated: 2022/08/20 17:51:19 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

int main(){
	Weapon weaponObj;
	weaponObj.setType("Saifo nare");
	
	
	std::cout << "Geting the weapon type: " <<weaponObj.getType() << std::endl;
	return (0);
}