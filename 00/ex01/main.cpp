/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:17:27 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/23 19:49:16 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

int	main()
{
	PhoneBook	my_phonebook;
	std::string	str;

	my_phonebook.instructions();	
	while (1)
	{
		std::cout << "Enter command > ";
		getline(std::cin, str);
		if (!std::cin)
			return (0);
		else if (str == "EXIT")
			my_phonebook.exit();
		//else if (str == "ADD")
		//else if (str == "SEARCH")
		else if (str.empty())
			my_phonebook.instructions();
		else
			my_phonebook.instructions();
	}
	return (0);
}
