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

std::map<std::string, float>	BitcoinExchange::csvtomap(void)
{
	std::map<std::string, float>	map;

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
		date = line.substr(0, 10);
		rate = line.substr(line.find(',') + 1, line.length() + 1 - date.length());
		if (atof(rate.c_str()))
			map.insert(std::pair<std::string, float>(date, atof(rate.c_str())));
	}
	for (std::map<std::string, float>::iterator	it = map.begin(); it != map.end(); ++it)
	{
		std::cout << it->first << '\t' << it->second << std::endl;
	}
	feed.close();
	return (map);
}