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
		//if is number push to stack
		//if is operator check stack has two numbers and operate , else return error
	}
}