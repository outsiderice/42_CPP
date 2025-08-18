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
	std::cout << "shortest " << sp.shortestSpan() << std::endl;
	std::cout << sp << std::endl;	
	std::cout << "longest " <<sp.longestSpan() << std::endl;

	Span	big = Span(10000);
	std::vector<int>	v(10000);
	srand(time(NULL));
	for (int i = 0; i <= 10000; ++i)
	{
		v[i] = std::rand();
	}
	big.fillSpan(v.begin(), v.end());
//	std::cout << big << std::endl;
	return (0);
}
