/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:24:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/10 16:17:19 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cerr << "Contextual information.\n Mostly used for problem diagnosis." 
		<< std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cerr << "Contains extensive information. \n"
		<< "They are helpful for tracing program execution in a production environment" 
		<< std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cerr << "Warning messages indicate a potential issue in the system.\n"
		<< "Can be handled or ignored." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cerr << "An unrecoverable error has occurred.\n" 
		<< "Usually a critical issue which requires manual intervention"
		<< std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	
	return ;
}
