/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:19:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 08:36:17 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) :
{
	std::cout << "Brain: default constructor called" << std::endl;
	return ;
}

Brain::Brain(const Brain &obj) : _ideas(obj._ideas)
{
	std::cout << "Brain: copy constructor called" << std::endl;
	return ;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << "Brain: copy assignment oprator called" << std::endl;
	if (this != &obj)
		_ideas = obj._ideas;
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
	return ;
}
