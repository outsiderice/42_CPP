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
	double				_withList(char **argv);
	std::vector<int>	_parseToVector(char **argv);
	std::list<int>		_parseToList(char **argv);
	std::vector<ab>		_vectorMain(std::vector<int> numbers);
	std::list<ab>		_listMain(std::list<int> numbers);
	// insert in jacobsthal sequence
	// insert in reverse order when no more jacobsthal numbers
};

#endif