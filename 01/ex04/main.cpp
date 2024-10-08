/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/08 11:32:53 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	cpy_to_dst(std::ifstream src, char *s1, char *s2)
{
	std::ofstream	dst ();
	std::string		line;
	
	while (!src.eof())
	{
		getline(src, line);
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	src;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. To use correctly pass:\n";
		std::cout << "./winner <filename> <s1> <s2>" << std::endl;
		return (2);
	}	
	src.open(argv[1]);
	if (src.is_open())
	{
		cpy_to_dst(src, argv[2], argv[3]);
	}
	else
	{
		std::cout << "Problem with src file." << std::endl;
		return (1);
	}
	src.close();
	return (0);
}
