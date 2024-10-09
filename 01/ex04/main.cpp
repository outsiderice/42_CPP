/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/09 19:23:27 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <stdlib.h>

void	cpy_to_dst(std::ifstream &src, std::string &src_name, std::string &s1, std::string &s2)
{
	std::ofstream	dst;
	std::string		line;
	size_t			found;

	src_name.append(".replace");	
	dst.open(src_name.c_str());
	if(!dst.is_open())
	{
		std::cerr << "Error in new file" << std::endl;
		std::exit (1);
	}
	while (!src.eof())
	{
		getline(src, line);
		found = line.find(s1);
		if(found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);	
		}
	}
}

int	main(int argc, char **argv)
{
	std::ifstream	src;
	std::string		src_name;
	std::string		s1;
	std::string		s2;

	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments. Correct usages is:\n";
		std::cerr << "./winner <filename> <s1> <s2>" << std::endl;
		return (1);
	}
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
		std::cerr << "Problem in source file." << std::endl;
		return (1);
	}
	src.close();
	return (0);
}
