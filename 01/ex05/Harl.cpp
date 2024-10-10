/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:24:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/10 18:48:02 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
	:	_ptr(&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error),
		_lvls("DEBUG", "INFO", "WARNING", "ERROR")
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cerr << "[DEBUG]:\n"
		<< "Contextual information.\n"
		<< "Mostly used for problem diagnosis." 
		<< std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cerr << "[INFO]:\n"
		<< "Contains extensive information. \n"
		<< "They are helpful for tracing program execution in a production environment" 
		<< std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cerr << "[WARNING]:\n" 
		<< "Warning messages indicate a potential issue in the system.\n"
		<< "Can be handled or ignored." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cerr << "[ERROR]:\n" 
		<< "An unrecoverable error has occurred.\n" 
		<< "Usually a critical issue which requires manual intervention"
		<< std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
		
	return ;
}
