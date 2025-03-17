#include "ScalarConverter.hpp"
#include <iostream>
#include <stdlib.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Wrong usage: input one argument!\n";
        std::cout << "  Hint: ./convert argument" << std::endl;
        return (EXIT_FAILURE);
    }
    ScalarConverter::convert(argv[1]);
    return (EXIT_SUCCESS);
}