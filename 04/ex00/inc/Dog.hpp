/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:06:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/28 11:20:27 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class	Dog : public Animal
{
	public:
		Dog(std::string type);
		Dog(const Animal &obj);
		Dog &operator=(const Dog &obj);
		~Dog(void);

		virtual void	makeSound(void) const;
};

#endif
