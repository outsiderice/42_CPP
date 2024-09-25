/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:17:27 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/25 12:09:23 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	const std::string	field_name[5] =
	{
		"first name", "last name", "nickname", "phone number", "darkest secret"
	};
	PhoneBook	my_phonebook(0, field_name);
	std::string	str;

	std::cout << "\nWelcome to your Phonebook\n";
	my_phonebook.instructions();	
	while (1)
	{
		std::cout << "Enter command > ";
		getline(std::cin, str);
		if (!std::cin)
			return (0);
		else if (str == "EXIT")
			my_phonebook.exit();
		else if (str == "ADD")
			my_phonebook.add();
		else if (str == "SEARCH")
			my_phonebook.search();
		else if (str.empty())
			my_phonebook.instructions();
		else
			my_phonebook.instructions();
	}
	return (0);
}
