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
	_withVector(argv);
	_withDeque(argv);
	//print before
	//print after
	//print vector time in microseconds
	//print deque time in microseconds
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