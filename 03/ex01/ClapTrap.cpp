/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:45:43 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/27 15:08:22 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(100), _ep(50), _dmg(20)
{
	std::cout << "ClapTrap: default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj) : _name(obj._name), _hp(obj._hp), _ep(obj._ep), _dmg(obj._dmg)
{
	std::cout << "ClapTrap: copy constructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "ClapTrap: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hp = obj._hp;
		_ep = obj._ep;
		_dmg = obj._dmg;
	}
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: default destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "ClapTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_dmg << " points of damage!" << std::endl;
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name << "is already KO." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount
		 << " points of damage!" << std::endl;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp = _hp - amount;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "ClapTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_hp = _hp + amount;
	this->_ep--;
	std::cout << "ClapTrap " << this->_name << " repairs " << amount
		 << " points of damage!" << std::endl;
	return ;
}

std::string	ClapTrap::getName(void)
{
	return (this->_name);
}

unsigned int	ClapTrap::getDamage(void)
{
	return (this->_dmg);
}

unsigned int	ClapTrap::getHP(void)
{
	return (this->_hp);
}

unsigned int	ClapTrap::getEnergy(void)
{
	return (this->_ep);
}
