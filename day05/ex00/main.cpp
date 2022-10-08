#include "Bureaucrat.hpp"


int main()
{
	Bureaucrat superQaid("superQayed", 1);
	Bureaucrat chawech("chawech", 3);
	Bureaucrat mqadem("mqadem", 2);
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << superQaid << std::endl;
		std::cout << "what about me" << std::endl;
		superQaid.setGrade(199);
		std::cout << "what about me" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << chawech << std::endl;
		chawech.incrementGrade();
		std::cout << chawech << std::endl;
		chawech.incrementGrade();
		std::cout << chawech << std::endl;
		chawech.incrementGrade();
		std::cout << "what about me" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;
	try
	{
		std::cout << mqadem << std::endl;
		mqadem.setGrade(150);
		mqadem.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << "- - - - - - - - - - - - - - " << std::endl;

	return 0;
}