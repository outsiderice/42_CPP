/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 18:26:45 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/05 15:59:27 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "Zombie constructor called" << std::endl;
	return ;
}

Zombie::Zombie(void)
{
	std::cout << "Default Zombie constructor called" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name;
	std::cout << " Zombie destructor called" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}
