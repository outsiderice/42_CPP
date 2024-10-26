/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:45:43 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/26 15:01:00 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hp(10), _ep(10), _dmg(0)
{
	std::cout << "ClapTrap: default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &obj) _name(obj._name), _hp(obj._hp), _ep(obj.ep), _dmg(obj.dmg)
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
