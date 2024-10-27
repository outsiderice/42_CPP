/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 16:09:55 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/27 15:35:37 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	FragTrap a("A");
	FragTrap b("B");

	for (int i = 0; i < 5; i++)
	{
		a.attack("B");
		b.takeDamage(a.getDamage());
	}
	b.beRepaired(1);
	std::cout << "A's ep is " << a.getEnergy() << std::endl;
	std::cout << "B's hp is " << b.getHP() << std::endl;
	return (0);
}
