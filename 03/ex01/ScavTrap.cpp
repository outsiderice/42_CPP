/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:12:39 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/26 19:44:43 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


SlavTrap::SlavTrap(std::string name) : _name(name), _hp(100), _ep(50), _dmg(20)
{
	std::cout << "SlavTrap: default constructor called" << std::endl;
	return ;
}

SlavTrap::SlavTrap(const SlavTrap &obj) : _name(obj._name), _hp(obj._hp), _ep(obj._ep), _dmg(obj._dmg)
{
	std::cout << "SlavTrap: copy constructor called" << std::endl;
	return ;
}

SlavTrap	&SlavTrap::operator=(const SlavTrap &obj)
{
	std::cout << "SlavTrap: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hp = obj._hp;
		_ep = obj._ep;
		_dmg = obj._dmg;
	}
	return (*this);
}

SlavTrap::~SlavTrap(void)
{
	std::cout << "SlavTrap: default destructor called" << std::endl;
	return ;
}

void	SlavTrap::attack(const std::string& target)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "SlavTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "SlavTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_dmg << " points of damage!" << std::endl;
	return ;
}

void	SlavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "SlavTrap " << this->_name << "is already KO." << std::endl;
		return ;
	}
	this->_hp = _hp - amount;
	std::cout << "SlavTrap " << this->_name << " takes " << amount
		 << " points of damage!" << std::endl;
	return ;
}

void	SlavTrap::beRepaired(unsigned int amount)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "SlavTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_hp = _hp + amount;
	this->_ep--;
	std::cout << "SlavTrap " << this->_name << " repairs " << amount
		 << " points of damage!" << std::endl;
	return;
}

void	SlavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return ;
}
