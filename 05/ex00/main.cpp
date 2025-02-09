#include "Bureaucrat.hpp"
#include <iostream>

int	main(void)
{
	try 
	{
		Bureaucrat	a("Bill", 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
	
}