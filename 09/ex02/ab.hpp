#pragma once
#ifndef AB_HPP
#define AB_HPP

#include <iostream>

class ab
{
    public:
    ab();
    ab(int a, int b);
    ab(const ab &obj);
    ~ab();

    ab &operator=(const ab &obj);

    private:
        int _a;
        int _b;
};

#endif