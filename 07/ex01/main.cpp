#include <iostream>
#include "iter.hpp"

int main( void ) 
{
	std::string	arr[3] = { "hola", "hell", "bye"};
	::iter(arr, 3, ::print);
	return (0);
}
