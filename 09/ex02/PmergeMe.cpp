#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
}

void PmergeMe::sort(char **argv)
{
	double	vector_time = _withVector(argv);
	double	deque_time = _withDeque(argv);
	//print before
	//print after

	//print vector time in microseconds
	std::cout << "Time to process a range of ";
	std::cout << 0 << " elements with std::vector : ";
	std::cout << vector_time << " us" << std::endl;
	
	//print deque time in microseconds
	std::cout << "Time to process a range of ";
	std::cout << 0 << " elements with std::deque : ";
	std::cout << vector_time << " us" << std::endl;
}

//return time?
double	PmergeMe::_withVector(char **arg)
{
	clock_t	start = clock();
	//parse input
	//sort into pairs
	//algohell
	//end clock
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

double	PmergeMe::_withDeque(char **argv)
{
	clock_t	start = clock();
	//parse input
	//sort into pairs
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}