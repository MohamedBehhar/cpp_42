#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog:public Animal{
	public:
		Dog();
		Dog(std::string type);
		Dog &operator= (const Dog &rhs);
		Dog(const Dog& other);
		~Dog();
		void makeSound();
};

#endif 