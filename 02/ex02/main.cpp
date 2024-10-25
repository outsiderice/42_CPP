/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:23 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/25 19:03:06 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(10);

	std::cout << "---------original test start-----" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "---------original test end-----" << std::endl;
	
	std::cout << "---------arithmetic tests-----" << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "c * 2 is " << c * 2 << std::endl;
	std::cout << "c / 2 is " << c / 2 << std::endl;
	std::cout << "c + c is " << c + c << std::endl;
	std::cout << "c - c is "<< c - c << std::endl;
	std::cout << "a is " << a << std::endl;
	std::cout << "c + a is "<< c + a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c * b is " << c * b << std::endl;
	std::cout << "c / b is " << c / b << std::endl;

	std::cout << "---------logical tests-----" << std::endl;
	if (c == c)
		std::cout << "c is the same as c" << std::endl;
	if (c != a)
		std::cout << "c is different than a" << std::endl;
	if (a < c)
		std::cout << "a is smaller than c" << std::endl;
	if (c > a)
		std::cout << "c is bigger than a" << std::endl;
	return 0;
}
