#pragma once
#ifndef	BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>

//pass the csv to a map, date the key second the bitcoin price
//

class	BitcoinExchange
{
	public:
		//constructors and destructors
		BitcoinExchange(void);
		BitcoinExchange(const BitcoinExchange &obj);
		~BitcoinExchange();

		//operators
		BitcoinExchange&	operator=(const Bitcoin Exchange &obj);
		
		//getters
		int		getRate(std::string date);

		bool	isValidDate();
		bool	isValidValue();
		void	printResult();

	private:
		std::map<std::string, int>	_history;
};

#endif
