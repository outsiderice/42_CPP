/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:33:02 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 19:07:39 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class	AMateria
{
	protected:
		std::string	_type;

	public:
		AMateria(std::string const &type);
		AMateria(const AMateria &obj);
		AMateria &operator=(const AMateria &obj);
		virtual ~AMateria(void);
		
		std::string const &getType() const;

		virtual AMateria* clone() const = 0; //lol this is why copying type makes no sense duh
		virtual void use(ICharacter &target);
};

#endif
