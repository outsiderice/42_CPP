/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:00:01 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 09:01:42 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("Ice")
{
	std::cout << "Ice: default constructor" << std::endl;
	return ;
}

Ice::Ice(const Ice &obj) : AMateria("Ice")
{
	std::cout << "Ice: copy constructor" << std::endl;
	return ;
}


Ice &Ice::operator=(const Ice &obj)
{
	std::cout << "Ice: copy assignment operator" << std::endl;
	return (*this);
}

Ice::~Ice(void)
{
	std::cout << "Ice: destructor" << std::endl;
	return ;
}

std::string	const &getType() const
{
	return(this->_type);
}

Ice*	Ice::clone()const
{
	Ice	*clone;
	clone = *this;
	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "Ice: \"* shoots an ice bolt at target._name\"" << std::endl;
	return ;
}
