#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>

int	main(void)
{
	std::cout << "---Trying to instantiate a Bureaucrat with too high a grade---" << std::endl;
	try 
	{
		Bureaucrat	a("Bill", 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Trying to instantiate a Bureaucrat with too low a grade---" << std::endl;
	try 
	{
		Bureaucrat	b("Bob", 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Testing Grade incrementation and decrementation---" << std::endl;
	Bureaucrat	c;
	std::cout << c << std::endl;
	c.incrementGrade(2);
	std::cout << c << std::endl;
	try
	{
		c.decrementGrade(3);
	}
	catch(Bureaucrat::GradeTooLowException &e)
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
	catch(Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << c << std::endl;
	std::cout << "------Bureaucrat ex00 testing done------\n" << std::endl;

	//Ex01 testing
	std::cout << "---Trying to instantiate a AForm with too high a grade---" << std::endl;
	try 
	{
		AForm	a("bill", 42, 0);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (AForm::GradeTooHighException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Trying to instantiate a AForm with too low a grade---" << std::endl;
	try 
	{
		AForm	b("quizz", 42, 151);
		std::cerr << "Error: no exception thrown" << std::endl;
	} 
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << "\n---Testing AForm signing---" << std::endl;
	AForm	d;
	std::cout << d << std::endl;
	try
	{
		d.beSigned(c);
		std::cerr << "Error: no exception thrown" << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	c.signAForm(d);
	c.incrementGrade(148);
	std::cout << c << std::endl;
	d.beSigned(c);
	std::cout << d << std::endl;
	std::cout << "\n---Trying to sign the same AForm again---" << std::endl;
	d.beSigned(c);
	std::cout << "------ Ex01 testing done------\n" << std::endl;
	return (0);
}