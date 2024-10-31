/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/31 13:58:51 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog: default constructor called" << std::endl;
	_brain = new Brain();
	return ;
}

Dog::Dog(const Dog &obj) : Animal("Dog")
{
	std::cout << "Dog: copy constructor called" << std::endl;
	_brain = new Brain();
	*_brain = *(obj._brain);
	return ;
}

Dog	&Dog::operator=(const Dog &obj)
{
	std::cout << "Dog: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
	delete this->_brain;
	return ;
}

void	Dog::makeSound(void) const
{
	std::cout << "WUFFFF WUFFF arff!" << std::endl;
	return ;
}
