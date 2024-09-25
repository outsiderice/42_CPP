/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:11:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/25 09:59:46 by amagnell         ###   ########.fr       */
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
	if (this->_index == 8)
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
	if (this->_contacts[i].get_info(field).empty())
	{
		std::cout << "Phonebook empty" << std::endl;
		return ;
	}
	while(!this->_contacts[i].get_info(field).empty() && i < 8)
	{
		std::cout << std::setw(field_width) << std::right << i << "|";
		while (field < 4)
		{
			if (this->_contacts[i].get_info(field).length() <= field_width)
			{
				std::cout << std::setw(field_width) << std::right
					<< this->_contacts[i].get_info(field) << "|";
			}
			else
				PhoneBook::_truncate(i, field);
			field++;
		}
		std::cout << std::endl;
		field = 1;
		i++;
	}
	return ;
}

void	PhoneBook::exit(void)
{
	std::cout << "Closing Phonebook. All contacts will be lost." << std::endl;
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

void	PhoneBook::_truncate(int i, int field)
{
	std::string		aux;

	aux = this->_contacts[i].get_info(field);
	for(std::string::size_type c = 0; c < 9; c++)
		std::cout << aux[c];
	std::cout << ".|";
	return ;
}
