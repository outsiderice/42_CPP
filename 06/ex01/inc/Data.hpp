#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class	Data
{
    public:
		int			number;
		std::string	name;

		Data(void);
		Data(const Data &obj);
		Data &operator=(const Data &obj);
		~Data(void);
		
};

#endif
