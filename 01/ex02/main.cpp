/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:51:55 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/05 17:12:04 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	var = "HI THIS IS BRAIN";
	std::string	*stringPTR = &var;
	std::string	&stringREF = var;

	std::cout << "Var memory address is: " << &var << "\n";	
	std::cout << "stringPTR memory address is: " << &stringPTR << "\n";	
	std::cout << "stringREF address is: " << &stringREF << "\n";
	std::cout << std::endl;
	std::cout << "var value is: " << var << "\n";
	std::cout << "value pointed by stringPTR is: " << stringPTR << "\n";
	std::cout << "value pointed by stringREF is: " << stringREF << "\n";
	return (0);
}
