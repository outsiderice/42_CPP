#include "Data.hpp"

Data::Data(void) : number(13), name("default")
{
	std::cout << "Data: default constructor called" << std::endl;
	return ;
}

Data::Data(const Data &obj) : number(obj.number), name(obj.name)
{
	std::cout << "Data: copy constructor called" << std::endl;
	return ;
}

Data	&Data::operator=(const Data &obj)
{
	std::cout << "Data: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		number = obj.number;
		name = obj.name;
	}
	return (*this);
}

Data::~Data(void)
{
	std::cout << "Data: destructor called" << std::endl;
	return ;
}
