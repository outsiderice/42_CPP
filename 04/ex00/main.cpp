/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:30:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/28 11:44:43 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"

int	main(void)
{
	Cat		Nugget("cat");
	Animal	monster("default");

	Nugget.makeSound();
	std::cout << Nugget.getType() << std::endl;
	monster.makeSound();
	std::cout << monster.getType() << std::endl;
	return (0);
}
