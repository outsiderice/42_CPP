/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:12:39 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/27 15:38:40 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap: default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap: copy constructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap: copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		_name = obj._name;
		_hp = obj._hp;
		_ep = obj._ep;
		_dmg = obj._dmg;
	}
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: default destructor called" << std::endl;
	return ;
}

void	FragTrap::attack(const std::string& target)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_ep--;
	std::cout << "FragTrap " << this->_name << " attacks " << target 
		<< " causing " << this->_dmg << " points of damage!" << std::endl;
	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name << " is already KO." << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " takes " << amount
		 << " points of damage!" << std::endl;
	if (amount > this->_hp)
		this->_hp = 0;
	else
		this->_hp = _hp - amount;
	return ;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	this->_hp = _hp + amount;
	this->_ep--;
	std::cout << "FragTrap " << this->_name << " repairs " << amount
		 << " points of damage!" << std::endl;
	return;
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_ep == 0 || this->_hp == 0)
	{
		std::cout << "FragTrap " << this->_name 
			<< " is unable to do anything anymore." << std::endl;
		return ;
	}
	std::cout << " Up top, give me five!!!" << std::endl;
	return ;
}
