#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

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

        void    GradeTooHighException() const;
        void    GradeTooLowException() const;

        std::string     getName(void) const;
        unsigned int    getGrade(void) const;
};

#endif