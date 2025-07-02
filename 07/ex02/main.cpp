#include <iostream>
#include "Array.hpp"

int main( void )
{
	//construction with no parameter
	Array<float>	empty;
	std::cout << "empty size is " << empty.size() << std::endl;

	//construction with unsigned int as parameter
	unsigned int	n = 42;
	int *a = new int[n];
	Array<int>		intArray(42);

	//Elements can be accessed through the subscript operator: [ ]
	Array<char>		charArray(7);
	for (int i = 0; i < 7; i++)
	{
		charArray[i]= i + 42;
		std::cout << charArray[i] << std::endl;
	}
	//Out of bounds exception
	try
	{
		std::cout << charArray[7] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	//Construction by copy and assignment operator.
	Array<char>	copy = charArray;
	for (int i = 0; i < 7; i++)
	{
		std::cout << copy[i] << std::endl;
	}
	//Modify copy and show original and copy.
	copy[6] = '1';
	std::cout << "copy at index 6:	" << copy[6] << std::endl;
	std::cout << "original at index 6:	" << charArray[6] << std::endl;
	delete []a;
	return (0);
}
