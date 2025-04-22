#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data	a;
	std::cout << "address of a is : " << &a << std::endl;
	uintptr_t b = Serializer::serialize(&a);
	std::cout << "converted pointer is : " << b << std::endl;
	Serializer::deserialize(b);
	std::cout << "ptr to Data is : " << &a << std::endl;
	return (0);
}
