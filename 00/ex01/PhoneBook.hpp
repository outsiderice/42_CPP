/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 08:52:31 by amagnell          #+#    #+#             */
/*   Updated: 2024/09/23 12:47:48 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class	PhoneBook
{
	private:
		//int	_index;
		//Contact	_one_contact;

	public:
		PhoneBook(void);
		~PhoneBook(void);

		//addContact();
		//search();
		void	exit();
		void	instructions(void) const;
};

#endif
