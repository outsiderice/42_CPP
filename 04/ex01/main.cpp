/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:30:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 13:10:18 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	Animal	jungle;

	jungle = new Animal[6];	
	for (int i = 0; i < 3; i++)
	{
		jungle = Dog();
	}
	for (int i = 3; i < 6; i++)
	{
		jungle[i] = Cat();
	}
	std::cout << "\n All animals have been created." << std::endl;
	for (int i = 0; i < 6; i++)
	{
		delete jungle[i];
		std::cout << "\n";
	}
	return (0);
}
