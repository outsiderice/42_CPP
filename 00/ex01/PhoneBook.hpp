/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:52:31 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/25 10:14:26 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <stdlib.h>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		int			_index;
		Contact		_contacts[8];
		void		_truncate(int i, int field);
		void		_display_stored();
		void		_display_contact();

	public:
		PhoneBook(int p);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
		void	exit(void);
		void	instructions(void) const;
};

#endif
