#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("moha"), _grade(0)
{
	std::cout << "Bureaucrat Default Constructor called\n";
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(grade)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat  Parametrized Constructor called\n";
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	std::cout << "Bureaucrat copy assignment operator called\n";
	if (this != &rhs)
		this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	std::cout << "Bureaucrat copy constructor called\n";
	*this = other;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat destructor called\n";
}

//exceptions
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "BureaucratException: Grade too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "BureaucratException: Grade too Low";
}


//getters
const std::string &Bureaucrat::getName()const{
	return _name;
}

int Bureaucrat::getGrade(void) const
{
	return _grade;
}

//setters
void Bureaucrat::setGrade(int grade)
{
	if (grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

// increment decrement
void Bureaucrat::incrementGrade(void)
{
	if (_grade < 2)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}
void Bureaucrat::decrementGrade(void)
{
	if (_grade > 149)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}



std::ostream &operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat {Name: " << bureaucrat.getName() << ", Grade: " << bureaucrat.getGrade() << "}";
	return (out);
}