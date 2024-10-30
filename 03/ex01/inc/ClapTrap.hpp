/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 14:34:23 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 17:16:22 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_ep;
		unsigned int	_dmg;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &obj);
		ClapTrap &operator=(const ClapTrap &obj);
		~ClapTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		std::string		getName(void);
		unsigned int	getDamage(void);
		unsigned int	getHP(void);
		unsigned int	getEnergy(void);
};
#endif
