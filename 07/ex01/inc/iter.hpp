#include <iostream>

//This is a function template

template <typename T> void	iter(T *array, unsigned int len, void (*ft)(T&))
{
	unsigned int	i = 0;
	while (i < len)
	{
		ft(array[i]);
		i++;
	}
}

template <typename T> void	print(T x)
{
	std::cout << x << std::endl;
}
