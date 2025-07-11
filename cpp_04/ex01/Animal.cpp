/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:15 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/27 00:00:13 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->setType("default");
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(const Animal& original)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = original;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

std::string	Animal::getType()const
{
	return (this->_type);
}

Animal	&Animal::operator=(const Animal &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->setType(other.getType());
	return *this;
}

void	Animal::makeSound()const
{
	std::cout << "*Undefined animal noise*" << std::endl;
}
