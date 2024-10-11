/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:54:48 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/11 19:35:30 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name 
		<< " attacks with their "
		<< this->_weapon->getType() << std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon &type)
{
	this->_weapon = &type;
	return ;
}
