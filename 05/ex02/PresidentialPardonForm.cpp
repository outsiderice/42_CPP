#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("default", 145, 137)
{
	std::cout << "PresidentialPardonForm: default constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 145, 137), _target(target)
{
	std::cout << "PresidentialPardonForm: parametrized constructor called" << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : AForm("presidential pardon", 145, 137)
{
	std::cout << "PresidentialPardonForm: copy constructor called" << std::endl;
	_target = obj._target;
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
	std::cout << "PresidentialPardonForm: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_target = obj._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm: destructor called" << std::endl;
	return ;
}

std::string	PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	check_requirements(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	return ;
}