#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern: default constructor called" << std::endl;
	return ;
}

Intern::Intern(const Intern &obj)
{
	std::cout << "Intern: copy constructor called" << std::endl;
	*this = obj;
	return ;
}

Intern	&Intern::operator=(const Intern &obj)
{
	std::cout << "Intern: copy assignment operator called" << std::endl;
	(void)obj;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern: destructor called" << std::endl;
	return ;
}

const char	*Intern::InvalidFormName::what() const throw()
{
	return ("Invalid form name");
}

AForm*	Intern::makeForm(std::string name, std::string target)
{
	std::string	form_types[3] =
	{
		"presidential pardon", "robotomy request", "shrubbery creation"
	};
	
	int	i = 0;
	while (i < 3 && name.compare(form_types[i]) != 0)
		i++;
	switch (i)
	{
		case 0:
			return (new PresidentialPardonForm(target));
		case 1:
			return (new RobotomyRequestForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		default :
			throw Intern::InvalidFormName();
	}
}