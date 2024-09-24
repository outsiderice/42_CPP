/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:52:31 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/24 10:21:04 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <stdlib.h>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		int			_index;
		Contact		_contacts[8];

	public:
		PhoneBook(int p);
		~PhoneBook(void);

		void	add(void);
		//search();
		void	exit(void);
		void	instructions(void) const;
	//	int		get_index(void) const;
	//	void	set_index();
};

#endif
