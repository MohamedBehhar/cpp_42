#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP
#include <iostream>
#include <string.h>

struct Data
{
	std::string name;
	int 		age;
	Data(std::string name, int age);
	~Data();

};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif