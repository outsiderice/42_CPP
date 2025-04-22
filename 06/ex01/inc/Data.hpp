#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

class	Data
{
    public:
		Data(void);
		Data(const Data &obj);
		Data &operator=(const Data &obj);
		~Data(void);
    private:
		int			_number;
		std::string	_name;
};

#endif
