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

bool	Form::getSigned(void) const
{
	return (this->_signed);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec_grade);
}

void	Form::beSigned(Bureaucrat signee)
{
	if (signee.getGrade() >= _sign_grade)
		throw Form::GradeTooLowException();
	else
	{
		if (_signed == false)
			_signed = true;
		else
			std::cout << "This form is already signed" << std::endl;
	}
	return ;
}

std::ostream &operator<<(std::ostream &os, const Form &Form)
{
	os << Form.getName() << ", form sign grade " << Form.getSignGrade() \
		<< ", form execution grade " << Form.getExecGrade() << ", form signed " << Form.getSigned();
	return (os);
}