#pragma once
#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>

class PmergeMe
{
public:
	PmergeMe();
	PmergeMe(const PmergeMe &obj);
	~PmergeMe();

	PmergeMe &operator=(const PmergeMe &obj);

private:
	// pairup (sorted) recursively until it can't make up a pair
	// insert in jacobsthal sequence
	// insert in reverse order when no more jacobsthal numbers
};

#endif