/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:44:15 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/21 16:22:21 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Phonebook::Phonebook()
{
}

Phonebook::~Phonebook()
{
}

void	Phonebook::add_contact(int id)
{
	Contact	temp;

	temp.setFirstName(get_user_input("Please enter first name : ", 0));
	temp.setLastName(get_user_input("Please enter last name : ", 0));
	temp.setNickname(get_user_input("Please enter nickname : ", 0));
	temp.setPhoneNumber(get_user_input("Please enter phone number : ", 1));
	temp.setDarkestSecret(get_user_input("Please enter darkest secret : ", 0));
	if (check_contact(temp))
		this->_contact_tab[id] = temp;
}

void	Phonebook::display_phonebook()
{
	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (int i = 0; i < 8; i++){
		print_info(ft_itoa(i + 1));
		print_info(this->_contact_tab[i].getFirstName());
		print_info(this->_contact_tab[i].getLastName());
		print_info(this->_contact_tab[i].getNickname());
		std::cout << "|" << std::endl;
	}
	std::cout << "Enter contact id to view full info" << std::endl;
}

void	Phonebook::search_contact()
{
	std::string	input;
	int			id;
	bool		valid_input = false;

	display_phonebook();
	while (!valid_input){
		std::getline(std::cin, input);
		if (!std::cin.good())
			return;
		id = atoi(input.c_str());
		if (1 <= id && id <= 8)
			valid_input = true;
		else
			std::cout << "Contact ids are between 1 and 8 included" << std::endl;
	}
	id--;
	std::cout << "First name : " << this->_contact_tab[id].getFirstName() << std::endl;
	std::cout << "Last name : " << this->_contact_tab[id].getLastName() << std::endl;
	std::cout << "Nickname : " << this->_contact_tab[id].getNickname() << std::endl;
	std::cout << "Phone number : " << this->_contact_tab[id].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret : " << this->_contact_tab[id].getDarkestSecret() << std::endl;
}
