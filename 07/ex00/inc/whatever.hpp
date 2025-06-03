#include <iostream>

//This is a function template

template <typename T> T swap(T x, T y)
{
	T 	swap;
	swap = x;
	x = y;
	y = swap;
}

template <typename T> T	min(T x, T y)
{
	return (x < y) ? x : y;
}

template <typename T> T	max(T x, T y)
{
	return (x > y) ? x : y;
}
