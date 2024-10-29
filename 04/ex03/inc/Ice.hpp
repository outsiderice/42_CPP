/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 17:33:02 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 19:11:28 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class	Ice
{
	protected:
	public:
		Ice(std::string const &type);
		Ice(const Ice &obj);
		Ice &operator=(const Ice &obj);
		~Ice(void);
		
		virtual Ice* clone() const;
		virtual void use(ICharacter &target);
};

#endif
