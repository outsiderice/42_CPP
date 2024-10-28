/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:04:09 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/28 12:28:16 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &obj);
		Animal &operator=(const Animal &obj);
		~Animal(void);

		virtual void	makeSound(void) const;
		std::string	getType(void) const;

	protected:
		std::string	_type;
};

#endif
