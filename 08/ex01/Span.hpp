#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <exception>

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
		void	fillSpan();

	private:
		unsigned int		_N;
		std::vector<int>	_numbers;
		
};

#endif
