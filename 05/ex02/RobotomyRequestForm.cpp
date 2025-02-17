#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", 145, 137)
{
	std::cout << "RobotomyRequestForm: default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request", 145, 137), _target(target)
{
	std::cout << "RobotomyRequestForm: parametrized constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("robotomy request", 145, 137)
{
	std::cout << "RobotomyRequestForm: copy constructor called" << std::endl;
	_target = obj._target;
	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
	std::cout << "RobotomyRequestForm: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_target = obj._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm: destructor called" << std::endl;
	return ;
}

const char	*RobotomyRequestForm::GradeTooHighException::what() const throw()
{
	return ("RobotomyRequestForm Grade too high");
}

const char	*RobotomyRequestForm::GradeTooLowException::what() const throw()
{
	return ("RobotomyRequestForm Grade too low");
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	check_requirements(executor);
	
	return ;
}