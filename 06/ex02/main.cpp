#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base*    generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;
    std::cout << n << std::endl;
    switch (n)
    {
    case 0:
        return (new A());
    case 1:
        return (new B());
    case 2:
        return (new C());
    default:
        return (NULL) ;
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
       std::cout << isA << "is type A" << std::endl;
       return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       B*   isB = dynamic_cast<B*>(&p);
       std::cout << isB << "is type B" << std::endl;
       return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
       C*   isC = dynamic_cast<C*>(&p);
       std::cout << isC  << "is type C" << std::endl;
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