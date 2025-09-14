#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char **argv)
{
	if (argc < 3)
	{
		std::cerr << "Please input a sequence of positive numbers" << std::endl;
		return (1);
	}
	PmergeMe a;
	a.sort(argv);
	return (0);
}
