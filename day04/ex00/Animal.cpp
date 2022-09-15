#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal Default Constructor called\n";
}

Animal::Animal(const std::string &type){
	std::cout << "Animal  Parametrized Constructor called\n";
	_type = type;
}

Animal &Animal::operator= (const Animal &rhs){
	std::cout << "Animal  copy assignment operator called\n";
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

Animal::Animal(const Animal &other){
	std::cout << "Animal Copy constructor called" << '\n';
	*this = other;
}

Animal::~Animal(){
	std::cout << "Animal Destructor called" << '\n';
}

//functions
void Animal::makeSound(){
	std::cout << "animal make sound \n";
}

// getters
std::string Animal::getType(){
	return (_type);
}