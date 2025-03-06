#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class AForm
{
private:
	const std::string _name;
	bool _signed;
	const int _sign_grade;
	const int _exec_grade;

public:
	AForm(std::string name, int sign_grade, int exec_grade);
	AForm(const AForm &obj);
	AForm &operator=(const AForm &obj);
	~AForm(void);
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	class FormNotSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};

	std::string getName(void) const;
	bool		getSigned(void) const;
	int			getSignGrade(void) const;
	int			getExecGrade(void) const;

	void			beSigned(Bureaucrat &signee);
	void			check_requirements(Bureaucrat const &executor) const;
	virtual void	execute(Bureaucrat const &executor) const = 0;
	

	private : AForm(void);
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif