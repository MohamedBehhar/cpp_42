#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat superQaid("superQaid", 100);
	PresidentialPardonForm chahada("chahada");
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