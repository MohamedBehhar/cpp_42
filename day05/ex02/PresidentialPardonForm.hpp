#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <fstream>
// class PresidentialPardonForm;
#include "Form.hpp"
#include "Bureaucrat.hpp"
class Bureaucrat;

class PresidentialPardonForm : public Form
{
private:
	const std::string _target;

	PresidentialPardonForm();

public:
	PresidentialPardonForm(const std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &other);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
	virtual ~PresidentialPardonForm();

	void execute(Bureaucrat const &executor) const;
};

#endif
