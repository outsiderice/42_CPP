#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", 72, 45)
{
	std::cout << "RobotomyRequestForm: default constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("robotomy request", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm: parametrized constructor called" << std::endl;
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj) : AForm("robotomy request", 72, 45)
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

std::string	RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	check_requirements(executor);
	std::cout << "Whiiiiirrrrrrr\n";
	srand(time(NULL));
	int	random = std::rand();
	//std::cout << random << std::endl;
	if (random % 2 != 0)
		std::cout << _target << " has been successfully robotomized." << std::endl;
	else
		std::cout << "The robotomy has failed." << std::endl;
	return ;
}