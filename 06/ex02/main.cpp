#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>

Base*    generate(void)
{
    srand(time(NULL));
    int n = rand() % 3;
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
                std::cout << "Is type C" << std::endl;
        }
        else
                std::cout << "Is type B" << std::endl;
    }
    else
        std::cout << "Is type A" << std::endl;
    return ;
}

void    identify(Base& p)
{
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "Ref is type A" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "Ref is type B" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "Ref is type C" << std::endl;
        return ;
    }
    catch(const std::exception& e)
    {
        std::cerr << "No type identified" << std::endl;
    }
}

int main(void)
{
    Base* x = generate();

    identify(x);
    identify(*x);
}