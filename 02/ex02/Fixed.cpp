/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:14:46 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/25 12:55:35 by amagnell         ###   ########.fr       */
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

bool	Fixed::operator>(const Fixed &obj)
{
	return (_fixed_num > obj.getRawBits());
}

bool	Fixed::operator<(const Fixed &obj)
{
	return (_fixed_num < obj.getRawBits());
}

bool	Fixed::operator>=(const Fixed &obj)
{
	return (_fixed_num >= obj.getRawBits());
}

bool	Fixed::operator<=(const Fixed &obj)
{
	return (_fixed_num <= obj.getRawBits());
}

bool	Fixed::operator==(const Fixed &obj)
{
	return (_fixed_num == obj.getRawBits());
}

bool	Fixed::operator!=(const Fixed &obj)
{
	return (_fixed_num != obj.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &ref)
{
	Fixed	obj;

	obj.setRawBits(_fixed_num += ref.getRawBits());
	return (obj);
}

Fixed	Fixed::operator-(const Fixed &ref)
{
	Fixed	obj;

	obj.setRawBits(_fixed_num -= ref.getRawBits());
	return (obj);
}

Fixed	Fixed::operator*(const Fixed &ref)
{
	Fixed		obj;
	int64_t		tmp;

	tmp = static_cast<int64_t>(_fixed_num) * static_cast<int64_t>(ref.getRawBits());
	obj.setRawBits(static_cast<int>(tmp) >> Fixed::_fract_bits);
	return (obj);
}

Fixed	Fixed::operator/(const Fixed &ref)
{
	Fixed	obj;
	int64_t	tmp;

	tmp = static_cast<int64_t>(_fixed_num) << Fixed::_fract_bits;
	obj.setRawBits( static_cast<int>(tmp) / ref.getRawBits());
	return (obj);
}

Fixed	&Fixed::operator++(void)
{
	_fixed_num++;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	_fixed_num--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	old = *this;
	++*this;
	return (old);
}

Fixed	Fixed::operator--(int)
{
	Fixed	old = *this;
	--*this;
	return (old);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int		Fixed::getRawBits(void) const
{
	return (this->_fixed_num);
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

Fixed	&Fixed::min(Fixed &p1, Fixed &p2)
{
	if (p1 < p2)
		return (p1);
	return (p2);
}

const Fixed	&Fixed::min(const Fixed &p1, const Fixed &p2)
{
	if (p1.getRawBits() < p2.getRawBits())
		return (p1);
	return (p2);
}

Fixed	&Fixed::max(Fixed &p1, Fixed &p2)
{
	if (p1 < p2)
		return (p2);
	return (p1);
}

const Fixed	&Fixed::max(const Fixed &p1, const Fixed &p2)
{
	if (p1.getRawBits() < p2.getRawBits())
		return (p2);
	return (p1);
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
