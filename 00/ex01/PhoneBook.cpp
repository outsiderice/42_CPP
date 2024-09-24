/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:11:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/24 12:13:08 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int p) : _index(p)
{
	std::cout << "PhoneBook constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "PhoneBook destructor called" << std::endl;
	return ;
}

void	PhoneBook::add(void)
{
	int			i;
	std::string	contact_fields[5];
	std::string	field_name[5] = 
	{
		"first name", "last name", "nickname", "phone number", "darkest secret"
	};

	i = 0;
	while(i < 5)
	{
		std::cout << "Enter " << field_name[i] << ">" << std::endl;
		getline(std::cin, contact_fields[i]);
		if (!std::cin)
			std::exit(EXIT_SUCCESS);
		if ( contact_fields[i].empty())
			std::cout << "Contact field can't be left empty. Try again.\n";
		else
			i++;
	}
	if (this->_index == 7)
		this->_index = 0;
	this->_contacts[_index].set_info(contact_fields);
	this->_index++;
	return ;
}

void	PhoneBook::search(void)
{
	const int	field_width = 10;
	int			i;
	int			field;

	i = 0;
	field = 1;
	if(!this->_contacts[i].get_info(field).empty())
	{
		std::cout << std::setw(field_width) << std::right << i;
		std::cout << std::setw(field_width) << std::right << this->_contacts[i].get_info(field++);
		std::cout << std::setw(field_width) << std::right << this->_contacts[i].get_info(field++);
		std::cout << std::setw(field_width) << std::right << this->_contacts[i].get_info(field++);
	}
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
	std::cout << "	ADD	-> save a new contact\n";
	std::cout << "	SEARCH	-> lookup contact details\n";
	std::cout << "	EXIT	-> exit the program" << std::endl;
	return ;
}
