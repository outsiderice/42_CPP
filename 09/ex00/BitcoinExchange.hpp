#pragma once
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
//#include <iomanip>
#include <fstream>
#include <stdexcept>
#include <stdlib.h>

// pass the csv to a map, date the key second the bitcoin price

class BitcoinExchange
{
public:
	// constructors and destructors
	BitcoinExchange(void);
	BitcoinExchange(const BitcoinExchange &obj);
	~BitcoinExchange();

	// operators
	BitcoinExchange &operator=(const BitcoinExchange &obj);

	// getters
	// int getRate(std::string date);

	// // other methods
	 std::map<std::string, double>	csvtomap(void);
	// bool							isValidFormat();
	// bool							isValidDate();
	// bool 							isValidValue();
	// void 							printResult();

private:
	std::map<std::string, double> _history;
};

#endif
