/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:11:35 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/25 15:38:35 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(int p1, const std::string (&p2)[5]) : _index(p1), _field_name()
{
	std::cout << "PhoneBook constructor called" << std::endl;
	for (int i = 0; i < 5; i++)
		_field_name[i] = p2[i];
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

	i = 0;
	while(i < 5)
	{
		std::cout << "Enter " << PhoneBook::_field_name[i] << " > ";
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
	if (this->_contacts[0].get_info(1).empty())
	{
		std::cout << "Phonebook empty" << std::endl;
		return ;
	}
	PhoneBook::_display_stored();
	PhoneBook::_display_contact();
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

void	PhoneBook::_display_stored(void)
{
	const int	field_width = 10;
	int			i;
	int			field;

	i = 0;
	field = 1;
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

void	PhoneBook::_display_contact(void)
{
	std::string			input;
	std::stringstream	aux;
	unsigned int		target;

	std::cout << "Enter index of contact to display > ";
	getline(std::cin, input);
	if (!std::cin)
		PhoneBook::exit();
	if(_is_index(input) == false)
	{
		std::cout << "Invalid index. Returning to start." << std::endl;
		return ;
	}
	aux << input;
	aux >> target;
	if (this->_contacts[target].get_info(1).empty())
	{
		std::cout << "No contact found at location." << std::endl;
		return ;
	}
	for(unsigned int i = 0; i < 5; i++)
	{
		std::cout << this->_field_name[i] << " : ";
		std::cout << this->_contacts[target].get_info(i + 1) << std::endl;
	}
	return ;
}

bool	PhoneBook::_is_index(std::string input)
{
	if (input.empty())
		return (false);
	if (input.length() > 1)
		return (false);
	if (input[0] >= '0' && input[0] < '8')
		return (true);
	return (false);
}
