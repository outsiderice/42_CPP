#include "Serializer.hpp"

uintptr_t	Serializer::serialize(Data *ptr)
{
	uintptr_t	raw = reinterpret_cast<Data *>(ptr);
	return (raw);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<uintptr_t>(raw);
	return (ptr);
}

//Constructors, operators and destructors
Serializer::Serializer(void)
{
}

Serializer::Serializer(const Serializer &obj) 
{
    (void)obj;
}

Serializer	&Serializer::operator=(const Serializer &obj)
{
    (void)obj;
	return (*this);
}
Serializer::~Serializer(void)
{
}
