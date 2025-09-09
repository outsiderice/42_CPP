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
	try
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
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

double	PmergeMe::_withVector(char **argv)
{
	clock_t	start = clock();
	std::vector<int>	originalSequence = _parseToVector(argv);
	std::vector<ab>		main = _vectorMain(originalSequence);
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

double	PmergeMe::_withList(char **argv)
{
	clock_t	start = clock();
	std::list<int>	originalSequence = _parseToList(argv);
	std::list<ab>	main = _listMain(originalSequence); //return ordered larger numbers?
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

std::vector<int>	PmergeMe::_parseToVector(char **argv)
{
	int	i = 1;
	std::vector<int>	numbers;

	while (argv[i])
	{
		if (atoi(argv[i]) <= 0)
			throw std::invalid_argument("Not a positive number");
		numbers.push_back(atoi(argv[i]));
		i++;
	}
	return (numbers);
}

std::list<int>	PmergeMe::_parseToList(char **argv)
{
	int	i = 1;
	std::list<int>	numbers;

	while (argv[i])
	{
		if (atoi(argv[i]) <= 0)
			throw std::invalid_argument("Not a positive number");
		numbers.push_back(atoi(argv[i]));
		i++;
	}
	return (numbers);
}

std::vector<ab>	PmergeMe::_vectorMain(std::vector<int> numbers)
{
	std::vector<ab>	main;

	//put numbers into ab pairs in main
	for (int i = 0; i < numbers.size(); i++)
	{
		if (++i < numbers.size())
			main.push_back(ab(numbers[i - 1], numbers[i]));
		else
			main.push_back(ab(numbers[i - 1], 0));
	}
}