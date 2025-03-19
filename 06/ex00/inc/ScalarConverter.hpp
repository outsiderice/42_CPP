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

        static int  sort_type(std::string input);
};

#endif