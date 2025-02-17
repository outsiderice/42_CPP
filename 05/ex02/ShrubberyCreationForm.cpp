#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", 145, 137)
{
	std::cout << "ShrubberyCreationForm: default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrub request", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: parametrized constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm("shrubbery request", 145, 137)
{
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
	_target = obj._target;
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	std::cout << "ShrubberyCreationForm: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_target = obj._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm: destructor called" << std::endl;
	return ;
}

const char	*ShrubberyCreationForm::GradeTooHighException::what() const throw()
{
	return ("ShrubberyCreationForm Grade too high");
}

const char	*ShrubberyCreationForm::GradeTooLowException::what() const throw()
{
	return ("ShrubberyCreationForm Grade too low");
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}