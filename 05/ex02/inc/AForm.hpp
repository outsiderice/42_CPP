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

	AForm &operator=(const AForm &obj);

public:
	AForm(std::string name, int sign_grade, int exec_grade);
	AForm(const AForm &obj);
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

	std::string getName(void) const;
	bool getSigned(void) const;
	int getSignGrade(void) const;
	int getExecGrade(void) const;

	void beSigned(Bureaucrat &signee);

private:
	AForm(void);
};

std::ostream &operator<<(std::ostream &os, const AForm &AForm);

#endif