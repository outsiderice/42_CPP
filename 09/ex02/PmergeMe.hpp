#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>
#include <iostream>
#include <time.h>

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

	double	_withVector(char **argv);
	double	_withList(char **argv);
	bool	_parseInput(char **argv);
	void	_sortIntoPairs();
	// insert in jacobsthal sequence
	// insert in reverse order when no more jacobsthal numbers
};

#endif