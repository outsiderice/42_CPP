#pragma once
#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <exception>
#include <iostream>

template <typename T> int easyfind(T where, int what)
{
	typename T::iterator it = std::find(where.begin(), where.end(), what);
	if (it != where.end())
		return (*it);
	else
		throw std::out_of_range("Number not found");
}

#endif
