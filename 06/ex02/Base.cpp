#include "Base.hpp"

Base*    Base::generate(void)
{
    int n = 1+rand()%3;
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

void    Base::identify(Base* p)
{
    return ;   
}

void    Base::identify(Base& p)
{
    return ;
}

Base::~Base(void)
{
	std::cout << "Base: destructor called" << std::endl;
	return ;
}