/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 11:38:46 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/18 08:43:00 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	str_toupper(std::string &str)
{
	std::string::iterator it;

	for (it = str.begin(); it != str.end(); it++)
		*it = toupper(*it);
	return (str);
}

int	main(int argc, char **argv)
{
	std::string	str;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for(int i = 1; i < argc; i++)
		{
			str = static_cast<std::string>(argv[i]);
			std::cout << str_toupper(str);	
		}
		std::cout << std::endl;
	}
	return (0);
}
