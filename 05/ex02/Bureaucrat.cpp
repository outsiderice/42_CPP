#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
	std::cout << "Bureaucrat: default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name, unsigned int grade) : _name(name)
{
	std::cout << "Bureaucrat: string constructor called" << std::endl;
	if (grade > 0 && grade < 151)
		this->_grade = grade;
	else
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			throw Bureaucrat::GradeTooLowException();
	}
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "Bureaucrat: copy constructor called" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_grade = obj._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destructor called" << std::endl;
	return ;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat Grade too low");
}

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade(int increment)
{
	if (this->_grade - increment < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= increment;
	std::cout << "Bureaucrat promoted!" << std::endl;
	return ;
}

void	Bureaucrat::decrementGrade(int decrement)
{
	if (this->_grade + decrement > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += decrement;
	std::cout << "Bureaucrat demoted u_u" << std::endl;
	return ;
}

void	Bureaucrat::signAForm(AForm &AForm)
{
	try
	{
		AForm.beSigned(*this);
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << _name << " couldn't sign " << AForm.getName() \
			<< " because their bureaucrat grade is too low" << std::endl;
	}
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return (os);
}