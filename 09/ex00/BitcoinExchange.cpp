#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void) : _history(BitcoinExchange::csvtomap())
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

std::map<std::string, double>	BitcoinExchange::csvtomap(void)
{
	std::map<std::string, double>	map;

	std::ifstream	feed;
	std::string		line;
	std::string		date;
	std::string		rate;

	feed.open("data.csv");
	if (!feed.is_open())
		throw std::runtime_error("Couldn't open database.");
	while (!feed.eof())
	{
		getline(feed, line);
		date = line.substr(0, line.find(','));
		rate = line.substr(line.find(',') + 1, line.length() - (date.length() + 1));
		if (atof(rate.c_str()))
			map.insert(std::pair<std::string, double>(date, atof(rate.c_str())));
	}
	feed.close();
	return (map);
}