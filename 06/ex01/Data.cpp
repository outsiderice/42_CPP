#include "Data.hpp"

Data::Data(void) : _number(13), _name("default")
{
	std::cout << "Data: default constructor called" << std::endl;
	return ;
}

Data::Data(const Data &obj) : _number(obj._numer), _name(obj._name)
{
	std::cout << "Data: copy constructor called" << std::endl;
	return ;
}

Data	&Data::operator=(const Data &obj)
{
	std::cout << "Data: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_number = obj._number;
		_name = obj._name;
	}
	return (*this);
}

Data::~Data(void)
{
	std::cout << "Data: destructor called" << std::endl;
	return ;
}
