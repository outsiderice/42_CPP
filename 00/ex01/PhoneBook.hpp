/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:52:31 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/25 13:08:01 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <sstream>
# include <stdlib.h>
# include "Contact.hpp"

class	PhoneBook
{
	private:
		int			_index;
		Contact		_contacts[8];
		std::string	_field_name[5];

		void		_truncate(int i, int field);
		void		_display_stored();
		void		_display_contact();
		bool		_is_index(std::string input);

	public:
		PhoneBook(int p1, const std::string (&p2)[5]);
		~PhoneBook(void);

		void	add(void);
		void	search(void);
		void	exit(void);
		void	instructions(void) const;
};

#endif
