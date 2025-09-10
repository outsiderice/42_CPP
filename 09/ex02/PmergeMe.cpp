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
	std::vector<ab>		pairs = _pairedUpVector(originalSequence);

	std::vector<int>	main = _vectorMain(pairs);
	//algohell
	clock_t	end = clock();
	return (static_cast<double>(end - start) / CLOCKS_PER_SEC);
}

double	PmergeMe::_withList(char **argv)
{
	clock_t	start = clock();
	std::list<int>	originalSequence = _parseToList(argv);
	std::list<ab>	pairs = _pairedUpList(originalSequence);

	std::list<int> main = _listMain(pairs);
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

std::vector<ab>	PmergeMe::_pairedUpVector(std::vector<int> numbers)
{
	std::vector<ab>	main;

	for (int i = 0; i < numbers.size(); i++)
	{
		if (++i < numbers.size())
			main.push_back(ab(numbers[i - 1], numbers[i]));
		else
			main.push_back(ab(numbers[i - 1], 0));
	}
	return (main);
}

std::list<ab>	PmergeMe::_pairedUpList(std::list<int> numbers)
{
	std::list<ab>	main;
	return (main);
}

std::vector<int>	PmergeMe::_getAs(std::vector<ab> pairs)
{
	std::vector<int>	numbers;
	int					i = 0;
	
	while (i < pairs.size() && pairs[i].isPair() == true)
		numbers.push_back(pairs[i].getA());
	return (numbers);
}

std::vector<int>	PmergeMe::_vectorMain(std::vector<ab> pairs)
{
	std::vector<int>	main;
	if (pairs.size() == 1)
	{
		main.push_back(pairs[0].getA());
		main.push_back(pairs[0].getB());
		return (main);
	}
	std::vector<int> 	top_nums = _getAs(pairs);
	std::vector<ab>		top_pairs = _pairedUpVector(top_nums);
	main = _vectorMain(top_pairs);

	int	leftoverA = -1;
	if (top_nums.size() % 2 == 1)
		leftoverA = top_nums.back();
	if (leftoverA != -1)
	{
		std::vector<int>::iterator pos = std::lower_bound(main.begin(), main.end(), leftoverA);
		main.insert(pos, leftoverA);
	}
	return (main);
}