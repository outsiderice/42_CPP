#include "RPN.hpp"

RPN::RPN() : _allowed("1234567890+-/*")
{}

RPN::RPN(const RPN &obj) : _allowed(obj._allowed), _operands(obj._operands)
{}

RPN::~RPN()
{}

RPN&	RPN::operator=(const RPN &obj)
{
	if (this != &obj)
	{
		_allowed = obj._allowed;
		_operands = obj._operands;
	}
	return (*this);
}

void	RPN::calculate(std::string input)
{
	if (input.find_first_not_of(_allowed) != std::string::npos)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	std::string			str;
	std::stringstream	ss;

	ss << input;
	while (getline(ss, str, ' '))
	{
		if (str.length() != 1)
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		if (isdigit(str[0]) == true)
			_operands.push(str[0] - '0');
		else
		{
			if (_operands.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			operate(str);
		}
	}
	if (_operands.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return ;
	}
	//print
	return ;
}

void	RPN::operate(std::string sign)
{
	int	op1 = _operands.top();
	_operands.pop();
	int	op2 = _operands.top();
	_operands.pop();
	if (sign == "+")
	{
		_operands.push(op1 + op2);
		return ;
	}
	if (sign == "-")
	{
		_operands.push(op1 - op2);
		return ;
	}
	if (sign == "/")
	{
		_operands.push(op1 / op2);
		return ;
	}
	if (sign == "*")
	{
		_operands.push(op1 * op2);
		return ;
	}
}