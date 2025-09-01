#pragma once
#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>

class   RPN
{
    public:
        RPN();
        RPN(std::string input);
        RPN(const RPN &obj);
        ~RPN();

        RPN&    operator=(const RPN &obj);
    private:
        std::stack<int>     _operands;
};

#endif