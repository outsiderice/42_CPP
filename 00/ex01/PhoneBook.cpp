/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:11:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/23 19:13:38 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	PhoneBook::add(int	_index)
{
	std::string	contact_fields[5];
	int			i;
	(void)_index;

	i = 0;
	while(i < 5)
	{
		std::cout << "Enter field info >" << std::endl;
		getline(std::cin, contact_fields[i]);
		if ( contact_fields[i].empty())
			std::cout << "Contact field can't be left empty. Try again.\n";
		else
			i++;
	}
	//Phonebook._contacts[index] = ;
	//Phonebook.index++;
	return ;
}

void	PhoneBook::exit(void)
{
	std::cout << "Closing Phonebook. All contacts will be lost." << std::endl;
	//~Phonebook();
	std::exit(EXIT_SUCCESS);
}

void	PhoneBook::instructions(void) const
{
	std::cout << "Accepted commands are:\n";
	std::cout << "	ADD		-> save a new contact\n";
	std::cout << "	SEARCH	-> lookup contact details\n";
	std::cout << "	EXIT	-> exit the program" << std::endl;
	return ;
}
