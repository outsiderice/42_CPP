/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 14:48:30 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/07 15:12:54 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

class	Weapon
{
	private:
		std::string	_type;
	public:
		std::string	getType(void) const;
		void		setType(std::string arg);
};

#endif
