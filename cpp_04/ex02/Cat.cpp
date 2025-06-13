/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:55 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/13 11:15:10 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	this->setType("Cat");
	this->_brain = new Brain();
	std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& original) : Animal(original)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = original;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat	&Cat::operator=(const Cat &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->setType(other.getType());
		delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}
