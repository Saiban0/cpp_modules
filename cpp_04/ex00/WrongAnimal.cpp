/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:49:15 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 18:50:32 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->setType("wrong default");
	std::cout << "Default wrong animal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original)
{
	std::cout << "Wrong animal copy constructor called" << std::endl;
	*this = original;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Wrong animal destructor called" << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string	WrongAnimal::getType()const
{
	return (this->_type);
}

void	WrongAnimal::makeSound()const
{
	std::cout << "*This is an undefined wrong animal noise*" << std::endl;
}
