/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:00:01 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 19:02:59 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std:: string const &type) : _type(type)
{
	std::cout << "AMateria: default constructor" << std::endl;
	return ;
}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{
	std::cout << "AMateria: copy constructor" << std::endl;
	return ;
}


AMateria &AMateria::operator=(const AMateria &obj)
{
	std::cout << "AMateria: copy assignment operator" << std::endl;
	if (this !=obj)
		__type = obj._type;
	return (*this);
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria: destructor" << std::endl;
	return ;
}

std::string	const &getType() const
{
	return(this->_type);
}


