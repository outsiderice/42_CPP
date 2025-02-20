#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern: default constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern: copy constructor called" << std::endl;
	return ;
}

Intern	&Intern::operator=(const Intern &obj)
{
	std::cout << "Intern: copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern: destructor called" << std::endl;
	return ;
}