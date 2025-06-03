#include <iostream>

//This is a class template

template <typename T> class	Array
{
	T*;

	Array(void);
	Array(unsigned int n) : T();
	Array(Array);
	
	int	size() const
	{
		int i = 0;
		while (T[i])
			i++;
		return(i);
	}
};
