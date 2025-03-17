#include "ScalarConverter.hpp"

void    ScalarConverter::convert(const char *input)
{
    //identify input type
    //convert to char
    //convert to int
    //convert to float
    //convert to double
}

//Constructors, operators and destructors
ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::ScalarConverter(const ScalarConverter &obj) 
{
    (void)obj;
}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &obj)
{
    (void)obj;
	return (*this);
}
ScalarConverter::~ScalarConverter(void)
{
}