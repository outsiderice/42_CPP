/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:04:09 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 17:05:09 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(std::string type);
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		virtual ~Animal(void);

		virtual void	makeSound(void) const = 0;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
