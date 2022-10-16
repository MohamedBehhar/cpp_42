#include "Converter.hpp"

Converter::Converter()
{
	// std::cout << "Converter default constructor called\n";
}

Converter::Converter(std::string toConvert)
{
	// std::cout << "Converter parametrize constructor called\n";
	this->toConvert = toConvert;
}

Converter::Converter(Converter const &src)
{
	std::cout << "Converter copy constructor called\n";
	*this = src;
}

Converter &Converter::operator=(Converter const &rhs)
{
	if (this != &rhs)
	{
		this->toConvert = rhs.toConvert;
	}
	return *this;
}

Converter::~Converter()
{
	// std::cout << "Converter  destructor called\n";
}

int Converter::checkPseudo()
{
	std::string arr[6] = {
		"nan",
		"+inf",
		"-inf",
		"nanf",
		"+inff",
		"-inff",
	};
	int i;
	for (i = 0; i < 6; i++)
	{
		if (this->toConvert == arr[i])
			break;
	}
	if (i < 6)
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if (i < 3)
		{
			std::cout << "float: " << arr[i + 3] << std::endl;
			std::cout << "double: " << arr[i] << std::endl;
		}
		else
		{
			std::cout << "float: " << arr[i] << std::endl;
			std::cout << "double: " << arr[i - 3] << std::endl;
		}
		return 0;
	}
	return 1;
}

//main function 
void Converter::convert(){
	if (checkPseudo() == 0)
		return;
	double d;
	char *end;

	if (toConvert.length() == 1  && !isdigit(toConvert[0]))
	{
		printChar(toConvert[0]);
		printInt(static_cast <int>(toConvert[0]));
		printFloat(static_cast <float>(toConvert[0]));
		printDouble(static_cast <double>(toConvert[0]));
		return;
	}


	d = strtod(toConvert.c_str(), &end);
	if (end != NULL &&  (strlen(end) != 1 || (end[0] != '\0' && end[0] != 'f')))
	{
		std::cout << "invalid input, try again" << std::endl;
		return ;
	}
	if (d > std::numeric_limits<char>::max() && d < std::numeric_limits<char>::min())
		std::cout << "char: impossible" << std::endl;
	else
		printChar(static_cast <char>(d));
	if (d > std::numeric_limits<int>::max() && d < std::numeric_limits<int>::min())
		std::cout << "int: impossible" << std::endl;
	else
		printInt(static_cast <int>(d));
	if (d > std::numeric_limits<float>::max() && d < std::numeric_limits<float>::min() )
		std::cout  << "float: impossible" << std::endl;
	else
		printFloat(static_cast <float>(d));
	printDouble(d);
}

void Converter::printChar(char c)
{
	if (isascii(c) == 0)
	{
		std::cout << "char: impossible" << std::endl;
	}
	else if (isprint(c) == 0)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
		std::cout << "char : '" << c << "'" << std::endl;
}

void Converter::printInt(int i)
{
	std::cout << "int: " << i << std::endl;
}

void Converter::printFloat(float f)
{
	float test = roundf(f);
	if (test == f)
		std::cout << "float: " << f << ".0f" << std::endl;
	else
		std::cout << "float: " << f << "f" << std::endl;
}

void Converter::printDouble(double d)
{
	double test = roundf(d);
	if (test == d)
		std::cout << "double: " << d << ".0" << std::endl;
	else
		std::cout << "double: "  << d << std::endl;

}