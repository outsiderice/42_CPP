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
	BitcoinExchange	bc;
	bc.exchangeRate(input);
	return (0);
}
