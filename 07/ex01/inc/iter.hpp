#include <iostream>

//This is a function template

template <typename T> T	iter(T array, T len, T ft)
{
	int	i = 0;
	while (i < len)
	{
		ft(array[i]);
		i++;
	}
}

template <typename T> T	max(T x, T y)
{
	return (x > y) ? x : y;
}
