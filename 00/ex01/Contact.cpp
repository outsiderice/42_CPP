/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 15:14:11 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/24 09:48:57 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	std::cout << "Contact constructor called" << std::endl;
	return ;
}

Contact::~Contact(void)
{
	std::cout << "Contact destructor called" << std::endl;
	return ;
}

void	Contact::set_info(std::string str[5])
{
	this->_first_name = str[0];
	this->_last_name = str[1];
	this->_nickname = str[2];
	this->_phone_number = str[3];
	this->_darkest_secret = str[4];
	return ;
}
