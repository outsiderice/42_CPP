/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:30:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 16:51:42 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	*jungle[6];

	for (int i = 0; i < 3; i++)
	{
		jungle[i] = new Dog();
	}
	for (int i = 3; i < 6; i++)
	{
		jungle[i] = new Cat();
	}
	std::cout << "\nAll animals have been created.\n" << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete jungle[i];
		std::cout << "\n";
	}
	return (0);
}
