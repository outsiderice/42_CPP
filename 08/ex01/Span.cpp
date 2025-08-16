#include "Span.hpp"

Span::Span(void) : _N(0)
{}

Span::Span(int N) : _N(N)
{}

Span::Span(const Span &obj) : _N(obj._N), _numbers(obj._numbers)
{
}

Span::~Span()
{}

Span&	Span::operator=(const Span &obj)
{
	if (this != &obj)
	{
		_N = obj._N;
		_numbers = obj._numbers;
	}
	return (*this);
}

void	Span::addNumber(int number)
{
	if (_numbers.size() >= _N)
		throw std::out_of_range("Out of range");
	_numbers.push_back(number);
	return ;
}

int	Span::shortestSpan()
{
	if (_N < 2)
		throw std::logic_error("There can't be a span with less than 2 numbers");
	int	span = this->longestSpan();
	std::stable_sort(_numbers.begin(), _numbers.end());
	for (unsigned int i = 0; i < _N; i++)
	{
		if ( abs(_numbers[i + 1] - _numbers[i]) < span)
		{
			span = abs(_numbers[i + 1] -_numbers[i]);
		}
	}
	return (span);
}

int	Span::longestSpan()
{
	if (_N < 2)
		throw std::logic_error("There can't be a span with less than 2 numbers");
	int	smallest = *std::min_element(_numbers.begin(), _numbers.end());
	int	biggest	= *std::max_element(_numbers.begin(), _numbers.end());

	int span = biggest - smallest;
	return (span);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (begin >= end)
		throw std::out_of_range("Out of range");
	for(; begin < end; begin++)
	{
		addNumber(*begin);
	}
	return ;
}

unsigned int		Span::getN() const
{
	return (this->_N);
}

int	Span::getNumber(int index) const
{
	return (this->_numbers[index]);
}

std::ostream&	operator<<(std::ostream &os, const Span &span)
{
	for (unsigned int i = 0; i < span.getN(); i++)
	{
		os << span.getNumber(i) << " ";
	}
	return (os);
}
