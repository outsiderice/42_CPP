#include <iostream>
#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Nothing to do, input operations e.g:\n ./RPN \"2 2 +\"" << std::endl;
		return (0);
	}
	RPN calculator;
	try
	{
		calculator.calculate(argv[1]);
	}
	catch(const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}