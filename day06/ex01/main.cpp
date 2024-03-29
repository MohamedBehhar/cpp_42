/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:45:11 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 09:58:36 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include <iostream>

int main(){
	Data *Walter = new Data("heisenberg", 65);

	std::cout << "=> Before serialization: \n" <<  Walter->name << " " << Walter->age << std::endl;

	uintptr_t serialzedWalter = serialize(Walter);
	std::cout << "=> After serialization: \n" << serialzedWalter << std::endl;

	Data * deserializedWalter = deserialize(serialzedWalter);
	std::cout << "=> After deserialization: \n" << deserializedWalter->name << " " << deserializedWalter->age << std::endl;

	delete Walter;
	return 0;
}
