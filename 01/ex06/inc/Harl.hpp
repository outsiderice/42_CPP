/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:21:51 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/10 19:24:21 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class	Harl
{
	private:
		void		(Harl::*_ptr[4])(void);
		std::string	_lvls[4];

		void		_debug(void);
		void		_info(void);
		void		_warning(void);
		void		_error(void);

	public:
		Harl(void);
		~Harl(void);		

		void	complain(std::string level);
};

#endif
