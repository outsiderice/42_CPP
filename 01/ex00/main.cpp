/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 19:06:20 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/04 19:36:37 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	name1;
	std::string	name2;
	Zombie	*one;

	name1 = "I can be used outside newZombie";
	name2 = "I live and die in randomChump";
	one = newZombie(name1);
	randomChump(name2);
	one->announce();
	delete(one);
	return (0);
}
