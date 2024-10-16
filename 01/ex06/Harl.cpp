/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:24:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/16 15:27:01 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)	
{
	_ptr[0] = &Harl::_debug;
	_ptr[1] = &Harl::_info;
	_ptr[2] = &Harl::_warning;
	_ptr[3] = &Harl::_error;
	_lvls[0] = "DEBUG";
	_lvls[1] = "INFO";
	_lvls[2] = "WARNING";
	_lvls[3] = "ERROR";
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::_debug(void)
{
	std::cerr << "[DEBUG]:\n"
		<< "	Contextual information.\n"
		<< "	Mostly used for problem diagnosis." 
		<< std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cerr << "[INFO]:\n"
		<< "	Contains extensive information.\n"
		<< "	They are helpful for tracing program execution in a production environment." 
		<< std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cerr << "[WARNING]:\n" 
		<< "	Warning messages indicate a potential issue in the system.\n"
		<< "	Can be handled or ignored." << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cerr << "[ERROR]:\n" 
		<< "	An unrecoverable error has occurred.\n"
		<< "	Usually a critical issue which requires manual intervention."
		<< std::endl;
	return ;
}

void	Harl::complain(std::string level)
{
	int	i = 0;

	while (i < 4 && level != this->_lvls[i])
		i++;
	this->filter(i);
	return ;
}

void	Harl::filter(int index)
{
	switch (index)
	{
		case 0:
			this->_debug();
		case 1:
			this->_info();
		case 2:
			this->_warning();
		case 3:
			this->_error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return ;
}
