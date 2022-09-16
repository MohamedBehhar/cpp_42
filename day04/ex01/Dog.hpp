/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:12 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 14:29:16 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:virtual public Animal{
	public:
		Dog();
		Dog(std::string &type);
		Dog &operator= (const Dog &rhs);
		Dog(const Dog& other);
		~Dog();
		void makeSound()const ;
};

#endif 