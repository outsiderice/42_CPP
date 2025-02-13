#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("default"), _signed(false), _sign_grade(1), _exec_grade(1)
{
	std::cout << "AForm: default constructor called" << std::endl;
	return ;
}

AForm::AForm(std::string name, int sign_grade, int exec_grade) : _name(name), _signed(false), _sign_grade(sign_grade), _exec_grade(exec_grade)
{
	std::cout << "AForm: parametrized constructor called" << std::endl;
	if (_sign_grade < 1 || _exec_grade < 1)
		throw AForm::GradeTooHighException();
	if (_sign_grade > 150 || _exec_grade > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(const AForm &obj) : _name(obj._name), _signed(obj._signed), _sign_grade(obj._sign_grade), _exec_grade(obj._exec_grade)
{
	std::cout << "AForm: copy constructor called" << std::endl;
	return ;
}

AForm::~AForm(void)
{
	std::cout << "AForm: destructor called" << std::endl;
	return ;
}

const char	*AForm::GradeTooHighException::what() const throw()
{
	return ("AForm Grade too high");
}

const char	*AForm::GradeTooLowException::what() const throw()
{
	return ("AForm Grade too low");
}

std::string	AForm::getName(void) const
{
	return (this->_name);
}

bool	AForm::getSigned(void) const
{
	return (this->_signed);
}

int	AForm::getSignGrade(void) const
{
	return (this->_sign_grade);
}

int	AForm::getExecGrade(void) const
{
	return (this->_exec_grade);
}

std::ostream &operator<<(std::ostream &os, const AForm &AForm)
{
	os << AForm.getName() << ", AForm sign grade " << AForm.getSignGrade() \
		<< ", AForm execution grade " << AForm.getExecGrade() << ", AForm signed " << AForm.getSigned();
	return (os);
}