/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:16 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/16 14:28:27 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	// Animal arrOfAnimal[10];
	// for (int i = 0; i < 5; i++)
	// 	arrOfAnimal[i] = Dog();
	// for (int j = 5; j < 10; j++)
	// 	arrOfAnimal[j] = Cat();

	// for (int i = 0; i < 10; i++)
	// {
	// 	delete
	// }

	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;
	delete i;

	return (0);
}