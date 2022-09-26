/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:19:55 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 16:52:47 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string _type;
public:
	Animal(/* args */);
	Animal(const std::string &type);
	Animal (const Animal &other);
	Animal &operator= (const Animal &rhs);
	std::string getType()const;
	virtual void makeSound()const;
	virtual ~Animal();
};

#endif