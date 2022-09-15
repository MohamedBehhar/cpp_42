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
	std::string getType();
	~Animal();
	virtual void makeSound();
};

#endif