/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/27 17:28:20 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal_hpp"

Animal::Animal(void) : _type("default")
{
	std::cout << "Animal: default constructor called" << std::endl;
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

void	Animal::makeSound(void)
{
	return ;
}
