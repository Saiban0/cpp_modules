#include "phonebook.h"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::setFirstName(std::string const first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string const last_name)
{
	this->_last_name = last_name;
}

void	Contact::setNickname(std::string const nickname)
{
	this->_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string const phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::setDarkestSecret(std::string const darkest_secret)
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
