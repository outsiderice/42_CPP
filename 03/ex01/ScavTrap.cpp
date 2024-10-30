/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:12:39 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 17:17:28 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap: default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap: copy constructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &obj)
{
	std::cout << "ScavTrap: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hp = obj._hp;
		_ep = obj._ep;
		_dmg = obj._dmg;
	}
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: default destructor called" << std::endl;
	return ;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_dmg << " points of damage!" << std::endl;
	return ;
}

void	ScavTrap::guardGate(void)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "ScavTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return ;
}
