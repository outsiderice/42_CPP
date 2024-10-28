/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:30:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/28 12:31:43 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Cat		Nugget;
	Dog		Trol;
	Animal	monster;

	Nugget.makeSound();
	std::cout << Nugget.getType() << std::endl;
	Trol.makeSound();
	std::cout << Trol.getType() << std::endl;
	monster.makeSound();
	std::cout << monster.getType() << std::endl;
	return (0);
}
