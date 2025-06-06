/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amagnell <amagnell@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 17:04:09 by amagnell          #+#    #+#             */
/*   Updated: 2024/10/29 11:07:56 by amagnell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class	Brain
{
	public:
		Brain(void);
		Brain(std::string type);
		Brain(const Brain &obj);
		Brain &operator=(const Brain &obj);
		virtual ~Brain(void);

		std::string	getIdea(void) const;

	protected:
		std::string	_ideas[100];
};

#endif
