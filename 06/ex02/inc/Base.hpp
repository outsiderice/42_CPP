#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


class	Base
{
	public:
		virtual	~Base(void);

		Base*	generate(void);
		void	identify(Base* p);
		void	identify(Base& p);
};

#endif