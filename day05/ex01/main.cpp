#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat superQaid("superQaid", 100);
	Form chahada("chahada", 10, 8);
	try
	{
		superQaid.signForm(chahada);
		chahada.beSigned(superQaid);
		std::cout << chahada.getSignGrade() << std::endl;
		std::cout << chahada.isSigned() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}