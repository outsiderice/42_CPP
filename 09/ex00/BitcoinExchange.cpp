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
		throw std::runtime_error("Error: could not open database.");
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

void	BitcoinExchange::exchangeRate(std::string input)
{
	std::ifstream	feed;
	std::string		line;
	std::string		date;
	std::string		value;

	feed.open(input.c_str());
	if (!feed.is_open())
		throw std::runtime_error("Error: could not open file.");
	while (!feed.eof())
	{
		getline(feed, line);
		if (isValidFormat(line) == true)
		{
			date = line.substr(0, line.find('|') - 1);
			value = line.substr(line.find('|') + 2, line.length() - (date.length() + 3));
			if (isValidDate(date) == true && isValidValue(value) == true)
				printResult(date, calculateTotal(value));
		}
	}
}

bool	BitcoinExchange::isValidFormat(std::string str)
{
	std::string	valid_chars = "1234567890- |.";
	if (str.find_first_not_of(valid_chars) != std::string::npos)
	{
		printResult("Error: bad input", str);
		return (false);
	}
	if (str.find(" | ") == std::string::npos || str.find('|') != str.find_last_of('|'))
	{
		printResult("Error: bad input", str);
		return (false);
	}
	return (true);
}

bool	BitcoinExchange::isValidDate(std::string date)
{
	std::string	year, month, day;
	std::string	digits = "1234567890";
	std::size_t	pos = date.find('-');
	
	year = date.substr(0, pos);
	month = date.substr(pos, date.find_first_not_of(digits, pos));
	day = date.substr(date.find_last_of('-'));
}

bool	BitcoinExchange::isValidValue(std::string value)
{
	(void) value;
	return (false);
}

std::string	BitcoinExchange::calculateTotal(std::string value)
{
	return(value);
}

void	BitcoinExchange::printResult(std::string str1, std::string str2)
{
	std::cout << str1 << " => " << str2 << std::endl;
	return ;
}