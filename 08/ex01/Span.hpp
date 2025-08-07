#pragma once
#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	public:
		Span(int N);
		~Span(void);

		addNumber(int number);
		shortestSpan();
		longestSpan();
	private:
		unsigned int	_N;
		int				_Numbers[_N];
		
		Span();
};

#endif
