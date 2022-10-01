#include "Bureaucrat.hpp"
#define Log std::cout <<
#define N << std::endl

int main()
{
	try
	{
		Bureaucrat bureau("moha", 1);
		// bureau.setGrade(1);
		Log bureau.getGrade() N;
		// Log bureau.getGrade() N;
		bureau.incrementGrade();
		// bureau.decrementGrade();
		// bureau.decrementGrade();
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}