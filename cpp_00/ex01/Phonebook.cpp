/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:44:15 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/16 18:43:43 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

void	Phonebook::add_contact(int id)
{
	Contact	temp;

	temp.setFirstName(get_user_input("Please enter first name : ", 0));
	temp.setLastName(get_user_input("Please enter last name : ", 0));
	temp.setNickname(get_user_input("Please enter nickname : ", 0));
	temp.setPhoneNumber(get_user_input("Please enter phone number : ", 1));
	temp.setDarkestSecret(get_user_input("Please enter darkest secret : ", 0));
	this->_contact_tab[id] = temp;
}

// void	Phonebook::display_phonebook()
// {
	
// }
