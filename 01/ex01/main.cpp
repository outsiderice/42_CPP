/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 13:13:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/05 16:03:48 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;
	int		N = 3;

	horde = zombieHorde(N, "Bob");
	for(int	i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
