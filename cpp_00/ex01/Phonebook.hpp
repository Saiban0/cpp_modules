/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:40:28 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/16 18:47:33 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "phonebook.h"

class	Phonebook
{
	private:
		Contact	_contact_tab[8];
	public:
		Phonebook();
		~Phonebook();

	void		add_contact(int id);
};
std::string	get_user_input(std::string prompt, bool number);
bool		verif_user_input(std::string input, bool number);

