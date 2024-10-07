/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 15:16:25 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/07 16:22:04 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>

class	HumanB
{
	private:
		std::string	_name;
		Weapon		_weapon;
	public:
		HumanB(std::string name);
		~HumanB(void);

		void	attack(void) const;
};

#endif
