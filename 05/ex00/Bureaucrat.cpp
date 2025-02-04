#include "Bureaucrat.hpp"

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
		//use exceptions how? just a throw?
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
	std::cout << "Bureaucrat: copy assignment oprator called" << std::endl;
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

std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}