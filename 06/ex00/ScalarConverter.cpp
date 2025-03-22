#include "ScalarConverter.hpp"

void    ScalarConverter::convert(const char *input)
{
    std::string str = static_cast<std::string>(input);

    if (str.empty())
    {
        std::cerr << "Error: input is empty" << std::endl;
        return ;
    }
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

int  ScalarConverter::sort_type(std::string str)
{
    if (str.length() == 1 && isalpha(str.front()) != 0)
        return (1);
        // int parse whole string so there's not:
        // . == double or float
        // ending f == float
}

void    ScalarConverter::convert_char(std::string str)
{}

void    ScalarConverter::convert_int(std::string str)
{}

void    ScalarConverter::convert_float(std::string str)
{}

void    ScalarConverter::convert_double(std::string str)
{}

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