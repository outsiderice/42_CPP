#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <time.h>
#include <exception>

#include "ab.hpp"

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &obj);

	void	sort(char **argv);

private:
	double	_vector_time;
	double	_list_time;

	std::vector<int>	_withVector(char **argv);
	std::vector<int>	_parseToVector(char **argv);
	std::vector<ab>		_pairedUpVector(std::vector<int> numbers);
	std::vector<int>	_sortVector(std::vector<ab> pairs);
	std::vector<int>	_getAs(std::vector<ab> pairs);
	size_t				_binarysearch(std::vector<int> &main, int num, size_t start, size_t end);
	std::vector<int>	_insertBs(std::vector<ab> pend, std::vector<int> main);
	std::vector<size_t>	_jacobsthalNumbers(size_t pend_size);
	

	std::list<int>		_withList(char **argv);
	std::list<int>		_parseToList(char **argv);
	std::list<ab>		_pairedUpList(std::list<int> numbers);
	std::list<int>		_sortList(std::list<ab> pairs);
};

#endif