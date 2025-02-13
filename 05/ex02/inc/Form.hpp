#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>

class Bureaucrat;

class Form
{
    private:
        const std::string	_name;
        bool		        _signed;
        const int	        _sign_grade;
		const int	        _exec_grade;

        Form &operator=(const Form &obj);
    public:
        Form(void);
        Form(std::string name, int sign_grade, int exec_grade);
        Form(const Form &obj);
        ~Form(void);
        class    GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class    GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };

        std::string     getName(void) const;
		bool			getSigned(void) const;
        int    			getSignGrade(void) const;
		int    			getExecGrade(void) const;

        void            beSigned(Bureaucrat &signee);
};

std::ostream &operator<<(std::ostream &os, const Form &Form);

#endif