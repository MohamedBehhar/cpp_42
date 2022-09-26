/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbehhar <mbehhar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 13:20:16 by mbehhar           #+#    #+#             */
/*   Updated: 2022/09/26 18:27:11 by mbehhar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{

	std::cout << "********* Dogs *********\n";
	Animal *arrOfAnimal[10];
	for (int i = 0; i < 5; i++)
		arrOfAnimal[i] = new Dog();
	std::cout << "********* Cats *********\n";
	for (int j = 5; j < 10; j++)
		arrOfAnimal[j] = new Cat();

	std::cout << "********* Making Sound *********\n";
	for (int i = 0; i < 10; i++)
		arrOfAnimal[i]->makeSound();

	std::cout << "********* Destructions *********\n";
	for (int i = 0; i < 10; i++)
	{
		delete arrOfAnimal[i];
	}

	std::cout << "********* Deep copy *********\n";
	Dog mimi("mimi");
	Dog tom("tom");

	std::cout << ">>> Name: " << tom.getType() << "\n";
	tom = mimi;
	std::cout << ">>> Name: " << tom.getType() << "\n";
	std::cout << "******* leaks ********\n";
	system("leaks Polymorphism");
	std::cout << "******* Destructions ********\n";
	Cat mimi("mimi");
	Cat tom("tom");
	mimi = tom;

	std::cout << mimi.getType() << "\n";
	system("leaks Polymorphism");

	return (0);
}