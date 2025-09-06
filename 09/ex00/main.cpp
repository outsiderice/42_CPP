#include "BitcoinExchange.hpp"
#include <iostream>



int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: Needs a file to open." << std::endl;
		return (1);
	}
	std::string	input = argv[1];
	try
	{
		BitcoinExchange	bc;
		bc.exchangeRate(input);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << '\n';
	}
	return (0);
}
