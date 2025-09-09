#include "ab.hpp"

ab::ab() : _a(0), _b(0)
{
}

ab::ab(int a, int b)
{
	if (a > b)
	{
		_a = a;
		_b = b;
	}
	else
	{
		_a = b;
		_b = a;
	}
	if (_a <= 0 || b <= 0)
		_isPair = false;
	else
		_isPair = true;
}

ab::ab(const ab &obj) : _a(obj._a), _b(obj._b)
{
}

ab::~ab() {}

ab &ab::operator=(const ab &obj)
{
	if (this != &obj)
	{
		_a = obj._a;
		_b = obj._b;
	}
	return (*this);
}

int	ab::getA() const
{
	return (_a);
}

int	ab::getB() const
{
	return (_b);
}

bool	ab::isPair() const
{
	return (_isPair);
}