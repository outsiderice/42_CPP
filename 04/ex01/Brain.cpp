/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 08:40:57 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &obj) : _ideas()
{
	std::cout << "Brain: copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = obj._ideas[i];
	return ;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << "Brain: copy assignment oprator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
	return ;
}
