#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    public:
        static void convert(const char *input);
    private:
        ScalarConverter(void);
        ScalarConverter(const ScalarConverter &obj);
        ScalarConverter &operator=(const ScalarConverter &obj);
        ~ScalarConverter(void);

        static int  sort_type(std::string str);
        static void convert_char(std::string str);
        static void convert_int(std::string str);
        static void convert_float(std::string str);
        static void convert_double(std::string str);
};

#endif