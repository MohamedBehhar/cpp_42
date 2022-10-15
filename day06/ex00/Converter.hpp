#ifndef CONVERTER_HPP
#define CONVERTER_HPP
#include <iostream>
#include <math.h>
#include <string.h>
#include <limits>

class Converter
{
private:
	std::string toConvert;
public:

	Converter();
	Converter(std::string toConvert);
	Converter(Converter const & src);
	~Converter();
	Converter & operator=(Converter const & rhs);
	void convert(void);
	int checkPseudo(void);
	void printChar(char c);
	void printInt(int i);
	void printFloat(float f);
	void printDouble(double d);
};



#endif