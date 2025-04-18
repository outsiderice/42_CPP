#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <exception>
#include <fstream>

#include "AForm.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string	_target;

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &obj);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
		~ShrubberyCreationForm(void);

		std::string	getTarget(void) const;

		virtual void	execute(Bureaucrat const &executor) const;
};

#endif