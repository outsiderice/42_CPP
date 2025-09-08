#include "ab.hpp"

ab::ab() : _a(0), _b(0)
{
}

ab::ab(int a, int b) : _a(a), _b(b)
{
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