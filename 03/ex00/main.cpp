/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:09:55 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/26 17:01:13 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap a("A");
	ClapTrap b("B");
	
	a.attack("B");
	b.takeDamage(a.getDamage());
	b.beRepaired(1);
	std::cout << "A's ep is " << a.getEnergy() << std::endl;
	std::cout << "B's hp is " << b.getHP() << std::endl;
	return (0);
}
