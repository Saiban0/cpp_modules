/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bchedru <bchedru@student.42lehavre.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 17:48:51 by bchedru           #+#    #+#             */
/*   Updated: 2025/06/12 19:45:15 by bchedru          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	this->setType("Dog");
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
}
