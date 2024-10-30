/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 18:00:01 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 11:56:14 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"

ICharacter::ICharacter(std:: string name) : _name(name)
{
	std::cout << "ICharacter: default constructor" << std::endl;
	return ;
}

ICharacter::ICharacter(const ICharacter &obj)
{
	std::cout << "ICharacter: copy constructor" << std::endl;
	
	return ;
}


ICharacter &ICharacter::operator=(const ICharacter &obj)
{
	std::cout << "ICharacter: copy assignment operator" << std::endl;
	return (*this);
}

ICharacter::~ICharacter(void)
{
	std::cout << "ICharacter: destructor" << std::endl;
	return ;
}

std::string	const &getType() const
{
	return(this->_type);
}


