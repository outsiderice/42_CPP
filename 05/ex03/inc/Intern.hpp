#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>

class Intern
{
	public:
		Intern(void);
		Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
		~Intern(void);
};

#endif