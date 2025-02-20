#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		~Intern(void);

		AForm*	makeForm(std::string name, std::string target);
};

#endif