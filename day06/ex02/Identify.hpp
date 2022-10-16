#ifndef IDENTIFY_HPP
#define IDENTIFY_HPP

#include <iostream>
#include <string.h>
#include <stdint.h>
#include <cmath>

class Base
{
public:
	virtual ~Base() {}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void);
void identify(Base* p);
void identify(Base & p);

#endif