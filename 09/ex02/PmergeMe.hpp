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
	std::string	_allowed;

	double				_withVector(char **argv);
	std::vector<int>	_parseToVector(char **argv);
	std::vector<ab>		_pairedUpVector(std::vector<int> numbers);
	std::vector<int>	_getAs(std::vector<ab> pairs);
	std::vector<int>	_vectorMain(std::vector<ab> pairs);

	double				_withList(char **argv);
	std::list<int>		_parseToList(char **argv);
	std::list<ab>		_pairedUpList(std::list<int> numbers);
	std::list<int>		_listMain(std::list<ab> pairs);
	// insert in jacobsthal sequence
	// insert in reverse order when no more jacobsthal numbers
};

#endif