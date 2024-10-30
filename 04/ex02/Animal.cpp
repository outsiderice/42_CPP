/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 17:29:12 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal: default constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal: string constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "Animal: copy constructor called" << std::endl;
	return ;
}

Animal	&Animal::operator=(const Animal &obj)
{
	std::cout << "Animal: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}
