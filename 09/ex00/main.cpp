#include "BitcoinExchange.hpp"
#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Needs a file to open." << std::endl;
		return (1);
	}

	std::ifstream db;
	std::string line;
	db.open();
	if (!db.is_open())
	{
		std::cerr << "Error could not open file." << std::endl;
		return (1);
	}
	db.close();
	return (0);
}
