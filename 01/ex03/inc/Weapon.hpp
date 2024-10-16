/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:48:30 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/16 15:22:38 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	private:
		std::string	_type;

	public:
		Weapon(void);
		Weapon(std::string type);
		~Weapon(void);

		std::string	const &getType(void) const;
		void		setType(std::string type);
};

#endif
