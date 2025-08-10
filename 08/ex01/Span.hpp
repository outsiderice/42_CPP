#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

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
		addNumber(int number);
		shortestSpan();
		longestSpan();

	private:
		unsigned int		_N;
		std::vector<int>	_numbers;
		
};

#endif
