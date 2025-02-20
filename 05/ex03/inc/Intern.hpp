#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		~Intern(void);

		class    InvalidFormName : public std::exception
        {
            public:
                const char *what() const throw();
        };

		AForm*	makeForm(std::string name, std::string target);
};

#endif