#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &obj)
{
	(void)obj;
}

PmergeMe::~PmergeMe()
{
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	(void)obj;
	return (*this);
}

void PmergeMe::sort(char **argv)
{
	try
	{
		std::vector<int>	ordered_vector = _withVector(argv);
		std::list<int>	ordered_list = _withList(argv);

		for (int i = 1; argv[i]; i++)
			std::cout << argv[i] << " ";
		std::cout << "\nVector result: ";
		for (size_t i = 0; i < ordered_vector.size(); i++)
			std::cout << ordered_vector[i] << " ";
		std::cout << "\nList result: ";
		std::list<int>::iterator	it = ordered_list.begin();
		for (; it != ordered_list.end(); it++)
			std::cout << *it << " ";
		std::cout << std::endl;
		std::cout << "Time to process a range of " << ordered_vector.size() ;
		std::cout << " elements with std::vector : "  << _vector_time << " us" << std::endl;
		std::cout << "Time to process a range of " << ordered_list.size() ;
		std::cout << " elements with std::list : "  << _list_time << " us" << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}

/*------------------------------------VECTOR FUNCTIONS------------------------------------*/

std::vector<int>	PmergeMe::_withVector(char **argv)
{
	std::cout << "in _withVector" << std::endl;
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
	std::cout << "in _parseToVector" << std::endl;
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
	std::cout << "in _pairedUpVector" << std::endl;
	std::vector<ab>	pairs;

	for (size_t i = 0; i < numbers.size(); i++)
	{
		if (++i < numbers.size())
		{
			ab	pair = ab(numbers[i - 1], numbers[i]);
			pairs.push_back(pair);
		}
		else
		{
			ab	pair = ab(numbers[i - 1], -1);
			pairs.push_back(pair);
		}
	}
	for (size_t i = 0; i < pairs.size(); i++)
	{
		std::cout << pairs[i].getA() << "<- pair A" << std::endl;
		std::cout << pairs[i].getB() << "<- pair B" << std::endl;
	}
	return (pairs);
}

std::vector<int>	PmergeMe::_sortVector(std::vector<ab> pairs)
{
	std::cout << "in _sortVector" << std::endl;
	std::vector<int>	main;

	std::cout << "pairs size in this iteration " << pairs.size() << std::endl;
	if (pairs.empty())
		return (main);
	size_t				pairs_size = pairs.size();
	if (pairs[pairs.size() - 1].isPair() == false)
		pairs_size--;
	if (pairs_size <= 1)
	{
		std::cout << "inserting " << pairs[0].getB() << std::endl;
		main.push_back(pairs[0].getB());
		std::cout << "inserting " << pairs[0].getA() << std::endl;
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
		size_t pos = _binarySearchVector(main, leftoverA, 0, main.size());
		main.insert(main.begin() + pos, leftoverA);
		std::cout << "inserting leftoverA: " << leftoverA << std::endl;
	}
	main = _insertBsToVector(pairs, main);
	return (main);
}

std::vector<int>	PmergeMe::_getAs(std::vector<ab> pairs)
{
	std::cout << "in _getAs" << std::endl;
	std::vector<int>	numbers;
	size_t				i = 0;

	while (i < pairs.size())
	{
		if (pairs[i].isPair() == true)
			numbers.push_back(pairs[i].getA());
		i++;
	}
	std::cout << "top nums are:" << std::endl;
	for (size_t i = 0; i < numbers.size(); i++)
		std::cout << numbers[i] << ", ";
	std::cout << std::endl;
	return (numbers);
}

size_t	PmergeMe::_binarySearchVector(std::vector<int> &v, int num, size_t start, size_t end)
{
	std::cout << "in _binarysearch Vector" << std::endl;
	if (start > v.size()) start = v.size();
    if (end > v.size()) end = v.size();
	while (start < end)
	{
		size_t	middle = start + (end - start) / 2;
		if (num < v[middle])
			end = middle;
		else
			start = middle + 1;
		
	}
	return (start);
}

std::vector<int>	PmergeMe::_insertBsToVector(std::vector<ab> pend, std::vector<int> main)
{
	std::cout << "in _insertBs" << std::endl;
	std::vector<size_t>	J = _jacobsthalNumbers(pend.size());
	std::vector<int>	insertion_order;

	insertion_order.push_back(0);
	size_t	smaller_index = 1;
	size_t	larger_index = 0;
	for (size_t k = 0; k < J.size(); k++)
	{
		larger_index = J[k];
		for (size_t i = larger_index; i > smaller_index; i--)
			insertion_order.push_back(i - 1);
		smaller_index = larger_index;
	}
	for (size_t i = pend.size(); i > larger_index; i--)
		insertion_order.push_back(i - 1);
	for (size_t index = 0; index < insertion_order.size(); index++)
	{
		size_t	i = insertion_order[index];
		int	b = 0;
		if (pend[i].isPair() == true)
			b = pend[i].getB();
		else
			b = pend[i].getA();
		std::cout << "inserting b: " << b << std::endl;
		size_t	pos = _binarySearchVector(main, b, 0, main.size());

		main.insert(main.begin() + pos, b);	
	}
	return (main);
}

std::vector<size_t>	PmergeMe::_jacobsthalNumbers(size_t pend_size)
{
	std::cout << "in _jacobnums" << std::endl;
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

/*------------------------------------LIST FUNCTIONS------------------------------------*/

std::list<int>	PmergeMe::_withList(char **argv)
{
	std::cout << "in _withList" << std::endl;
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
	std::cout << "in _parseToList" << std::endl;
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
	std::cout << "in _paireduplist" << std::endl;
	std::list<ab>	pairs;
	std::list<int>::iterator	it = numbers.begin();

	while (it != numbers.end())
	{
		int	first = *it;
		it++;
		if (it != numbers.end())
		{
			int	second = *it;
			pairs.push_back(ab(first, second));
			it++;
		}
		else
			pairs.push_back(ab(first, -1));
	}
	return (pairs);
}

std::list<int>		PmergeMe::_sortList(std::list<ab> pairs)
{
	std::cout << "in _orList" << std::endl;
	std::list<int>	main;
	if (pairs.empty())
		return (main);
	size_t	pairs_size = pairs.size();
	if (pairs.back().isPair() == false)
		pairs_size--;
	if (pairs_size <= 1)
	{
		main.push_back(pairs.front().getB());
		main.push_back(pairs.front().getA());
		return (main);
	}
	std::list<int>	top_nums = _getAs(pairs);
	std::list<ab>	top_pairs = _pairedUpList(top_nums);
	main = _sortList(top_pairs);

	int	leftoverA = -1;
	if (top_nums.size() % 2 == 1)
		leftoverA = top_nums.back();
	if (leftoverA != -1)
	{
		std::list<int>::iterator	pos = _binarySearchList(main, leftoverA);
		std::cout << "inserting leftoverA: " << leftoverA << std::endl;
		main.insert(pos, leftoverA);
	}
	main = _insertBsToList(pairs, main);
	return (main);
}

std::list<int>	PmergeMe::_getAs(std::list<ab> pairs)
{
	std::cout << "in _getAsList" << std::endl;
	std::list<int>			numbers;
	std::list<ab>::iterator	it = pairs.begin();

	while (it != pairs.end() && it->isPair() == true)
	{
		numbers.push_back(it->getA());
		it++;
	}
	return (numbers);
}

std::list<int>::iterator	PmergeMe::_binarySearchList(std::list<int> &l, int num)
{
	std::cout << "in binarysearch list" << std::endl;
	std::list<int>::iterator start = l.begin();
	while (start != l.end())
	{
		if (*start >= num)
			break ;
		start++;
	}
	return (start);
}

std::list<int>	PmergeMe::_insertBsToList(std::list<ab> pend, std::list<int> main)
{
	std::cout << "in _nsertbs list" << std::endl;
	std::list<size_t>	J = _listJacobsthalNumbers(pend.size());
	std::list<size_t>	insertion_order;
	insertion_order.push_back(0);

	size_t	smaller_index = 1;
	size_t	larger_index = 0;
	std::list<size_t>::iterator	it = J.begin();
	for (; it != J.end(); it++)
	{
		larger_index = *it;
		for (size_t i = larger_index; i > smaller_index; i--)
			insertion_order.push_back(i - 1);
		smaller_index = larger_index;
	}
	for (size_t i = pend.size(); i > larger_index; i--)
		insertion_order.push_back(i - 1);

	std::list<size_t>::iterator	index = insertion_order.begin();
	for (; index != insertion_order.end(); index++)
	{
		size_t	i = *index;	
		std::list<ab>::iterator	pend_it = pend.begin();
		std::advance(pend_it, i);
		int	b = 0;
		if (pend_it->isPair() == true)
			b = pend_it->getB();
		else
			b = pend_it->getA();
		std::cout << "inserting b: " << b << std::endl;
		std::list<int>::iterator	pos = _binarySearchList(main, b);
		main.insert(pos, b);
	}
	return (main);
}

std::list<size_t>	PmergeMe::_listJacobsthalNumbers(size_t pend_size)
{
	std::cout << "in _listjacobnums" << std::endl;
	std::list<size_t>	J;
	J.push_back(0);
	J.push_back(1);

	size_t	j = 0;
	while (true)
	{
		std::list<size_t>::reverse_iterator rit = J.rbegin();
		size_t	current = *rit;
		++rit;
		size_t	prev = *rit;
		j = current + (2 * prev);
		J .push_back(j);
		if (J.size() > pend_size)
			break ;
	}
	if (J.size() > 2)
	{
		J.pop_front();
		J.pop_front();
	}
	return (J);
}