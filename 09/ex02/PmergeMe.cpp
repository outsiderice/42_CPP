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
		std::vector<int>	ordered_vector = _withVector(argv);
		std::list<int>	ordered_list = _withList(argv);

		//print before
		//print after
		std::cout << "Time to process a range of " << 0 ;
		std::cout << " elements with std::vector : "  << _vector_time << " us" << std::endl;
		std::cout << "Time to process a range of " << 0 ;
		std::cout << " elements with std::list : "  << _list_time << " us" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

//VECTOR FUNCTIONS

std::vector<int>	PmergeMe::_withVector(char **argv)
{
	clock_t	start = clock();
	std::vector<int>	original_sequence = _parseToVector(argv);
	std::vector<ab>		pairs = _pairedUpVector(original_sequence);
	std::vector<int>	ordered_sequence = _sortVector(pairs);
	clock_t	end = clock();
	_vector_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	return (ordered_sequence);
}

std::vector<int>	PmergeMe::_parseToVector(char **argv)
{
	int					i = 1;
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

std::vector<int>	PmergeMe::_sortVector(std::vector<ab> pairs)
{
	std::vector<int>	main;
	if (pairs.size() == 1)
	{
		main.push_back(pairs[0].getB());
		main.push_back(pairs[0].getA());
		return (main);
	}
	std::vector<int> 	top_nums = _getAs(pairs);
	std::vector<ab>		top_pairs = _pairedUpVector(top_nums);
	main = _sortVector(top_pairs);

	int	leftoverA = -1;
	if (top_nums.size() % 2 == 1)
		leftoverA = top_nums.back();
	if (leftoverA != -1)
	{
		size_t pos = _binarysearch(main, leftoverA, 0, main.size());
		main.insert(main.begin() + pos, leftoverA);
	}
	main = _insertBs(pairs, main);
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

size_t	PmergeMe::_binarysearch(std::vector<int> &v, int num, size_t start, size_t end)
{
	size_t	middle = end / 2;
	while (start < end)
	{
		if (num < v[middle])
			end = middle;
		else
			start = middle + 1;
		middle = start + (end - start) / 2;
	}
	return (start);
}

std::vector<int>	PmergeMe::_insertBs(std::vector<ab> pend, std::vector<int> main)
{
	std::vector<size_t>	J = _jacobsthalNumbers(pend.size());
}

std::vector<size_t>	_jacobsthalNumbers(size_t pend_size)
{
	std::vector<size_t>	J;
	J.push_back(0);
	J.push_back(1);
	int	j = 0;
	while (true)
	{
		j = J[J.size() - 1] + (2 * J[J.size() - 2]);
		J.push_back(j);
		if (J.size() > pend_size)
			break ;
	}
	if (J.size() > 2)
	{
		J.erase(J.begin());
		J.erase(J.begin());
	}
	return (J);
}


//LIST FUNCTIONS

std::list<int>	PmergeMe::_withList(char **argv)
{
	clock_t	start = clock();
	std::list<int>	original_sequence = _parseToList(argv);
	std::list<ab>	pairs = _pairedUpList(original_sequence);
	std::list<int>	ordered_sequence = _sortList(pairs);
	clock_t	end = clock();
	_list_time = static_cast<double>(end - start) / CLOCKS_PER_SEC;
	return (ordered_sequence);
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

std::list<ab>	PmergeMe::_pairedUpList(std::list<int> numbers)
{
	std::list<ab>	main;
	return (main);
}