#include "easyfind.hpp"
#include <iostream>
#include <vector>

int	main(void)
{
	int	numbers[] = {1, 2, 3, 4, 5};
	std::vector<int>	v(numbers, numbers + sizeof(numbers) / sizeof(int));
	
	int	result = ::easyfind(v, 3);
	std::cout << result << std::endl;
	try 
	{
		result = ::easyfind(v, 100);
	}
	catch (const std::exception &e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
	return (0);
}
