/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:14:46 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/23 12:05:54 by amagnell         ###   ########.fr       */
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

Fixed::Fixed(const int num) : _fixed_num(num << _fract_bits)
{
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const float num) : _fixed_num(static_cast<int>(roundf(num * (1 << _fract_bits))))
{
	std::cout << "Float constructor called" << std::endl;
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
	return (this->_fixed_num / (1 << this->_fract_bits));
}

void	Fixed::setRawBits(int const raw)
{
	this->_fixed_num = raw;
	return ;
}

int	Fixed::toInt(void) const
{
	return(this->_fixed_num >> this->_fract_bits);
}

float	Fixed::toFloat(void) const
{
	return(static_cast<float> (this->_fixed_num) / (1 << this->_fract_bits));
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
