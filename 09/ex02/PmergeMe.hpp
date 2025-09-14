#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <time.h>
#include <exception>
#include <stdlib.h>

#include "ab.hpp"

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &obj);

	void	sort(int argc, char **argv);

private:
	double				_vector_time;
	double				_list_time;
	std::vector<size_t>	JVector;
	std::list<size_t>	JList;

	std::vector<int>	_withVector(int argc, char **argv);
	std::vector<int>	_parseToVector(char **argv);
	std::vector<ab>		_pairedUpVector(const std::vector<int> &numbers);
	std::vector<int>	_sortVector(const std::vector<ab> &pairs, int level);
	std::vector<int>	_getAs(const std::vector<ab> &pairs);
	size_t				_binarySearchVector(const std::vector<int> &v, int num, size_t start, size_t end) const;
	void				_insertBsToVector(const std::vector<ab> &pend, std::vector<int> &main);
	std::vector<size_t>	_jacobsthalNumbers(size_t pend_size) const;
	

	std::list<int>				_withList(int argc, char **argv);
	std::list<int>				_parseToList(char **argv);
	std::list<ab>				_pairedUpList(const std::list<int> &numbers);
	std::list<int>				_sortList(const std::list<ab> &pairs, int level);
	std::list<int>				_getAs(const std::list<ab> &pairs);
	std::list<int>::iterator	_binarySearchList(std::list<int> &l, int num);
	void						_insertBsToList(const std::list<ab> &pend, std::list<int> &main);
	std::list<size_t>			_listJacobsthalNumbers(size_t pend_size);
};

#endif