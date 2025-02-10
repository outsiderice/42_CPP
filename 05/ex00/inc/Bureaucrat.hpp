#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        std::string     _name;
        int	            _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(std::string name, unsigned int grade);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat(void);

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
        unsigned int    getGrade(void) const;
        void            incrementGrade(int increment);
        void            decrementGrade(int decrement);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif