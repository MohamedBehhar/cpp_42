#include "Dog.hpp"


Dog::Dog(){
	std::cout << "Dog Default Constructor called\n";
}

Dog::Dog(std::string type):Animal(type){
	std::cout << "Dog Parametrized Constructor called\n";
}

Dog &Dog::operator= (const Dog &rhs){
	std::cout << "Dog  copy assignment operator called\n";
	if (this == &rhs)
		return (*this);
	this->_type = rhs._type;
	return (*this);
}

Dog::Dog(const Dog &other){
	std::cout << "Dog Copy constructor called" << '\n';
	*this = other;
}

Dog::~Dog(){
	std::cout << "Dog Destructor called" << '\n';
}

//functions 
void Dog::makeSound(){
	std::cout << "Dog Bark" << '\n';
}