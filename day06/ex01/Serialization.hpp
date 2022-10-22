/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 09:45:29 by mbehhar           #+#    #+#             */
/*   Updated: 2022/10/22 09:45:30 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>
#include <string.h>

struct Data
{
	std::string name;
	int 		age;
	Data(std::string name, int age);
	~Data();

};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif