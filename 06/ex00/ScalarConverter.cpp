#include "ScalarConverter.hpp"

int  ScalarConverter::sort_type(std::string input)
{
    //look for identifying characters in input
    //return different number for each case
}

void    ScalarConverter::convert(const char *input)
{
    switch (sort_type(input))
    {
    case 1:
        /* convert char */
        break ;
    case 2:
        /* convert int */
        break ;
    case 3:
        /* convert float */
        break ;
    case 4:
        /* convert double */
        break ;
    default:
        break ;
    }
    return ;
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