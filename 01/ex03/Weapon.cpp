/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:52:07 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/07 15:14:28 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	Weapon::getType(void) const
{
	return (_type);
}

void	Weapon::setType(std::string arg)
{
	this->_type = arg;
	return ;
}
