#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : _history(BitcoinExchange::csvtomap("data.csv"))
{}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &obj) : _history(obj._history)
{}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange&	BitcoinExchange::operator=(const BitcoinExchange &obj)
{
	if (this != &obj)
	{
		_history = obj._history;
	}
	return (*this);
}

std::map<std::string, int>	BitcoinExchange::csvtomap(std::string filename)
{
	std::map<std::string, int>	map;

	std::ifstream	feed;
	std::string		line;
	feed.open("data.csv");
	if (!feed.is_open())
		throw std::runtime_error("Couldn't open database");
	while (!feed.eof())
	{
		getline(feed, line);
	}
	feed.close();
	return (map);
}