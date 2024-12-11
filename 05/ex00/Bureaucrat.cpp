#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default")
{
	std::cout << "Bureaucrat: default constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(std::string name) : _name(name)
{
	std::cout << "Bureaucrat: string constructor called" << std::endl;
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) : _name(obj._name)
{
	std::cout << "Bureaucrat: copy constructor called" << std::endl;
	return ;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj)
{
	std::cout << "Bureaucrat: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_name = obj._name;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat: destructor called" << std::endl;
	return ;
}