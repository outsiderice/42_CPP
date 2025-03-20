#include "ScalarConverter.hpp"

int  ScalarConverter::sort_type(std::string str)
{
    //look for identifying characters in input
    //return different number for each case
    // char length == 1 + ischar?
        // int parse whole string so there's not:
        // . == double or float
        // ending f == float
    //if (str.length() == 1 && str.cbegin()) continue here
}

void    ScalarConverter::convert(const char *input)
{
    std::string str = static_cast<std::string>(input);

    switch (sort_type(str))
    {
    case 1:
        convert_char(str);
        break ;
    case 2:
        convert_int(str);
        break ;
    case 3:
        convert_float(str);
        break ;
    case 4:
        convert_double(str);
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