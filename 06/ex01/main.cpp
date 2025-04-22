#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int	main(void)
{
	Data	a;

	std::cout << "Data member number is : " << a.number << ",Data member name is: " << a.name << std::endl;
	std::cout << "address of a is : " << &a << std::endl;
	uintptr_t b = Serializer::serialize(&a);
	std::cout << "converted pointer is : " << b << std::endl;
	Serializer::deserialize(b);
	std::cout << "ptr to Data is : " << &a << std::endl;
	std::cout << "Data member number is : " << a.number << ",Data member name is: " << a.name << std::endl;
	return (0);
}
