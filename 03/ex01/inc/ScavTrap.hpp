/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:20:01 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/26 19:40:45 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

class	ScavTrap : ClapTrap
{
	public:
		SlavTrap(std::string name);
		SlavTrap(const SlavTrap &obj);
		SlavTrap &operator=(const SlavTrap &obj);
		~SlavTrap(void);

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	guardGate(void);		
}

#endif
