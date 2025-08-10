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
		throw
	return ;
}

