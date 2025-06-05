#include <iostream>

//This is a class template

template <typename T> class	Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &obj);
		~Array(void);

		unsigned int	size() const;
		class	OutOfBoundsException : public std::exception
		{
			public:
				const char	*what() const throw();
		}

	private:
		T	*_arr;
};

//implementation

Array::Array(void) : _arr(NULL)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

Array::Array(unsigned int n)
{
	_arr = new T[n];
	std::cout << "param constructor called" << std::endl;
	return ;
}

Array::Array(const Array &obj)
{
	if (this != &obj)
	{
		
	}
	return ;
}

~Array::Array(void)
{
	std::cout << "destructor called" << std::endl;
	delete[] _arr;
}

const char	*Array::OutOfBoundsException::what() const throw()
{
	return ("Out of bounds");
}

unsigned int	Array::size()
{
	int i = 0;
	while (T[i])
		i++;
	return(i);
}
