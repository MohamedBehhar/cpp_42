/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:16 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 17:32:49 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	Animal *cat = new Cat;
	Animal *dog = new Dog;

	std::cout << "****** Making sound ******\n";
	cat->makeSound();
	dog->makeSound();
	std::cout << "****** Destruction ******\n";
	delete cat;
	delete dog;
	return (0);
}