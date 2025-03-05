#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	//Trying to instantiate a Bureaucrat with too high a grade
	try 
	{
		Bureaucrat	a("Bill", 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	//Trying to instantiate a Bureaucrat with too low a grade
	try 
	{
		Bureaucrat	b("Bob", 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	Bureaucrat	c;
	std::cout << c << std::endl;
	c.incrementGrade(2);
	std::cout << c << std::endl;
	try
	{
		c.decrementGrade(3);
	}
	catch(const std::exception &e)
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
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	std::cout << "------Bureacrat ex00 testing done------\n" << std::endl;
	return (0);
}