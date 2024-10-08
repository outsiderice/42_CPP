/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:50:41 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/08 09:49:27 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	ifstream	src;
	ofstream	dst;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. To use correctly pass:\n";
		std::cout << "./winner <filename> <s1> <s2>" << std::endl;
		return (2);
	}	
	src.open(argv[1]);
	if (src.is_open())
	{
		
	}
	else
	{
		std::cout << "Problem with src file" << std::endl;
		return (1);
	}
	src.close();
	return (0);
}
