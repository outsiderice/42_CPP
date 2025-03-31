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
    case 5:
        convert_pseudo_literals(str);
    default:
        std::cerr << "Error: bad input" << std::endl;
        break ;
    }
    return ;
}

int  ScalarConverter::sort_type(std::string str)
{
    if (str.length() == 1 && isalpha(str[0]) != 0)
        return (1);

    std::string pseudo[6] =
    {
        "-inf", "+inf", "-inff", "+inff", "nan", "nanf"
    };
    for (int i = 0; i < 6; i++)
    {
        if (str.compare(pseudo[i]) == 0)
            return (5);
    }

    const char  *digits = "1234567890";
    std::string::size_type  start = 0;
    if (str[start] == '-')
        start++;
    std::string::size_type  ch = str.find_first_not_of(digits, start);
    std::string::size_type  last = str.find_last_not_of(digits, start);
    if (str[ch] == std::string::npos)
        return (2);
    else if (str[ch] == '.' && str[ch] == 'f')
        return (3);
    else if (str[ch] == '.' && ch == last)
        return (4);
    return (0);
}

void    ScalarConverter::convert_char(std::string str)
{
    //also convert to long to check for INT MAX and MIN
}

void    ScalarConverter::convert_int(std::string str)
{}

void    ScalarConverter::convert_float(std::string str)
{}

void    ScalarConverter::convert_double(std::string str)
{}

void    ScalarConverter::convert_pseudo_literals(std::string str)
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