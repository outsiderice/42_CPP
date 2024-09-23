/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:11:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/23 10:38:34 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

void	PhoneBook::exit(void)
{
	std::cout << "Closing Phonebook. All contacts will be lost." << std::endl;
	//~Phonebook();
	std::exit(EXIT_SUCCESS);
}

void	PhoneBook::instructions(void)
{
	std::cout << "Accepted commands are:\n";
	std::cout << "	ADD		-> save a new contact\n";
	std::cout << "	SEARCH	-> lookup contact details\n";
	std::cout << "	EXIT	-> exit the program" << std::endl;
	return ;
}
