/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:40:28 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/21 16:53:12 by bchedru          ###   ########.fr       */
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

	void	add_contact(int id);
	void	display_phonebook();
	void	search_contact();
};

std::string	ft_itoa(int i);
void		upper_str(std::string *str);
std::string	get_user_input(std::string prompt, bool number);
bool		check_user_input(std::string input, bool number);
void		print_info(std::string str);

