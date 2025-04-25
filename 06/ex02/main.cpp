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
    try
    {
        A*   isA = dynamic_cast<A*>(p);
        if (isA != nullptr)
            std::cout << "A" << std::endl;
        B*   isB = dynamic_cast<B*>(p);
        if (isB != nullptr)
            std::cout << "B" << std::endl;
        C*   isC = dynamic_cast<C*>(p);
        if (isC != nullptr)
            std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return ;
}

void    identify(Base& p)
{
    return ;
}