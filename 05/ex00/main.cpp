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
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	//Trying to instantiate a Bureaucrat with too low a grade
	try 
	{
		Bureaucrat	b("Bob", 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);	
}