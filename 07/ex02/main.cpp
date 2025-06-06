#include <iostream>
#include "Array.hpp"

int main( void )
{
	Array<int>	intArray;
	Array<char>	charArray(7);
	try
	{
		std::cout << intArray._arr[2] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught" << e.what() << std::endl;
	}
	for (int i = 0; i < 7; i++)
	{
		charArray._arr[i] = i + 42;
		std::cout << charArray._arr[i] << std::endl;
	}
	return (0);
}
