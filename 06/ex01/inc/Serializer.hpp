#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>

class	Serializer
{
    public:
		static uintptr_t serialize(Data *ptr);
		static deserialize(uintptr_t raw);
    private:
		Serializer(void);
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);
		~Serializer(void);
};

#endif
