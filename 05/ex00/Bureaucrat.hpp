#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        std::string     _name;
        unsigned int    _grade;

    public:
        Bureaucrat(void);
        Bureaucrat(std::string name);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator=(const Bureaucrat &obj);
        ~Bureaucrat(void);

        class    GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw(){return ("Grade too high.");}
        };
        class    GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw(){return ("Grade too high.");}
        };

        std::string     getName(void) const;
        unsigned int    getGrade(void) const;
};

#endif