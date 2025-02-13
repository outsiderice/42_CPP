#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _sign_grade(1), _exec_grade(1)
{
	std::cout << "Form: default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "Form: parametrized constructor called" << std::endl;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw Form::GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	std::cout << "Form: copy constructor called" << std::endl;
	return ;
}

Form::~Form(void)
{
	std::cout << "Form: destructor called" << std::endl;
	return ;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Form Grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Form Grade too low");
}

std::string	Form::getName(void) const
{
	return (this->_name);
}

unsigned int	Form::getGrade(void) const
{
	return (this->_grade);
}

void	Form::incrementGrade(int increment)
{
	if (this->_grade - increment < 1)
		throw Form::GradeTooHighException();
	else
		this->_grade -= increment;
	return ;
}

void	Form::decrementGrade(int decrement)
{
	if (this->_grade + decrement > 150)
		throw Form::GradeTooLowException();
	else
		this->_grade += decrement;
	return ;
}

std::ostream &operator<<(std::ostream &os, const Form &Form)
{
	os << Form.getName() << ", Form grade " << Form.getGrade();
	return (os);
}