#include "Span.hpp"

Span::Span(void) : _N(0), _numbers(0)
{}

Span::Span(int N) : _N(N), _numbers(N)
{}

Span::Span(const Span &obj) : _N(obj._N), _numbers(obj._numbers)
{
}

Span::~Span()
{}

Span&	Span::operator=(const Span &obj)
{
	if (this != obj)
	{
		_N = obj._N;
		_numbers = obj._numbers;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (_numbers.size() < _N)
		_numbers.push_back(number);
	else
		throw std::out_of_range;
	return ;
}

int	Span::shortestSpan()
{
	int	span = this.longestSpan();
	std::pair<int, int>	minmax = std::minmax_element(_numbers.begin(), _numbers.end());

	for (std::vector<int>const_iterator = _numbers.begin(); it != _numbers.end(); it++)
	{
		
	}
	return (span);
}

int	Span::longestSpan()
{
	int	span = 0;
	int	smallest = _numbers[0];
	int	biggest	= _numbers[0];

	for (std::vector<int>const_iterator = _numbers.begin(); it != _numbers.end(); it++)
	{
		if (_numbers[it] < smallest)
			smallest = numbers[it];
		if (_numbers[it] > biggest)
			biggest = numbers[it];
	}
	span = biggest - smallest;
	return (span);
}

void	fillSpan()
{
}
