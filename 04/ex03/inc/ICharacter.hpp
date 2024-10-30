/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 09:11:20 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/30 09:29:07 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARCATER_HPP

class	ICharacter
{
	public:
		ICharacter(std::string name);
		ICharacter(const ICharacter &obj);
		ICharacter &operator=(const ICharacter &obj);
		virtual	~ICharacter() {}

		virtual std::string const	&getName() const = 0;
		virtual void				equip(AMateria* m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;

	protected:
		std::string	_name;
		AMateria	_inventory[4];
		
};

#endif
