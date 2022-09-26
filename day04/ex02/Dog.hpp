/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:12 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 16:41:38 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog:virtual public Animal{
	private:
		Brain *dogBrain;
	public:
		Dog();
		Dog(const std::string &type);
		Dog(const Dog& other);
		Dog &operator= (const Dog &rhs);
		~Dog();
		void makeSound()const ;
};

#endif 