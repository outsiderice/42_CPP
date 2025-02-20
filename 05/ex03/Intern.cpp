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

AForm*	Intern::makeForm(std::string name, std::string target)
{
	AForm		*new_form;
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
			//presidential
		case 1:
			//robotomy
		case 2:
			//shrubbery
			break ;
		default :
			std::cout << "Couldn't make form because this form type doesn't exist." << std::endl;
	}
	return (new_form);
}