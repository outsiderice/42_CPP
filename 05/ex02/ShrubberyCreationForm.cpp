#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("default", 145, 137)
{
	std::cout << "ShrubberyCreationForm: default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("shrubbery creation", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm: parametrized constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : AForm("shrubbery creation", 145, 137)
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

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	check_requirements(executor);

	std::ofstream	file;
	std::string		file_name;

	file_name = _target;
	file_name.append("_shrubbery");
	file.open(file_name);
	if (!file.is_open())
	{
		std::cerr << "Error: couldn't create new file" << std::endl;
		return ;
	}
	file << "    _A_A_          _A_A_         _A_A_\n";
	file << "   <     >        <     >       <     >\n";
	file << "  <       >      <       >     <       >\n";
	file << " <  <   >  >    <  <  >   >   <  <  >   >\n";
	file << "<_         _>  <_         _> <_         _>\n";
	file << " <__   v __>    <__   v __>   <__   v __>\n";
	file << "----|   |----------|   |---------|   |----" << std::endl;
	return ;
}