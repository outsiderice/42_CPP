/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:14:46 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/23 09:12:26 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixed_num(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed &obj) : _fixed_num(obj._fixed_num)
{
	std::cout << "Copy constructor called" << std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &obj)
		_fixed_num = obj._fixed_num;
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->_fixed_num);
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_num = raw;
	return ;
}
