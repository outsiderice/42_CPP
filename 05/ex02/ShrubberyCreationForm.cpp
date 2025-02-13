#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : _name("default"), _signed(false), _sign_grade(1), _exec_grade(1)
{
	std::cout << "ShrubberyCreationForm: default constructor called" << std::endl;
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "ShrubberyCreationForm: parametrized constructor called" << std::endl;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw ShrubberyCreationForm::GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw ShrubberyCreationForm::GradeTooLowException();
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj) : _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	std::cout << "ShrubberyCreationForm: copy constructor called" << std::endl;
	return ;
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

std::string	ShrubberyCreationForm::getName(void) const
{
	return (this->_name);
}

bool	ShrubberyCreationForm::getSigned(void) const
{
	return (this->_signed);
}

int	ShrubberyCreationForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	ShrubberyCreationForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	ShrubberyCreationForm::beSigned(Bureaucrat &signee)
{
	if (signee.getGrade() > _sign_grade)
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		if (_signed == false)
		{
			_signed = true;
			std::cout << signee.getName() << " signed " << _name << std::endl;
		}
		else
			std::cout << signee.getName() << " couldn't sign " << _name \
				<< " because it's already signed" << std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &ShrubberyCreationForm)
{
	os << ShrubberyCreationForm.getName() << ", ShrubberyCreationForm sign grade " << ShrubberyCreationForm.getSignGrade() \
		<< ", ShrubberyCreationForm execution grade " << ShrubberyCreationForm.getExecGrade() << ", ShrubberyCreationForm signed " << ShrubberyCreationForm.getSigned();
	return (os);
}