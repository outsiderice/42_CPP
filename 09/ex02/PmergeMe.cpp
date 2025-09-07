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
	double	deque_time = _withList(argv);
	//print before
	//print after

	std::cout << "Time to process a range of " << 0 ;
	std::cout << " elements with std::vector : "  << vector_time << " us" << std::endl;
	std::cout << "Time to process a range of " << 0 ;
	std::cout << " elements with std::list : "  << vector_time << " us" << std::endl;
}

double	PmergeMe::_withVector(char **argv)
{
	clock_t	start = clock();
	_parseInput(argv);
	//sort into pairs
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

double	PmergeMe::_withList(char **argv)
{
	clock_t	start = clock();
	_parseInput(argv);
	//sort into pairs
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}