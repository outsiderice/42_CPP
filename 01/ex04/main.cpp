/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/09 18:04:29 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	cpy_to_dst(std::ifstream src, std::string src_name, std::string *s1, std::string *s2)
{
	std::fstream	dst(src_name.append(".replace"));
	std::string		line;
	size_t			found;
	
	if(!dst.is_open())
	{
		std::cerr << "File error" << std::endl;
		std::exit (1);
	}
	while (!src.eof())
	{
		getline(src, line);
		found = line.find(s1)
		if(found != string::npos)
		{
			//replace
		}
	}
}

void	check_arguments(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments. Correct usages is:\n";
		std::cerr << "./winner <filename> <s1> <s2>" << std::endl;
		std::exit(1);
	}
	if (!argv[1] || !argv[2] || !argv[3])
	{
		std::cerr << "Empty arguments. Please enter valid arguments." << std::endl;
		std::exit(1);
	}
	return ;
}

int	main(int argc, char **argv)
{
	std::ifstream	src;
	std::string		src_name;
	std::string		s1;
	std::string		s2;

	check_arguments(argc, argv);
	src.open(argv[1]);
	src_name = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	if (src.is_open() )
	{
		cpy_to_dst(src, src_name, s1, s2);
	}
	else
	{
		std::cerr << "Problem with source file." << std::endl;
		return (1);
	}
	src.close();
	return (0);
}
