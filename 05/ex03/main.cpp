#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

#include <iostream>

void testBureaucrat_creation(void)
{
	std::cout << "---Trying to instantiate a Bureaucrat with too high a grade---" << std::endl;
	try
	{
		Bureaucrat a("Bill", 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Trying to instantiate a Bureaucrat with too low a grade---" << std::endl;
	try
	{
		Bureaucrat b("Bob", 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "------Bureaucrat creation testing done------\n"
			  << std::endl;
}

void testBureaucrat_gradechange(void)
{
	std::cout << "\n---Testing Grade incrementation and decrementation---" << std::endl;
	Bureaucrat c;
	std::cout << c << std::endl;
	c.incrementGrade(2);
	std::cout << c << std::endl;
	try
	{
		c.decrementGrade(3);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	c.decrementGrade(1);
	std::cout << c << std::endl;
	try
	{
		c.incrementGrade(150);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	std::cout << "------Bureaucrat grade change testing done------\n"
			  << std::endl;
}

void	testPresidentialPardon()
{
	//25, 5
	std::cout << "\n---Testing PresidentialForm---" << std::endl;
	PresidentialPardonForm	a("criminal");
	Bureaucrat				b("Presidential lackey", 24);
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(2);
	b.signForm(a);
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(20);
	b.executeForm(a);
	std::cout << "\n---Finished testing PresidentialPardonForm---" << std::endl;
}

void	testRobotomy()
{
	//72, 45
	std::cout << "\n---Testing RobotomyRequestForm---" << std::endl;
	RobotomyRequestForm	a("John");
	Bureaucrat			b("Wannabe robotomizer", 73);
	std::cout << a << std::endl;
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(2);
	b.signForm(a);
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(40);
	b.executeForm(a);
	std::cout << "\n---Finished testing RobotomyRequestForm---"<< std::endl;
}

void	testShrubbery()
{
	//145, 137
	std::cout << "\n---Testing ShrubberyCreationForm---" << std::endl;
	ShrubberyCreationForm	a("House");
	Bureaucrat				b("Person with taste", 146);
	std::cout << a << std::endl;
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(2);
	b.signForm(a);
	b.signForm(a);
	b.executeForm(a);
	b.incrementGrade(10);
	b.executeForm(a);
	std::cout << "\n---Finished testing ShrubberyCreationtForm---"<< std::endl;
}

void	testIntern()
{
	std::cout << "\n---Testing Intern functions---" << std::endl;
	Intern	newbie;
	try
	{
		AForm *a = newbie.makeForm("random crap", "whatever");
	}
	catch(const std::exception& e)
	{
		std::cerr << "Intern couldn't make form because: "<< e.what() << '\n';
	}
	AForm *a =newbie.makeForm("robotomy request", "victim");
	AForm *b =newbie.makeForm("presidential pardon", "Luigi Mangione");
	AForm *c =newbie.makeForm("shrubbery creation", "backyard");
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	delete a;
	delete b;
	delete c;
	std::cout << "\n---Finished testing Intern functions---" << std::endl;
}

int main(void)
{
	testBureaucrat_creation();
	testBureaucrat_gradechange();
	testPresidentialPardon();
	testRobotomy();
	testShrubbery();
	testIntern();
	return (0);
}