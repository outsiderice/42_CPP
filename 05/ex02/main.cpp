#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

void	testBureaucrat_creation(void)
{
	std::cout << "---Trying to instantiate a Bureaucrat with too high a grade---" << std::endl;
	try 
	{
		Bureaucrat	a("Bill", 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Trying to instantiate a Bureaucrat with too low a grade---" << std::endl;
	try 
	{
		Bureaucrat	b("Bob", 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "------Bureaucrat creation testing done------\n" << std::endl;	
}

void	testBureaucrat_gradechange(void)
{
	std::cout << "\n---Testing Grade incrementation and decrementation---" << std::endl;
	Bureaucrat	c;
	std::cout << c << std::endl;
	c.incrementGrade(2);
	std::cout << c << std::endl;
	try
	{
		c.decrementGrade(3);
	}
	catch(const std::exception& e)
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
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	std::cout << "------Bureaucrat grade change testing done------\n" << std::endl;
}

int	main(void)
{
	testBureaucrat_creation();
	testBureaucrat_gradechange();
	return (0);
}