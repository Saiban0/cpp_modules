/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/15 18:40:34 by bchedru           #+#    #+#             */
/*   Updated: 2025/01/17 17:54:46 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(const std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(const std::string last_name)
{
	this->_last_name = last_name;
}

void	Contact::setNickname(const std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(const std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(const std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

std::string	Contact::getFirstName()
{
	return (_first_name);
}
std::string	Contact::getLastName()
{
	return (_last_name);
}

std::string	Contact::getNickname()
{
	return (_nickname);
}

std::string	Contact::getPhoneNumber()
{
	return (_phone_number);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkest_secret);
}
