#pragma once
#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>

class RPN
{
public:
	RPN();
	RPN(std::string input);
	RPN(const RPN &obj);
	~RPN();

	RPN &operator=(const RPN &obj);

	void	calculate(std::string input);
	void	operate(std::string sign);

private:
	std::string		_allowed;
	std::stack<int> _operands;
};

#endif