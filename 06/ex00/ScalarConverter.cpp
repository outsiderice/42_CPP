#include "ScalarConverter.hpp"

void    ScalarConverter::convert(const char *input)
{
    std::string str = static_cast<std::string>(input);

    if (str.empty())
    {
        std::cerr << "Error: input is empty" << std::endl;
        return ;
    }
    sort_type(str);
    return ;
}

void  ScalarConverter::sort_type(std::string str)
{
    std::string pseudo[6] =
    {
        "-inf", "+inf", "-inff", "+inff", "nan", "nanf"
    };

    if (str.length() == 1 && isdigit(str[0]) == 0)
        convert_char(str);
    for (int i = 0; i < 6; i++)
    {
        if (str.compare(pseudo[i]) == 0)
            convert_pseudo_literals(str);
    }
    sort_numerals(str);
    std::cerr << "Error: bad input" << std::endl;
	exit(EXIT_FAILURE);
}

void  ScalarConverter::sort_numerals(std::string str)
{
    const char  *digits = "1234567890";
    std::string::size_type  start = 0;
    if (str[start] == '-')
        start++;
    std::string::size_type  ch = str.find_first_not_of(digits, start);
    std::string::size_type  dot_check = str.find_last_of('.');
    std::string::size_type  last = str.find_last_not_of(digits);
    std::string::size_type  f_check = str.find_first_of('f');
    if (ch == std::string::npos)
    {
        if (str.length() > 11)
            std::cerr << "Error: bad input" << std::endl;
        convert_int(str);
    }
    else if (str[ch] == '.' && str[last] == 'f' && dot_check == ch && f_check == last)
        convert_float(str);
    else if (str[ch] == '.' && last == ch)
        convert_double(str);
    return ;
}

void    ScalarConverter::convert_char(std::string str)
{
    std::cout << str << " :Char" << std::endl;

    char c = static_cast<char>(str[0]);
    if (isprint(c) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double  d = static_cast<double>(c);
    std::cout.precision(1);
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    exit(EXIT_SUCCESS);
}

void    ScalarConverter::convert_int(std::string str)
{
	long l = strtol(str.c_str(), NULL,10);
	if (l > INT_MAX || l < INT_MIN)
	{
		std::cerr << "Error: bad input" << std::endl;
		exit(EXIT_FAILURE);
	}
	int		i = l;
	char	c = static_cast<char>(i);
	float	f = static_cast<float>(i);
	double	d = static_cast<double>(i);
    if (isprint(c) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout.precision(1);
    std::cout << "int: " << i << std::endl;
    std::cout << std::fixed;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    exit(EXIT_SUCCESS);
}

void    ScalarConverter::convert_float(std::string str)
{
    float	f = strtod(str.c_str(), NULL);
	char	c = static_cast<char>(f);
	int		i = static_cast<int>(f);
	double	d = static_cast<float>(f);
    if (isprint(c) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout.precision(3);
	long		l = static_cast<long>(f);
	if (l > INT_MAX || l < INT_MIN)
    	std::cout << "int: overflows" << std::endl;
	else
    	std::cout << "int: " << i << std::endl;
    std::cout << std::fixed;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
    exit(EXIT_SUCCESS);
}

void    ScalarConverter::convert_double(std::string str)
{
    double	d = strtod(str.c_str(), NULL);
	char	c = static_cast<char>(d);
	int		i = static_cast<int>(d);
	float	f = static_cast<float>(d);
    if (isprint(c) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << c << std::endl;
    std::cout.precision(3);
	long		l = static_cast<long>(d);
	if (l > INT_MAX || l < INT_MIN)
    	std::cout << "int: overflows" << std::endl;
	else
    	std::cout << "int: " << i << std::endl;
    std::cout << std::fixed;
    std::cout << "float: " << f << "f" << std::endl;
    std::cout << "double: " << d << std::endl;
	exit(EXIT_SUCCESS);
}

void    ScalarConverter::convert_pseudo_literals(std::string str)
{
    if (str.compare(1, 4, "inff") == 0 || str.compare("nanf") == 0)
        str.erase(str.length() - 1);

    std::cout  << "char: impossible" << std::endl;
    std::cout  << "int: impossible" << std::endl;
    std::cout << "float: " << str << "f" << std::endl;
    std::cout << "double: " << str << std::endl;
    exit(EXIT_SUCCESS);
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
