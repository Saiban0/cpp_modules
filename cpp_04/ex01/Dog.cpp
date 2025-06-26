/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:51 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/27 00:01:31 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->setType("Dog");
	this->_brain = new Brain();
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& original) : Animal(original)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = original;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog	&Dog::operator=(const Dog &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
{
		this->setType(other.getType());
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}	return *this;
}

void	Dog::makeSound()const
{
	std::cout << "*Bark*" << std::endl;
}
