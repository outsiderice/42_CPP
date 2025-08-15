#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>
#include <cmath>

class Span
{
	public:
		//constructors and destructors
		Span(void);
		Span(int N);
		Span(const Span &obj);
		~Span(void);

		//operators
		Span&	operator=(const Span &obj);

		//class functions
		void	addNumber(int number);
		int		shortestSpan();
		int		longestSpan();
		void	fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		unsigned int	getN() const;
		int				getNumber(int index) const;
	private:
		unsigned int		_N;
		std::vector<int>	_numbers;
		
};

std::ostream&	operator<<(std::ostream &os, const Span &span);

#endif
