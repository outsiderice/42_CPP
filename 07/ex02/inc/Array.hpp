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
		T				*_arr;
		unsigned int	_size;
};

//implementation

Array::Array(void) : _arr(NULL), _size(0)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

Array::Array(unsigned int n)
{
	_size = n;
	if (n > 0)
		_arr = new T[n];
	else
		_arr = NULL;
	std::cout << "parameter constructor called" << std::endl;
	return ;
}

Array::Array(const Array &obj)
{
	if (this != &obj)
	{
		_size = obj._size;
		if (_size > 0)
			_arr = new T[_size];
		else
			_arr = NULL;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = obj._arr[i];
	}
	std::cout << "copy constructor called" << std::endl;
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
	return(_size);
}
