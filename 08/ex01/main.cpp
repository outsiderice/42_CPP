#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	
	std::cout << sp << std::endl;	
	try
	{
		sp.addNumber(42);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	std::cout << sp.longestSpan() << std::endl;	
	std::cout << sp.shortestSpan() << std::endl;
	return (0);
}
