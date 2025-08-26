#pragma once
#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
//#include <iomanip> //for precision
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

	//methods
	std::map<std::string, double>	csvtomap(void);
	void							exchangeRate(std::string input);
 	bool							isValidFormat(std::string str);
	bool							isValidDate(std::string date);
	bool 							isValidValue(std::string value);
	std::string						calculateTotal(std::string value);
	void 							printResult(std::string str1, std::string str2);

private:
	std::map<std::string, double> _history;
};

#endif
