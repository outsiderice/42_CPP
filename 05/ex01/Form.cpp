#include "Form.hpp"

Form::Form(void) : _name("default"), _signed(false), _sign_grade(1), _exec_grade(1)
{
	std::cout << "Form: default constructor called" << std::endl;
	return ;
}

Form::Form(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false)
{
	std::cout << "Form: string constructor called" << std::endl;
	if (sign_grade > 0 && sign_grade < 151)
		this->_sign_grade = sign_grade;
	else
	{
		if (grade < 1)
			throw Form::GradeTooHighException();
		else
			throw Form::GradeTooLowException();
	}
	return ;
}

Form::Form(const Form &obj) : _name(obj._name), _grade(obj._grade)
{
	std::cout << "Form: copy constructor called" << std::endl;
	return ;
}

Form	&Form::operator=(const Form &obj)
{
	std::cout << "Form: copy assignment oprator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_grade = obj._grade;
	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form: destructor called" << std::endl;
	return ;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
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