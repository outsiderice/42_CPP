#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

//This is a class template

template <typename T> class	Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(const Array &obj);
		Array &operator=(const Array &obj);
		~Array(void);

		unsigned int	size(void) const;
		T&	operator[](int index);
		class	OutOfBoundsException : public std::exception
		{
			public:
				const char	*what() const throw();
		};

	private:
		T				*_arr;
		unsigned int	_size;
};

//implementation

template <typename T>
Array<T>::Array(void) : _arr(NULL), _size(0)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	_size = n;
	if (n > 0)
		_arr = new T[n];
	else
		_arr = NULL;
	std::cout << "parameter constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(const Array &obj)
{
	_size = obj._size;
	if (_size > 0)
		_arr = new T[_size];
	else
		_arr = NULL;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = obj._arr[i];
	std::cout << "assignment operator called" << std::endl;
}

template <typename T>
Array<T>&	Array<T>::operator=(const Array<T> &obj)
{
	if (this != &obj)
	{
		_size = obj._size;	
		if (_arr != NULL)
			delete[] _arr;
		if (_size > 0)
			_arr = new T[_size];
		else
			_arr = NULL;
		for (unsigned int i = 0; i < _size; i++)
			_arr[i] = obj._arr[i];
	}
	std::cout << "assignment operator called" << std::endl;
	return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "destructor called" << std::endl;
	delete[] _arr;
}

template <typename T>
T&	Array<T>::operator[](int index)
{
	if (index < 0 || index > _size)
		throw Array::OutOfBoundsExcception();
	return (_arr[index]);
}

template <typename T>
const char	*Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Out of bounds");
}

template <typename T>
unsigned int	Array<T>::size(void) const
{
	return(_size);
}
#endif
