/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:20:00 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/23 12:29:44 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_fixed_num;
		static const int	_fract_bits = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &obj);
		Fixed(const int num);
		Fixed(const float num);

		Fixed &operator=(const Fixed &obj);
		bool &operator>(const Fixed &obj1, const Fixed &obj2);
		bool &operator<(const Fixed &obj1, const Fixed &obj2);
		bool &operator>=(const Fixed &obj1, const Fixed &obj2);
		bool &operator<=(const Fixed &obj1, const Fixed &obj2);
		bool &operator==(const Fixed &obj1, const Fixed &obj2);
		bool &operator!=(const Fixed &obj1, const Fixed &obj2);

		Fixed &operator+(const Fixed &obj1, const Fixed &obj2);
		Fixed &operator-(const Fixed &obj1, const Fixed &obj2);
		Fixed &operator*(const Fixed &obj1, const Fixed &obj2);
		Fixed &operator/(const Fixed &obj1, const Fixed &obj2);

		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed &operator++(int post);
		Fixed &operator--(int post);

		~Fixed(void);

		int				getRawBits(void) const;
		void			setRawBits(int const raw);
		float			toFloat(void) const;
		int				toInt(void) const;
		static &Fixed	min(Fixed &p1, Fixed &p2);
		static &Fixed	min(const Fixed &p1, const Fixed &p2);
		static &Fixed	max(Fixed &p1, Fixed &p2);
		static &Fixed	max(const Fixed &p1, const Fixed &p2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
