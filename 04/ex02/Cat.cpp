/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 16:50:00 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat: default constructor called" << std::endl;
	_brain = new Brain();
	return ;
}

Cat::Cat(const Cat &obj) : Animal("Cat")
{
	std::cout << "Cat: copy constructor called" << std::endl;
	_brain = new Brain();
	*_brain = *(obj._brain);
	return ;
}

Cat	&Cat::operator=(const Cat &obj)
{
	std::cout << "Cat: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
	delete this->_brain;
	return ;
}

void	Cat::makeSound(void) const
{
	std::cout << "MeeoOOow" << std::endl;
	return ;
}
