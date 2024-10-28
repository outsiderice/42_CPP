/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:06:32 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/28 11:35:55 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class	Cat : public Animal
{
	public:
		Cat(std::string type);
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat(void);

		virtual void	makeSound(void) const;
};

#endif
