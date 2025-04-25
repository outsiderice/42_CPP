#include "Base.hpp"
#include <random>

Base*    generate(void)
{
    int n = 1 + rand() % 3;
    switch (n)
    {
    case 1:
        return (new A());
    case 2:
        return (new B());
    case 3:
        return (new C());
    default:
        return;
    }
}

void    identify(Base* p)
{
    A*   isA = dynamic_cast<A*>(p);
    if (isA == NULL)
    {
        B*   isB = dynamic_cast<B*>(p);
        if (isB == NULL)
        {
            C*   isC = dynamic_cast<C*>(p);
            if (isC == NULL)
                std::cout << "No type detected" << std::endl;
            else
                std::cout << "is type C" << std::endl;
        }
        else
                std::cout << "is type B" << std::endl;
    }
    else
        std::cout << "is type A" << std::endl;
    return ;
}

void    identify(Base& p)
{
    try
    {
       A*   isA = dynamic_cast<A*>(&p);
       std::cout << "is type A" << std::endl;
       return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       B*   isA = dynamic_cast<B*>(&p);
       std::cout << "is type B" << std::endl;
       return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       C*   isA = dynamic_cast<C*>(&p);
       std::cout << "is type C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cerr << "No type identified" << std::endl;
    }
    return ;
}

int main(void)
{
    Base* x = generate();
    identify(x);
}