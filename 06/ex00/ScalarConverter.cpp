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
        break ;
    }
    return ;
}

int  ScalarConverter::sort_type(std::string str)
{
    const char  *digits = "1234567890";
    bool    dot = false;
    bool    f = false;
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


    std::string::size_type  ch = str.find_first_not_of(digits);
    if (str[ch] == std::string::npos)
        return (2);
    std::string::iterator   it = str.end();
    if (str.at(*it) == 'f')
        f = true;
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