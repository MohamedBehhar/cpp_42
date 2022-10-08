#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include <fstream>
// class PresidentialPardonForm;
#include "Form.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class ShrubberyCreationForm : public Form
{
private:
	const std::string _target;

	ShrubberyCreationForm();

public:
	ShrubberyCreationForm(const std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &other);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
	virtual ~ShrubberyCreationForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
