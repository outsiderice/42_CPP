/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/09 14:10:06 by amagnell         ###   ########.fr       */
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

void	check_arguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. Correct usages is:\n";
		std::cout << "./winner <filename> <s1> <s2>" << std::endl;
		std::exit(2);
	}
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cout << "Empty arguments. Please enter valid arguments." << std::endl;
		std::exit(2);
	}
	return ;
}

int	main(int argc, char **argv)
{
	check_arguments(argc, argv);
	std::ifstream	src(argv[1]);
	std::string		src_name = argv[1];
	std::string		s1 = argv[2];
	std::string		s2 = argv[3];

	if (src.is_open())
	{
		cpy_to_dst(src, argv[2], argv[3]);
	}
	else
	{
		std::cerr << "Problem with src file." << std::endl;
		return (1);
	}
	src.close();
	return (0);
}
