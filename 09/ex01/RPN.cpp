#include "RPN.hpp"

RPN::RPN()
{}

RPN::RPN(std::string input)
{}

RPN::RPN(const RPN &obj) : _operands(obj._operands)
{}

RPN::~RPN()
{}

RPN&	RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		_operands = obj._operands;
	}
	return (this*);
}
